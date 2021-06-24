#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,A,l,m,n;
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
                if(x[i][j]==x[i][k])
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
            if(i>=1&&i<=2&&j>=0&&j<=2)
            {
                for(m=0; m<i; m++)
                {
                    for(n=0; n<3; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=1&&i<=2&&j>=3&&j<=5)
            {
                for(m=0; m<i; m++)
                {
                    for(n=3; n<6; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            if(i>=1&&i<=2&&j>=6&&j<=8)
            {
                for(m=0; m<i; m++)
                {
                    for(n=6; n<9; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=4&&i<=5&&j>=0&&j<=2)
            {
                for(m=3; m<i; m++)
                {
                    for(n=0; n<3; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=4&&i<=5&&j>=3&&j<=5)
            {
                for(m=3; m<i; m++)
                {
                    for(n=3; n<6; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=4&&i<=5&&j>=6&&j<=8)
            {
                for(m=3; m<i; m++)
                {
                    for(n=6; n<9; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=7&&i<=8&&j>=0&&j<=2)
            {
                for(m=6; m<i; m++)
                {
                    for(n=0; n<3; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=7&&i<=8&&j>=3&&j<=5)
            {
                for(m=6; m<i; m++)
                {
                    for(n=3; n<6; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }
            else if(i>=7&&i<=8&&j>=6&&j<=8)
            {
                for(m=6; m<i; m++)
                {
                    for(n=6; n<9; n++)
                    {
                        if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
            }

        }
    }
    printf("A standard suduku:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }
    printf("Finally Yes, it's a valid one");
A:
    return 0;
}
