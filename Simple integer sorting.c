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
    //use bubble sort�A�N�̤p���Ʀr��J//
    for(i=0;i<x-1;i++)//�@��x-1��//
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
    printf("%d\n",selection[x-1]);//�̤j���ƫ᭱+\n//
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
