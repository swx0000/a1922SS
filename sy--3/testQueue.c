#include "queue.h"

int main(int argc,char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);
	inQueue(list,1);
	inQueue(list,2);
	inQueue(list,3);
	inQueue(list,4);
	dispList(list);
	Node *tmp = frontQueue(list);
	printf("gettop result: %d\n",tmp->data);
	outQueue(list);
	disQueue(list);
	outQueue(list);
	disQueue(list);
	printf("the list: %d\n",getLength(list));

	return 0;
}

