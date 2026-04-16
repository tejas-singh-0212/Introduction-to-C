#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int gen_random_number(int n){
    srand(time(NULL));
    return rand()%n;    //generates random number between 0 to n
}
void choice_name(int a){    //to display the choice in string form
    if(a == 0) printf(" Rocks");
    else if(a == 1) printf(" Paper");
    else if(a == 2) printf(" Scissor");
    return;
}
void main(){
    //dynamically allocating memory for name
    char *name = (char *)malloc(20*sizeof(char));
    printf("~~~~Ready to play Rocks-Papers-Scissors!!~~~~\n");
    printf("Enter your name: ");
    gets(name);
    printf("Winner will be decided on best of three!\n");
    int player_win = 0, cmp_win = 0;
    int i=0;
    while(i<3){
        int player_choice;
        printf("\nRound %d\n\n",i+1);
        printf("%s's turn:\n",name);
        printf("Enter your choice (Rocks -> 0,Paper -> 1, Scissor -> 2): ");
        scanf("%d", &player_choice);
        //check if user input is valid
        if(player_choice == 0 || player_choice == 1 || player_choice == 2){
            int cmp_choice = gen_random_number(3);
            // condition for tie
            if(player_choice == cmp_choice){
                printf("You chose:"); choice_name(player_choice);
                printf("\nComputer chose:"); choice_name(cmp_choice);
                printf("\nThis round is a TIE");
            }
            // condition for player to win
            else if((player_choice == 0 && cmp_choice == 2)||(player_choice == 1 && cmp_choice == 0)||player_choice == 2 && cmp_choice == 1){
                printf("You chose:"); choice_name(player_choice);
                printf("\nComputer chose:"); choice_name(cmp_choice);
                printf("\n%s won this round",name);
                player_win++;
            }
            else{
                printf("You chose:"); choice_name(player_choice);
                printf("\nComputer chose:"); choice_name(cmp_choice);
                printf("\nComputer won this round");
                cmp_win++;
            }
            i++;
        }else{
            printf("Enter a valid input!!!\n");
        }
    }
    // Checking the final winner
    if(player_win == cmp_win){
        printf("\n\nGame ended with a TIE\nWell Played");
    }else if(player_win>cmp_win){
        printf("\n\n%s won the game by score of %d-%d",name,player_win,cmp_win);
    }else{
        printf("\n\nComputer won the game by %d-%d", cmp_win, player_win);
    }
    //freeing the memory allocated for name
    free(name);
    return;
}