#include "../interfaces//circular_list.h"
#include <stdio.h>
#include <stdlib.h>

struct circular_list {
    int data;
    Circular_List *next;
};

Circular_List *create_circular_list() {
    return NULL;
}

Circular_List* insert_circular_list(Circular_List* head, int data) {
    Circular_List* ln = (Circular_List*)malloc(sizeof(Circular_List));
    ln->data = data;
    if (head == NULL) {
        ln->next = ln;
    } else {
        ln->next = head->next;
        head->next = ln;
    }
    return ln;
}

void print_circular_list(Circular_List* head) {
    if (head != NULL) {
        Circular_List* ln = head;
        printf("Elements in Circular List:\n");
        do {
            printf("%d ", ln->data);
            ln = ln->next;
        } while (ln != NULL);
    }
}

// outras implementações são alusivas às implementações de lista encadeada