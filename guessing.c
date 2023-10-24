#include <stdio.h>

int main(){
    int secretNumber = 42;
    int guess;

    printf("********************************\n");
    printf("* Welcome to the Guessing Game *\n");
    printf("********************************\n");

    printf("Take a guess: ");
    scanf("%d", &guess);
    printf("You guessed %d!\n", guess);

    int got_it = guess == secretNumber;
    int higher = guess > secretNumber;

    if (got_it){
        printf("You got it!\n");
    } else if (higher){
        printf("You guessed higher than the secret number.\n");
    } else {
        printf("You guessed lower than the secret number.\n");
    }
}