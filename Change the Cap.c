#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n<4)
    {
        printf("%d",n);//n=0~3�h�����L�Xn//
    }
    else{
        int k;
        n=n-4;//n�^��0//
        k=n%3;
        n=n/3;
        printf("%d\n",3+2*n+k);//�ĥ|�~�ᬰ�R�G�e�@//
        return 0;
}
}
