#include "mymalloc.h"
#include "list.h"

#define malloc my_malloc
#define free my_free

int main()
{
	int *ptr = (int*) malloc(sizeof(int));
	print_unfreed_ptrs(); 
	int *ptr1 = (int*) malloc(sizeof(int));
	print_unfreed_ptrs(); 
	free(ptr);
	int *ptr2 = (int*) malloc(sizeof(int));
	print_unfreed_ptrs(); 
	int *ptr3 = (int*) malloc(sizeof(int));
	print_unfreed_ptrs(); 
	return 0;
}
