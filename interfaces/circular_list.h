
#ifndef CIRCULAR_LIST_H
#define CIRCULAR_LIST_H

typedef struct circular_list Circular_List;

Circular_List* create_circular_list();
void destroy_circular_list(Circular_List* list);
int is_empty_circular_list(Circular_List* list);
Circular_List* insert_circular_list(Circular_List* list, int value);
Circular_List* delete_circular_list(Circular_List* list, int value);
void print_circular_list(Circular_List* list);
Circular_List* search_circular_list(Circular_List* list, int value);

#endif //CIRCULAR_LIST_H
