#include <stdio.h>
#include <malloc.h>

typedef char dataType;
struct TreeNode {
	dataType data;
	TreeNode *left, *right;
};

void CreateTree(TreeNode *&t, dataType x){
	dataType d;
	scanf("%c",&d);
	if (d == x){
		t = NULL;
	}else{
		t= (TreeNode*)malloc(sizeof(TreeNode));
		t->data = d;
		CreateTree(t->left,x);
		CreateTree(t->right,x);
	}
}

void PrintTree(TreeNode *t){
	if (t) {
		printf("%c",t->data);
		PrintTree(t->left);
		PrintTree(t->right);
	}
}

int main(){
	TreeNode *t;
	printf(
			"请先按先序序列输入各节点的字符，某节点的左子树或右子树输入为空时输入一个字符#。\n");
	printf("如输入ABD#G###CE##F##\n");
	CreateTree(t,'#');
	PrintTree(t);
}


