#include<stdio.h>
int x[(int)1e6+1]= {0};
int count(int d)
{
    int digit=0;
    while(d>0)
    {
        if(d%10==1)//尾數是1//
        {
            digit++;
        }
         d=d/10;//無論尾數是否是1，去掉最後一位//
    }
    return digit;
}
int main(void)
{
    int i;
    int t;
    scanf("%d",&t);
    for(i=1; i<=(int)1e6; i++)
    {
        x[i]=x[i-1]+count(i);//創一個陣列紀錄1的前綴和//
    }
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",x[b]-x[a-1]);//計算a~b//
    }
    return 0;
}
