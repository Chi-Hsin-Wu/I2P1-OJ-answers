#include<stdio.h>
long long int damage[5001]={0};
long long int prefix[5001]={0};
int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
    double ans;
    int i,j;
    double initial=0;//��l�ȡA�ΨӤ��//
    double average=0;//�����ܤ֬�0//
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&damage[i]);
    }
    //��prefix sum//
    for(i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+damage[i];
    }
    //���X�����A���צܤ֬Ok//
    for(i=0;i<=n-k;i++)
    {
        for(j=i+k;j<=n;j++)
        {
            double average=(prefix[j]-prefix[i]);
            average=average/(j-i);
            if(average>initial)
            {
                initial=average;//��s�����//
                ans=average;//ans=��������//
            }
        }
    }
    printf("%.3lf\n",ans);
}
