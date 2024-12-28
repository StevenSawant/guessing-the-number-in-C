#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    printf("Random number between 1 and 100: %d\n", random_number);
    
    int a; int guess;
    
    printf("Enter your starting guessing number: ");
    scanf("%d",&a);
    
    if (a==random_number){
        printf("You have guessed the number correct %d\n",random_number);
        printf("The number of guess required is/are %d",guess);
    }else if (a<1 || a>=101){
        printf("Enter a number between 1 to 100\n");
        printf("Enter your guess: ");
        scanf("%d",&a);
        guess++;
    }else {
        while(a!=random_number){
            if (a>random_number){
                printf("Lower number please\n");
                printf("Enter your guess: ");
                scanf("%d",&a);
                guess++;
            } else {
                printf("Higher number please\n");
                printf("Enter your guess: ");
                scanf("%d",&a);
                guess++;
            }
        }
        printf("You have guessed the number correct %d\n",random_number);
        printf("The number of guess is %d",guess);
    }
    

    return 0;
}
