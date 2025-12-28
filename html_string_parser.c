#include<stdio.h>
#include<string.h>
void parser(char * string){
    int in = 0, index = 0;
    for(int i=0; i<strlen(string); i++){
        if(string[i]=='<'){
            in = 1;
            continue;
        }else if(string[i]=='>'){
            in = 0;
            continue;
        }
        if(in == 0){
            string[index] = string[i];
            index++;
        }
    }
    string[index]='\0';
    //removing trailing spaces from beginning
    while(string[0]==' '){
        //shift string to left
        for(int k=0; k<strlen(string); k++){
            string[k] = string[k+1];
        }
    }
    //removing trailing spaces from end
    while(string[strlen(string)-1]==' '){
        //shift string to left
        string[strlen(string)-1] = '\0';
    }
}
void main(){
    char head[]="<h1>   This is heading level 1   </h1>";
    printf("%s\n",head);
    parser(head); //parser  should give the output "This is heading level 1"
    printf("The parsed string is ~%s~",head);
    return;
}