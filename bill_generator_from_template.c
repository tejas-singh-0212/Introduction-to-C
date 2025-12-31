/*
we have to fill in values to a template bill.txt, which looks something like:
Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
Please visit our outlet {{outlet}} for any kind of problems. We hope to serve you again soon.
You have to read this file and replace the values:
{{name}} - Rahul
{{item}} - Table fan
{{outlet}} - Ahuja electronics
use file fucntion in c to accomplish the same
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * replace_word(const char * str, const char * old_word, const char * new_word){
    char * result_string;
    int i, count = 0;
    int new_word_length = strlen(new_word);
    int old_word_length = strlen(old_word);
    //lets count the number of times old word occurs in the string
    for( i=0; str[i]!='\0'; i++){
        if(strstr(&str[i],old_word)==&str[i]){
            count++;
            // jump over this word
            i += old_word_length - 1;
        }
    }
    // making a new string to fir in the replaced words
    result_string = (char *)malloc(i+count * (new_word_length - old_word_length) + 1);
    i = 0;
    while(*str){
        // compare the sub-string with result
        if(strstr(str, old_word) == str){
            strcpy(&result_string[i], new_word);
            i += new_word_length;
            str += old_word_length;
        }else{
            result_string[i] = *str;
            i += 1;
            str += 1;
        }
    }
    result_string[i] = '\0';
    return result_string;
    free(result_string);
}

void main(){
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    //a bill.txt file must exist with the content given below for this program to work
    /*
    Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    Please visit our outlet {{outlet}} for any kind of problems. We hope to serve you again soon.
    */
    ptr = fopen("bill.txt","r");
    ptr2 = fopen("gen_bill.txt","w");
    char * str = (char *)malloc(200 * sizeof(char));
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);
    //call the replace_word function and generate new_str;
    char * new_str;
    new_str = replace_word(str, "{{item}}", "shoes");
    new_str = replace_word(new_str, "{{outlet}}", "Ahuja electronics");
    new_str = replace_word(new_str, "{{name}}", "Rahul");
    printf("The given bill template was: %s\n", new_str);
    fprintf(ptr2, "%s", new_str);
    fclose(ptr);
    fclose(ptr2);
    free(str);
    return;
}