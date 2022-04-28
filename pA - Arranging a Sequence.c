#include<stdio.h>
#include<string.h>
//盢竒逼筁计㎝セ计だ秨//
int sequence[(int)2e5+1]={0};//皚0//
int arrange[(int)1e5+1]={0};
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&arrange[m-i]);
    }
    for(i=1;i<=m;i++)
    {
        if(sequence[arrange[i]]==0)
        {
             printf("%d\n",arrange[i]);//逼计//
             sequence[arrange[i]]=1;//筁砞1//
        }

    }
    for(i=1;i<=n;i++)//逞计//
    {
        if(sequence[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
