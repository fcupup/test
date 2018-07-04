#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"math.h"
main()
{
	char a[100];
	gets(a);
	int p;
	int k=0;
	int i;
	p=strlen(a);
	//printf("%d",p);
	for(i=0;i<=p/2;i++)
	{
		if(a[i]!=a[p-1-i])
		k=1;
	}
	if(k==0)
	printf("it's a huiwenshu") ;
	else if(k!=0)
	printf("it's not a huiwenshu");
}
