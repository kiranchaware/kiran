#include <stdio.h>
int main()
{
     int n;
     printf("enter the vhalu of n=");
     scanf("%d",&n);
     int arr[n];
     int num;
     scanf("%d",&num);
     
     for(int i=0;i<n;i++)
     {
        int a;
        printf("enter the vhalu of a=");
        scanf("%d",&a);
        arr[i]=a;
      }
      int c=0;
      for(int j=0;j<n;j++)
      {
        if(arr[j]==num)
        {
           c++;
           }
         }
         if(c>0)
         {
          printf("it is exist\n");
          }
          else
          {
          printf("it is not exist\n");
          }
          return 0;
}
