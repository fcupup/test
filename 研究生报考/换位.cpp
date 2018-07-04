#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"string.h"
main()
{
	char c[32];
	printf("please enter what you need:\n");
	gets(c);
	int k;
	int i,j;
	k=strlen(c);
	//printf("%d",k);
	char a[32];
	if(c[0]=='-')
	{
	 	
		for(i=1;i<=k-1;i++)
		a[i]=c[k-i];
		a[0]='-';
		for(i=0;i<=k-1;i++)
		printf("%c",a[i]);
	}
	
	if(c[0]!='-')
	for(i=0;i<=k-1;i++)
	printf("%c",c[k-1-i]);
	
	
			
		
	
	 
	
	
		
	
}
