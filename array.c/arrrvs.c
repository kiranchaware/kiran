#include <stdio.h>
int main()
{
        int n;
        printf("enter the number of n=");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
          int a;
          scanf("%d",&a);
          arr[i]=a;
          }
          for(int i=n-1;i>=0;i--)
          {
            printf("%d",arr[i]);
            }
            return 0;
}
            
            
 
           
          
           
           
           
          
          
