#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int count=0;
    for (int i=1;i<=y;i++)
    {   count+=1;
        if (count==x)
        {
            printf("%d\n",i);
            count=0;
        }
        else {
            printf("%d ",i);
        }
    }    
}
