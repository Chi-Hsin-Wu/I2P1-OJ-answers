//т跋丁ずΤ程タ计计//
#include<stdio.h>
int record[20001]={0};//魁タ计计秖//
int find_max(int a,int b,int n[]);
int factor(int x)//璸衡タ计计秖//
{
    int i;
    int count=0;
    for(i=1;i<=x;i++)
    {

        if(x%i==0)//i琌x计//
        {
            count++;
        }
    }
    return count;
}
int find_max(int a,int b,int n[])//  т琿皚ず程//
{
    int ans=0;
    int initial=0;//﹍ぶ0//
    int k;
    for(k=a;k<b+1;k++)//眖a~bт程//
    {
        if(n[k]>initial)
        {
            ans=k;//kΤ程そ计//
            initial=n[k];//穝initial,ゑ耕掸//
        }
    }
    return ans;
}
int main(void)
{
    int t;
    int i,j;
    int output;
    scanf("%d",&t);
    //ノrecord魁1~20000–计factor计秖//
    for(i=1;i<=20000;i++)
    {
        record[i]=factor(i);
    }
    for(j=0;j<t;j++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        output=find_max(l,r,record);
        printf("%d\n",output);
    }
    return 0;
}
