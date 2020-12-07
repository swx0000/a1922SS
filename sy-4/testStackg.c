#include "stackg.h"
 
int main(int argc, char **argv)
{
       	List *list = (List *)malloc(sizeof(List));
       	initList(list);
       	push(list, 4);
      	push(list, 6);
      	push(list, 8);
     	push(list, 10);
	dispList(list);
   	Node *tmp = getTop(list);
   	printf("getTop result: %d\n", tmp->data);
    	pop(list);
    	dispList(list);
      	pop(list);
     	dispList(list);
      	printf("the list: %d\n", getLength(list));
		     
   	return 0;
}
