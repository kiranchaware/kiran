#include <stdio.h>
/*
int main() 
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    int arr[n], p = 0;
    
    for (int i = 1; i <= n; i++)
    {
        int f = 1; 
        for (int j = 1; j <= i; j++)
      {
            f *= j;
       }
        arr[p] = f; 
        p++; 
    }

    for (int i = 0; i < p; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
 }
*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the vhalu of n=");
	scanf("%d",&n);
	int arr[n];
	int p=0,f=1;
	for(int i=1;i<=n;i++)
	{
	   f=f*i;
	   arr[p]=f;
	   p++;
	   }
	   for(int j=0;j<p;j++)
	   {
	     printf("%d ",arr[j]);
	    }
	    return 0;
}



     
