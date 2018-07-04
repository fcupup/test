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

Linklist Creat_Linklist()
{
	Linklist L=Init_Linklist();
	LNode* r;
	LNode* s;
	int x;
	scanf("%d",&x);
	while(x!=0)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		if(L->next==NULL)
		L->next=s;
		else if(L->next!=NULL)
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	if(r->next!=NULL)
	r->next=NULL;
	return L;
}

main()
{
	Linklist L;
	LNode* p;
	p=(LNode*)malloc(sizeof(LNode));
	printf("please enter some numbers:");
	L=Creat_Linklist();
	p=L;
	while(p->next!=NULL)
	{
		printf("%d\n",p->next->data);
		p=p->next;
	}
	
	
}
