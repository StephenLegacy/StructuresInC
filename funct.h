#ifndef FUNCT_H
#define FUNCT_H

struct Sneakers {
    char name[50];
    int size;
    float price;
    int stock;
};

void populateSneakers(struct Sneakers *sneakersArray, int arraySize);
void printSneakers(struct Sneakers *sneakersArray, int arraySize);

#endif

