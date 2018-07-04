#include"math.h"
#include"stdio.h"
#include"stdlib.h"

main()
{
	int a[10]={1,-1,2,5,3,-6,9,8,-4,-7};
	int i,j,k;
	for(i=0;i<8;i++)
	for(j=i+1;j<9;j++)
	for(k=j+1;k<10;k++)
	{
		if(a[i]+a[k]+a[j]==0)
		printf("[%d %d %d]\n",a[i],a[j],a[k]);
	}
}
