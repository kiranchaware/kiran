#include <stdio.h>
/*
int main()
{
      int n;
      printf("enter the vhalu of n=");
      scanf("%d",&n);
      int arr[n];
      int p=0;
      for(int i=0;i<n;i++)
      {   
       scanf("%d",&arr[i]);
       }
        for(int i=0;i<n;i++)
        {
         int c=0;
         for(int j=1;j<=arr[i];j++)
           {
              if(arr[i]%j==0)
              {
                c++;
                }
             }
             if(c==2)
             {
                printf("%d it is prime no\n",arr[i]);
                }
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
     int arr[n],p=0;
     for(int i=2;i<=n;i++)
     {
        int c=0;
       for(int j=1;j<=i;j++)
       {
         if(i%j==0)
          { 
            c++;
          }
        }
         if(c==2)
         {
             arr[p]=i;
             p++;
             }
           }
           for(int j=0;j<p;j++)
           {
            printf("%d ",arr[j]);
           }
           return 0;
} 
             
            
          
            
     


          
