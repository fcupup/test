#include"stdio.h"
#include"math.h"
#include"stdlib.h"

void translate(int t[10],int k)
{
	int d[20];
	int j,i=0;
	int m=1;
	while(m<=k)
	
	{
		 while(t[m]!=1&&t[m]!=0)
		 {
		 	d[i]=t[m]%2;
		 	t[m]=t[m]/2;
		 	i++;
		 	
		 	
		 } 
		 d[i]=t[m];
		 for(j=i;j>=0;j--)
		  {
		  	printf("%d",d[j]);
		   } 
		   printf("\n");
		   i=0;
		   m++;
	}		
}

int main()
{
	int k,j=1;
	int t[10];
	printf("please enter the amount:");
	scanf("%d",&k);
	printf("please enter the numbers:\n");
	while(j<=k)
	{
		scanf("%d",&t[j]);
		j++;
		
		
		
	}
	


	

    translate(t,k);


	
}
