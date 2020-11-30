#include "sy2.h"
#include <stdio.h>

void initsy2(SQ *sq){
	sq->size = 0;

	return;
}
void printsy2(SQ sq){
	for(int i = 0;i<sq.size;i++){
		printf("%d\t",sq.data[i]);
	}

	printf("\n");
	return;
}

void creatsy2(SQ *sq){
	printf("please input the size:");
	scanf("%d",&sq->size);

	if(sq->size>MAX){
		return;
	}
	for(int i = 0;i<sq->size;i++){
		scanf("%d",&sq->data[i]);
	}

	return;
}

void bubblesy2(SQ sq){
	int i,j,t;
	for(i = 0;i<sq.size;i++){
		for(j = 0;j<(sq.size)-1;j++){
			if(sq.data[j]>sq.data[j+1]){
				t = sq.data[j];
				sq.data[j] = sq.data[j+1];
				sq.data[j+1] = t;
			}
		}
	}
	
	printsy2(sq);
	
	return;
}

void insertsy2(SQ sq){
	int i,j,temp;
	for(i = 1;i<sq.size;i++){
		temp = sq.size[i];
		j=i-1;
		while(j>=0 && sq.data[j]>temp){
			sq.data[j+1] = sq.data[j];
			j--;
		}
		sq.data[j+1] = temp;
	}

	printsy2(sq);

	return;
}

void selectsy2(SQ sq){
	inti,j,k,m;
	for(i = 0;i<(sq.size)-1;i++){
		m = sq.size[i];
		k = i;
		for(j = i+1;j<sq.size;j++){
			if(sq.data[j]<m){
				m = sq.data[j];
				k = j;
			}
		}
		sq.data[k] = sq.data[j];
		sq.data[i] = m;
	}

	printsy2(sq);

	return;
}

int Partition(SQ *sq,int low, int high){
	int x = sq->data[low];
	while(low<high){
		while(low<high && sq->data[high]>=x){
		high--;
	}

		if(low<high){
			sq->data[low] = sq->data[high];
			low++;
		}
		while(low<high && sq->data[low]<x){
			low--;
		}
		if(low<high){
			sq->data[high] = sq->data[low];
			high--;
		}
	}

	sq->data[low] = x;

	return low;
}

void Qsy2(SQ *sq,int low,int high){
	if(low<high){
		int mid = partition(sq,low,high);
		Qsy2(sq,low,mid-1);
		Qsy2(sq,mid+1,high);
	}
}

void Quicksy2(SQ sq){
	Qsy2(&sq,0,sq,size-1);

	printsy2(sq);

	return;
}

