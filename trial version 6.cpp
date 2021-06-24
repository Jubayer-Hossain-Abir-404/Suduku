#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,c=0,d=0,e=0,A,B,C,D,E,F,G,H,I,J,l,m,n;
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
                for(m=0;m<3;m++)
                {
                    for(n=0;n<3;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto B;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                B:
                for(m=0;m<3;m++)
                {
                    for(n=3;n<6;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto C;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                C:
                for(m=0;m<3;m++)
                {
                    for(n=6;n<9;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto D;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                D:
                for(m=3;m<6;m++)
                {
                    for(n=0;n<3;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto E;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                E:
                for(m=3;m<6;m++)
                {
                    for(n=3;n<6;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto F;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                F:
                for(m=3;m<6;m++)
                {
                    for(n=6;n<9;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto G;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                G:
                for(m=6;m<9;m++)
                {
                    for(n=0;n<3;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto H;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                H:
                for(m=6;m<9;m++)
                {
                    for(n=3;n<6;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto I;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                I:
                for(m=6;m<9;m++)
                {
                    for(n=6;n<9;n++)
                    {
                        if(i==m&&j==n)
                        {
                            goto J;
                        }
                        else if(x[i][j]==x[m][n])
                        {
                            printf("The given input is not valid block wise and that's why your suduku will not perform further");
                            goto A;
                        }
                    }
                }
                J:
                    continue;


        }

    }
    printf("Finally,it's a valid one");
    A:
    return 0;
}



