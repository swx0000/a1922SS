#ifndef stackg_h
#define stackg_h
   
#include <stdio.h>
#include <stdlib.h>
       
typedef int DataType;
         
typedef struct node_{
	DataType data;
	struct node_ *next;
 } Node;
		  
typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
 } List;
			  
void initList(List *);
void push(List *, DataType);
void pop(List *);
Node *getTop(List *);
int getLength(List *);
void dispList(List *);
			  
#endif
