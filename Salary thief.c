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
        int left=c[0]-'0';//left璶禟Ω计//
        for(i=1; i<=x; i++)
        {
            long long sublength=l-i;
            add=(sublength%mod)*((left-1)%mod);//糤﹃//
            l=(l+add)%mod;//盢//
            //璝c临⊿x玥膥尿糤//
            if(length<=x&&left>1)
            {
                //眔竚isubstring//
                strncpy(temp,&c[i],sublength);
                temp[sublength]='\0';
                // 钡 c  left-1 筂//
                for(j=0; j<left-1; j++)
                {
                    strcat(c,temp);
                    length=length+sublength;
                }
            }
            // 眔近璶禟Ω计//
            left=c[i]-'0';
        }
        // 璶み MOD 瞷璽计猵//
        if(l<0) l=l+mod;
        printf("%lld\n",l);
    }
    return 0;
}


