#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	   int a;
	   printf("Enter the value of a = ");
	       scanf("%d",&a);
	       arr[i]=a;
	}
	for(int i=0; i<n; i++)
	{
	      printf("%d\n",arr[i]);
	
	}
}
