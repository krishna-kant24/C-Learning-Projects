#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random_num, input_num, guess = 0, high_score = 0;
    srand(time(0));
    
    random_num = rand()%100 + 1;
    printf("Enter a number between 1 and 100\n");

    do{
        scanf("%d", &input_num);
        guess++;

        if(input_num < random_num){
            printf("Higher number please!\n");
        }
        else if(input_num > random_num){
            printf("Lower number please!\n");
        }
        else{
            break;
        }

    } while (random_num != input_num);

    printf("You guessed the correct number! YAY! \n");
    printf("Your score: %d guesses", guess);
    return 0;
}