
#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

typedef struct double_list Double_List;

Double_List* double_list_create();
void double_list_destroy(Double_List*);
int is_empty(Double_List*);
Double_List* double_list_insert(Double_List*, int value);
Double_List* double_list_remove(Double_List*, int info);
Double_List* double_list_find(Double_List*, int value);
void double_list_print(Double_List*);

#endif //DOUBLE_LIST_H
