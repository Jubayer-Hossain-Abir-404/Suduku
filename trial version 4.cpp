#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,c=0,d=0,e=0,A,l;
    int x[9][9];
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            printf("Element[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
            if(x[i][j]==0||x[i][j]>9||x[i][j]<0)
            {
                printf("The given input is not valid and that's why your suduku will not perform further");
                goto A;
            }
            for(k=0; k<j; k++)
            {
                if(x[i][k]==x[i][j])
                {
                    printf("The given input is not valid row wise and that's why your suduku will not perform further");
                    goto A;
                }
            }
                for(l=0; l<i; l++)
                {
                    if(x[i][j]==x[l][j])
                    {
                        printf("The given input is not valid column wise and that's why your suduku will not perform further");
                        goto A;
                    }
                }
            if(((i>0&&i<=2)&&(j>=0&&j<=2))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>0&&i<=2)&&(j>=0&&j<=2))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if((i>0&&i<=2&&(j>=3&&j<=5))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>0&&i<=2)&&(j>=3&&j<=5))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>0&&i<=2)&&(j>=6&&j<=8))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>0&&i<=2)&&(j>=6&&j<=8))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=0&&j<=2))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=0&&j<=2))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=3&&j<=5))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=3&&j<=5))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=6&&j<=8))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>3&&i<=5)&&(j>=6&&j<=8))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=0&&j<=2))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=0&&j<=2))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=3&&j<=5))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=3&&j<=5))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=6&&j<=8))&&((i+j)%2==0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
            if(((i>6&&i<=8)&&(j>=6&&j<=8))&&((i+j)%2!=0)&&(x[i][j]==x[i-1][j-1]||x[i][j]==x[i-1][j+1]))
            {
                printf("The given input is not valid block wise and that's why your suduku will not perform further");
                goto A;
            }
        }
    }
    printf("Finally,it's a valid one");
    A:
    return 0;
}

