//設兩個陣列a[]表西瓜順序 b[]表尋找順序 在設一個陣列appear[]紀錄是否出現//
#include<stdio.h>
int appear[(int)2e5+1]={0};//>1e5陣列盡量開全域//
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n+1];//watermelons//
    int b[n+1];//find sequence//
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);//scanf a1~an//
    }
     for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);//scanf b1~bn//
    }
    //在b內找a，用一個變數j紀錄下次從哪個西瓜開始找//
    int j=1;
    int count;
    for(i=1;i<=n;i++)
    {
        count=0;
        if(appear[b[i]]==0)//開始在b[i]搜尋，若數字尚未被搜尋到，進入迴圈//
        {
            for(j;j<=n;j++)//比對a[j] b[i]//
            {
                appear[a[j]]=1;//設為找過//
                count++;
                if(a[j]==b[i])
                {
                    j++;//j前進//
                    break;
                }
            }
        }
        printf("%d ",count);
    }
    printf("\n");
    return 0;
}
