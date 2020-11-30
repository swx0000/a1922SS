#include "lest.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);

	insertList(list,1,2);
	insertList(list,1,4);
	insertList(list,2,6);
	insertList(list,4,8);

	printList(list);
	printf("第%d个元素是%d\n",2,getList(list,2));

	delList(list,2);
	printList(list);

	return 0;
}
