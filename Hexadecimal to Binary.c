#include<stdio.h>
int main(void)
{
    int x,y,sum,i;
    int arr[32];
    scanf("%x%x",&x,&y);//��J��ӤQ���i���//
    sum=x+y;//�A�Nsum�ର�G�i��//
    i=0;
    while(sum)
    {
        arr[i]=sum%2;
        sum=sum/2;
        i++;
    }
    //�ϦV�L�Xarr//
    i=i-1;
    for(i;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
