#include<stdio.h>
#include<stdlib.h>
#include "list.h"

void add_to_list(void *alloc_ptr)  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        ptr->ptr = alloc_ptr;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}  

void remove_from_list(void *alloc_ptr)  
{  
	struct node *ptr,*temp;  
	temp = head;  
	while (temp -> next != NULL)  
	{  
		if(temp->ptr == alloc_ptr)
		{
			temp->ptr == NULL;
			printf("\nRemoved from the list\n");
		}
		temp = temp -> next;  
	}  
}  
void print_unfreed_ptrs()  
{  
	struct node *ptr,*temp;  
	temp = head;  
	printf("printing unfreed\n");
	while (temp -> next != NULL)  
	{  
		if(temp->ptr != NULL)
		{
			printf("%u is not freed\n",temp->ptr);
		}
		temp = temp -> next;  
	}  
}  
