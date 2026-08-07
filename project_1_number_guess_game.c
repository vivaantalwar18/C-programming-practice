#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //initialize random number generator
    srand(time(0));

    //Generate random no. between 1 and 100
    int random_number = (rand() % 100) +1;
    int no_of_guesses=0;
    int guessed;

    //print the random number
    //printf("Random number is: %d\n", random_number);

    do{

        printf("guess the number: ");
        scanf("%d", &guessed);
        if(guessed>random_number){
            printf("lower number please!\n");
        }
        else if(random_number>guessed){
            printf("higher number please!\n");
        }
        else{
            printf("you guessed it right!\n");
        }
        no_of_guesses++;
    } while(guessed!=random_number);
    printf("you guessed it in %d attempts\n", no_of_guesses);
    return 0;
}