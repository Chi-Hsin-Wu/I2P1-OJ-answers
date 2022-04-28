#include<stdio.h>
int cards[5][5]={0};
int number[25]={0};//input//
int check[5][5]={0};//判斷是否可以bingo//
int n;
//寫一個遞回函式判斷bingo//
void valid(int x);
int bingo(int get,int row,int column,int testcase)
{
    //bingo方式有橫 直 右斜 左斜//
    int i;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    for(i=0;i<5;i++)
    {
        sum1=sum1+check[row][i];//橫//
        if(sum1==5)
        {
            printf("Case #%d: %d\n",testcase+1,get+1);
            return 1;
        }
    }
    for(i=0;i<5;i++)//直//
    {
        sum2=sum2+check[i][column];
        if(sum2==5)
        {
            printf("Case #%d: %d\n",testcase+1,get+1);
            return 1;
        }
    }
    for(i=0;i<5;i++)//右斜//
    {
        sum3=sum3+check[i][i];
        if(sum3==5)
        {
            printf("Case #%d: %d\n",testcase+1,get+1);
            return 1;
        }
    }
    for(i=0;i<5;i++)//左斜//
    {
        sum4=sum4+check[4-i][i];
        if(sum4==5)
        {
            printf("Case #%d: %d\n",testcase+1,get+1);
            return 1;
        }
    }
    if(get==n-1)
    {
        printf("Case #%d: Not yet \\(^o^)/\n",testcase+1);
        return 1;
    }

    return 0;
}
void valid(int x)
{
    int i,j,k;
    for(i=0;i<n;i++)//輸入的數字//
    {
        for(j=0;j<5;j++)//row//
        {
            for(k=0;k<5;k++)//column//
            {
                if(number[i]==cards[j][k])
                {
                    check[j][k]=1;
                    if(bingo(i,j,k,x)!=0) return;
                }
            }
        }
    }

}
int main(void)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&cards[i][j]);//輸入卡片內容//
        }
    }
    int t;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&number[i]);//輸入bingo順序//
        }
        valid(j);
        //結束一輪，清空check//
        int a,b;
        for(a=0;a<5;a++)
        {
            for(b=0;b<5;b++)
            {
                check[a][b]=0;
            }
        }

    }
    return 0;
}
