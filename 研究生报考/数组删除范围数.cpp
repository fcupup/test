#include"math.h"
#include"stdio.h"
#include"stdlib.h"

main()
{
	int x,y;
	int m;
	int  a[100]; 
	printf("please enter some numers:end with'*'");
	for(m=0;m<101;m++)
	{
		scanf("%d",&a[m]);
		if(a[m]==0)
		break;
		
	}
	printf("%d\n",m);
	printf("please two limit number:");
	scanf("%d %d",&x,&y);
	int i,j,n;
	i=0;
	n=m;
	while(i<n)
	{
		if(a[i]>=x&&a[i]<=y)
		{
			for(j=i;j<n-1;j++)
			a[j]=a[j+1];
			n--;
			
		}
		else i++;
	}	
	
	
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
