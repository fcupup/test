#include"math.h"
#include"stdio.h"
#include"stdlib.h"
	
    typedef struct
    {
    	int data[100];
    	int last;
	}Seqlist;
		int Insert_Seqlist(Seqlist*L,int i,int x)

	
		
		{int j;
		if(i<1||i>L->last+2)
		{
		printf("the location error\n");
		return(-1);}
		else
	
		for(j=L->last+1;j>=i-1;j--)
		{
			L->data[j+1]=L->data[j];
		}
		L->data[j=i-1]=x;
		L->last++;
		return (1);
		
	}
	Seqlist*init_Seqlist()
	{
		Seqlist* L;
		L=(Seqlist*)malloc(sizeof(Seqlist));
		L->last=-1;
		return L;
	}
	
	main()
{
	Seqlist* L;
	L=init_Seqlist();
	int p;
	for(p=0;p<98;p++)
	{
		L->data[p]=p*p;
		L->last++;
	}
	int m;
	printf("please enter the location:");
	scanf("%d",&m);
        int k;
		
		k=L->data[m];
		printf("the location is:%d\n",m);
		printf("the relative number is:%d",k);
		return (1);
		


}	
	
	
