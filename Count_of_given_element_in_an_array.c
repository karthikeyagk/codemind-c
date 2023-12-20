#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
   for(i=0;i<n;i++)
   {
       if(a[i]==x)
      {
        c++;
      }
    } 
    printf("%d",c);
}