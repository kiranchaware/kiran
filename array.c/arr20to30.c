#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the vhalu of a b");
    scanf("%d%d",&a,&b);
    int n=b-a+1;
    int arr[n],i=0;
    
     for(;a<=b;a++)
     {
       arr[i]=a;
       i++;
     }
      for(int j=0;j<n;j++)
      {
        printf("%d ",arr[j]);
       }
       return 0;
}
