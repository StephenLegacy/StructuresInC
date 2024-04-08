#include <stdio.h>
#include "funct.h"

int main() {
    int arraySize; //The User Will provide a size each run time
    
    printf("\t WELCOME TO ONESHOP ENTERPRISES SNEAKER COLLECTION\n");
    printf("\t*******************++++++***********************\n");
    printf("\t To Proceed, Enter the number of sneakers to work with today: ");
    scanf("%d", &arraySize);
    struct Sneakers sneakersArray[arraySize];
printf("\n\t-----------------------------------\n");
    populateSneakers(sneakersArray, arraySize);
    printf("\t ");
    printf("\n\t-----------------------------------\n");

    printSneakers(sneakersArray, arraySize);
    printf("\n ");
    printf("\t-----------------------------------\n");
    
    printf("\t STEPHEN OLOO\n");

    return 0;
}

