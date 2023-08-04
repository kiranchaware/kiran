#include <stdio.h>
int main()
{
    int n;
    printf("enter the vhalu of n=");
    scanf("%d",&n);
    int arr[10];
    int k=0;
     
      for(int i=1;i<=10;i++)
     {
          int p=i*n;
          arr[k]=p;
          k++;
     }
      for(int j=0;j<k;j++)
      {
           printf("%d ",arr[j]);
       }
       return 0;
}
     
      

    
