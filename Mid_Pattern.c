#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int n,mid,i,j,k,mid1;
	scanf("%s",a);
	
	n=strlen(a);
	mid=n/2;
	mid1=mid;
	
	for(i=0;i<n;i++)
	{
		mid=mid1;		
		for(k=i+1;k<n;k++)
		{
			printf("\t");
		}
		
		for(j=0;j<=i;j++)
		{
		printf("%c\t",a[mid]);
		mid++;
		
		if(mid==n)
		{
			mid=0;
		}
		
		}							
		printf("\n");
	}	
}
	
