#include <stdio.h>
int main() 
{
	int n,i,j,temp;
	j=-1;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elemts of array \n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			j++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
	printf("editing ques1 file");
}
	
	
