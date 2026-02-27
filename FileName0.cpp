#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 4
typedef struct item {
    char name[20];
    int price;
}ITEM;
void swap(ITEM* a, ITEM* b) {
    ITEM temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int least;
    ITEM p1[20] = { 0 };
    printf("최소 4개의 물건 데이터를 넣으세요\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%s %d", p1[i].name, &p1[i].price);
        
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%s %d\n", p1[i].name, p1[i].price);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        least = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (p1[j].price < p1[least].price)
                least = j;
        }
        swap(&p1[i], &p1[least]);
    }
    printf("가격이 싼 순서로 정렬 후>>>\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s %d\n", p1[i].name, p1[i].price);
    }
    return 0;
}