#include <stdio.h>
/*
int main()
{
        int p=0;
        int arr[7]={5,9,2,1,9,8,3};
        int n=7;
        int aux[7];
        for(int i=n-1;i>=0;i=i-2)
        {
           aux[p]=arr[i];
           p++;
         }
         for(int j=0;j<p;j++)
         {
           printf("%d\n",aux[j]);
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
    for(int i=0;i<n;i++)
    {
      int a;
      printf("enter the vhalu of a=");
      scanf("%d",&a);
      arr[i]=a;
    }
      int aak[n];
     for(int j=n-1;j>0;j=j-2)
     {
        aak[p]=arr[j];
        p++;
     }
     for(int j=0;j<p;j++)
     {
         printf("%d ",aak[j]);
      }
       return 0;
}     
        
      
    
           
            
