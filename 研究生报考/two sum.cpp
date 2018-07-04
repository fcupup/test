#include"stdio.h"
#include"stdlib.h"
#include"math.h"
main()
{
	int a[4];
	a[0]=1;
	a[1]=3;
	a[2]=5;
	a[3]=7;
	int x;
	int p=0;
	printf("enter one number:");
	scanf("%d",&x);
	int i,j;
	for(i=0;i<=2;i++)
	for(j=i+1;j<=3;j++)
	{
		if(a[i]+a[j]==x)
	{
			printf("the location is:[%d %d]",i+1,j+1);
		p=1;}
		
		
	}
	if(p==0)
	printf("there is none answer!");
 } 
