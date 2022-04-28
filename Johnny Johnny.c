//找出解為j的組合數，設兩個變數index,sum 再用遞迴窮舉法//
#include<stdio.h>
int n,k;
int a[21];
int count(int index,int sum)//將所有可能情況加起來，若sum==k則結束，找到一個//
{
    if(sum==k) return 1;//找到一個答案//
    if(sum>k||index>=n) return 0;//答案已經大於求和或index已經到n//
    else return count(index+1,sum+a[index])+count(index+1,sum);//拿第index/不拿//
}
int main(void)
{
    scanf("%d%d",&n,&k);
    //n integer a1~an//
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",count(0,0));//index=0;sum=0;//
    return 0;

}
