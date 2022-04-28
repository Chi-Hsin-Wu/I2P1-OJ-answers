#include<stdio.h>
int main(void)
{
    int x,y,sum,i;
    int arr[32];
    scanf("%x%x",&x,&y);//輸入兩個十六進位數//
    sum=x+y;//再將sum轉為二進位//
    i=0;
    while(sum)
    {
        arr[i]=sum%2;
        sum=sum/2;
        i++;
    }
    //反向印出arr//
    i=i-1;
    for(i;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
