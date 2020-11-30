#include <sy2_h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	SQ *sq = (SQ *)malloc(sizeof(SQ));
	initsy2(sq);
	creatsy2(sq);
	printf("原始数据为：\n");
	printsy2(*sq);
	printf("冒泡排序后：\n");
	bubblesy2(*sq);
	printf("插入排序后：\n");
	insertsy2(*sq);
	printf("选择排序后:\n");
	selectsy2(*sq);
	printf("d快速排序后:\n");
	Quicksy2(*sq);
	printf("原始数据为:\n");
	printsy2(*sq);

	return 0;
}


