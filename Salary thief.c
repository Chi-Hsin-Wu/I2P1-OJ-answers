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
        int left=c[0]-'0';//left為要貼上的次數//
        for(i=1; i<=x; i++)
        {
            long long sublength=l-i;
            add=(sublength%mod)*((left-1)%mod);//增加的字串長//
            l=(l+add)%mod;//將長度加上//
            //若c的長度還沒到x則繼續增加//
            if(length<=x&&left>1)
            {
                //取得位置i後的substring//
                strncpy(temp,&c[i],sublength);
                temp[sublength]='\0';
                // 接在 c 後面 left-1 遍//
                for(j=0; j<left-1; j++)
                {
                    strcat(c,temp);
                    length=length+sublength;
                }
            }
            // 取得下一輪要貼上的次數//
            left=c[i]-'0';
        }
        // 要小心 MOD 後出現負數的狀況//
        if(l<0) l=l+mod;
        printf("%lld\n",l);
    }
    return 0;
}


