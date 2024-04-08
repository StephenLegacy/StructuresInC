#include <stdio.h>
#include "funct.h"

//Adding data to the arrays
void populateSneakers(struct Sneakers *sneakersArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Sneaker %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", sneakersArray[i].name);
        printf("Size: ");
        scanf("%d", &sneakersArray[i].size);
        printf("Price: ");
        scanf("%f", &sneakersArray[i].price);
        printf("Stock: ");
        scanf("%d", &sneakersArray[i].stock);
        printf("\n\t_________________________________");
        printf("\n");
    }
}

// printing data saved in the arrays
void printSneakers(struct Sneakers *sneakersArray, int arraySize) {
    printf("\n\tONESHOP SNEAKER CATALOGUE:\n");
    printf("\n ");
    for (int i = 0; i < arraySize; i++) {
        printf("\t\tSneaker:%d:\n", i + 1);
        printf("\t\tName: %s\n", sneakersArray[i].name);
        printf("\t\tSize: %d\n", sneakersArray[i].size);
        printf("\t\tPrice: %.2f\n", sneakersArray[i].price);
        printf("\t\tStock: %d\n", sneakersArray[i].stock);
        printf("\n\t_________________________________");
        printf("\n");
    }
}

