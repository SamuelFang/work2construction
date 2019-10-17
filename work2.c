#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  

struct food {
    int price;
    char *name;
};

//was planning on having functions in separate file, but caused unknown error
struct food example() {
    int prices[3];
    prices[0] = 1;
    prices[1] = 2;
    prices[2] = 3;
    char *names[3];
    names[0] = "Apple";
    names[1] = "Banana";
    names[2] = "Pear";
    srand(time(NULL));
    struct food fruit;
    fruit.name = names[rand() %3];
    fruit.price = prices[rand() %3];
    return fruit;
}

void print(struct food example) {
    printf("Item: %s, Price: %d\n", example.name, example.price);
}

void modify(struct food *example, int newprice, char *newname) {
    example->price = newprice;
    example->name = newname;
}

int main() {
    printf("Test Example and Print, expecting random fruit and price printed \n");
    //print(example());
    struct food fruit;
    fruit = example();
    print(fruit);
    printf("Test Modify, expecting Orange with price 5 printed \n");
    modify(&fruit, 5, "Orange");
    print(fruit);
    return 1;
}