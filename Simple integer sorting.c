#include<stdio.h>
void sorting(int x)
{
    int selection[10004]={0};
    int i,j;
    int temp;
    for(i=0;i<x;i++)
    {
        scanf("%d",&selection[i]);
    }
    //use bubble sort，將最小的數字放入//
    for(i=0;i<x-1;i++)//共做x-1次//
    {
        for(j=0;j<x-1;j++)
        {
            if(selection[j]>=selection[j+1])
            {
                //swap selection[j],selection[j+1]//
                temp=selection[j];
                selection[j]=selection[j+1];
                selection[j+1]=temp;
            }
        }
    }


    for(i=0;i<x-1;i++)
    {
        printf("%d ",selection[i]);
    }
    printf("%d\n",selection[x-1]);//最大的數後面+\n//
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        sorting(n);
    }
    return 0;
}
