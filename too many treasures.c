
#include<stdio.h>
long long prefix[1000001]={0};//define prefix sum//
int main(void)
{
    int n,q;
    scanf("%d%d",&n,&q);
    int value[1000001];
    int i;
    int l,r,m;
    for(i=1;i<=n;i++)//input treasure's value//
    {
        scanf("%d\n",&value[i]);

    }
    for(i=1;i<=n;i++)//將陣列中負數設為0(直接不取)//
    {
        if(value[i]<0)
        {
            value[i]=0;
        }
    }

    prefix[0]=value[0];
    for(i=1;i<=n;i++)//count prefix sum//
    {
        prefix[i]=prefix[i-1]+value[i];
    }


    for(i=0;i<q;i++)//input l,r,m//
    {
        scanf("%d%d%d",&l,&r,&m);
        printf("%lld\n",prefix[l+m-1]-prefix[l-1]);//計算l~m間的數字和//
    }

    return 0;
}
