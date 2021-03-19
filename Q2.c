#include<stdio.h>
void main()
{
	int i,n,temp;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
    {
	  scanf("%d",&a[i]);
    }
    int k=0,j;
    for(i=0;i<n;i=i+2)
    {
    	k=k+1;
    	for(j=i;j>=k;j--)
    	{
    		temp=a[j];
    		a[j]=a[j-1];
    		a[j-1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
      printf("%d\n",a[i]);
    }
    printf("editing the file again");

}

