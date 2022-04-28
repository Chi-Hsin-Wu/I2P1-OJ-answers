#include<stdio.h>
#include<string.h>
//將已經排過的數列和原本的數列分開印//
int sequence[(int)2e5+1]={0};//陣列初值為0//
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
             printf("%d\n",arrange[i]);//先印出排好的數列//
             sequence[arrange[i]]=1;//印過的設為1//
        }

    }
    for(i=1;i<=n;i++)//印剩下的數//
    {
        if(sequence[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
