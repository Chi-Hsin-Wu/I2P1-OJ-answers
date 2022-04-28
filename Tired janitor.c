
#include<stdio.h>
int val[1000001];
long long prefix[1000001];
int main(void)
{
    int n,q,i,j;
    int l,r;
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d(/`A`)/ ~I__I",&val[i]);
    }
    prefix[0]=val[0];
    for(i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+val[i];
    }
   for(i=0;i<q;i++)
   {
       scanf("%d%d",&l,&r);
       if(l==1)
       {
           printf("%lld\n",prefix[r-1]);
       }
       else if(l!=1)
       {
           printf("%lld\n",prefix[r-1]-prefix[l-2]);
       }
   }
   return 0;

}
