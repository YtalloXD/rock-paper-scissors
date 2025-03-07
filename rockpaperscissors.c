#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int computerChoice, playerChoice1;

    printf("\n*** Rock-Paper-Scissors ***\nChoose a fighter: ");
    printf("\n1. Rock.\n2. Paper.\n3. Scissors.\n");
    scanf("%d", &playerChoice1);

    srand(time(0));
    computerChoice = rand() % 3 + 1;

// Player's choice:
    switch (playerChoice1)
    {
    case 1:
        printf("\nPlayer: Rock - ");
        break;
    case 2:
    printf("\nPlayer: Paper - ");
    break;
    case 3:
    printf("\nPlayer: Scissors - ");
    break;
    default:
    printf("\nInvalid option. Try again.\n");
        break;
    }

// Computer's choice:
    switch (computerChoice)
    {
    case 1:
        printf("Computer: Rock\n");
        break;
    case 2:
    printf("Computer: Paper\n");
    break;
    case 3:
    printf("Computer: Scissors\n");
    break;
    }

    if (computerChoice == playerChoice1){
        printf("### Tie! ###\n");
    } else if (playerChoice1 == 1 && computerChoice == 3 || playerChoice1 == 2 && computerChoice == 1 || playerChoice1 == 3 && computerChoice == 2){
        printf("### YOU WIN! ###\n");
    } else{
        printf("### Computer wins! ###\n");
    }

    return 0;
}