#include<stdio.h>
long long int damage[5001]={0};
long long int prefix[5001]={0};
int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
    double ans;
    int i,j;
    double initial=0;//初始值，用來比較//
    double average=0;//平均至少為0//
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&damage[i]);
    }
    //建prefix sum//
    for(i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+damage[i];
    }
    //取出平均，長度至少是k//
    for(i=0;i<=n-k;i++)
    {
        for(j=i+k;j<=n;j++)
        {
            double average=(prefix[j]-prefix[i]);
            average=average/(j-i);
            if(average>initial)
            {
                initial=average;//更新比較值//
                ans=average;//ans=本次平均//
            }
        }
    }
    printf("%.3lf\n",ans);
}
