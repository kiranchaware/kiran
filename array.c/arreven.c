#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n=");
	scanf("%d",&n);
	int arr[n];
	int a=1;
	for(int i=0; i<n; i++)
	{
	       arr[i]=a;
	       a=a+2;
	}
	for(int i=0; i<n; i++)
	{
	      printf("%d\n",arr[i]);
	
	}
}
