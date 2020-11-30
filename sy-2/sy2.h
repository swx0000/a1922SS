#ifndef sy2_h
#define sy2_h
#include <stdio.h>
#define MAX 50

typedef int TypeData;

typedef struct sq_{
	TypeData data_[MAX];
	int size;
} SQ;

void printsy2(SQ);
void initsy2(SQ *);
void creatsy2(SQ *);
void bubblesy2(SQ);
void insertsy2(SQ);
void selectsy2(SQ);
void Partition(SQ *,int,int);
void Qsy2(SQ *,int,int);
void Quicksy2(SQ);

#endif
