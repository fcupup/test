#include"math.h"
#include"stdio.h"
#include"stdlib.h"

typedef struct lnode
{
	int data;
	struct lnode* next;
	
}LNode,*Linklist;

Linklist Init_Linklist()
{
	Linklist H;
	H=(Linklist)malloc(sizeof(LNode));
	H->next=NULL;
	return H;
}

main()
{
	Linklist L;
	L=Init_Linklist();
	LNode* s;
	LNode* H;
	H=(LNode*)malloc(sizeof(LNode));
	H=L;
	LNode* p;
	int x;
	printf("enter the number:");
	scanf("%d",&x);
	s=(LNode*)malloc(sizeof(LNode));
	s->data=x;
 	L->next=s;
	L=s;
	p=H->next;
	
	printf("%d",H->next->data );
	
	
	
	
}
