#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, num_guesses = 0;
    
    
    srand(time(NULL));
    secret_number = rand() % 100 + 1;
    
    
    printf("Guess a number between 1 and 100.\n");
    
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        num_guesses++;
        
        if (guess > secret_number) {
            printf("Too high. Guess again.\n");
        } else if (guess < secret_number) {
            printf("Too low. Guess again.\n");
        }
    } while (guess != secret_number);
    
    printf("Congratulations! You guessed the number in %d guesses.\n", num_guesses);
    
    return 0;
}

