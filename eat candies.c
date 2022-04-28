#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main(void)
{
    int t;
    scanf("%d",&t);
    int a,b,c;
    int i;
    int ans;
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            swap(&a,&b);
        }
        if(b>c)
        {
            swap(&b,&c);
        }
        if(c-b>=a)
        {
            ans=a+b;
        }
        else
        {
           ans=(b+c-a)/2+a;
        }
       printf("%d\n",ans) ;
}
return 0;
}
