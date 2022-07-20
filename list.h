#ifndef LIST_H
#define LIST_H
#include<stdio.h>

struct node   
{  
    void *ptr;  
    struct node *next;   
}; 


struct node *head;  

void add_to_list(void *alloc_ptr); 
void remove_from_list(void *alloc_ptr);
void print_unfreed_ptrs(); 
#endif
