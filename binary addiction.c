#include<stdio.h>
void binary(unsigned int x)
{
    if(x)
    {
        binary(x/2);
        printf("%u",x%2);
    }
}
int main(void)
{
    unsigned int n;
    scanf("%u",&n);
    int temp=n;
    binary(n+1);
    //�ݭ쥻���Ƴ̫ᦳ�X�ӳs��1�A�N��i�X��//
    int carry[1022];
    int i=0;
    while(temp>0)
    {
        carry[i]=temp%2;//�˱ԩ�Jcarry[i]//
        temp=temp/2;
        i++;
    }
    int j;
    int count=0;
    for(j=0;j<i;j++)
    {
        if(carry[j]==1)
        {
            count++;
        }
        else
        {
            break;//���Xcount;
        }
    }
    printf(" %d\n",count);
    return 0;
}
