#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int mod=1000000007;
char c[10000001];
int main(void)
{
    char temp[10000001];
    long long int l;
    long long int length;
    long long int add;
    long long int x;
    int t;
    int i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&x);
        scanf("%s",c);
        l=strlen(c);//string length//
        length=l;
        int left=c[0]-'0';//left���n�K�W������//
        for(i=1; i<=x; i++)
        {
            long long sublength=l-i;
            add=(sublength%mod)*((left-1)%mod);//�W�[���r���//
            l=(l+add)%mod;//�N���ץ[�W//
            //�Yc�������٨S��x�h�~��W�[//
            if(length<=x&&left>1)
            {
                //���o��mi�᪺substring//
                strncpy(temp,&c[i],sublength);
                temp[sublength]='\0';
                // ���b c �᭱ left-1 �M//
                for(j=0; j<left-1; j++)
                {
                    strcat(c,temp);
                    length=length+sublength;
                }
            }
            // ���o�U�@���n�K�W������//
            left=c[i]-'0';
        }
        // �n�p�� MOD ��X�{�t�ƪ����p//
        if(l<0) l=l+mod;
        printf("%lld\n",l);
    }
    return 0;
}


