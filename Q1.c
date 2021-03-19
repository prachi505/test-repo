#include <stdio.h>
int main() 
{
	int n,i,j;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elemts of array only 0 and 1\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	
	i=0;
	j=n-1;
	
	while(i<j)
	{
	    while(a[i]==0 && i<j)
	    {
	        i++;
	    }
	    
	    while(a[j]==1 && i<j)
	    {
	        j--;
	    }
	    
	    if(i<j)
	    {
	        a[i]=0;
	        a[j]=1;
	        i++;
	        j--;
	    }
	}
	
	
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}
