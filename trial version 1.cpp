#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,c=0,d=0,e=0;
    int x[9][9];
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("Element[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("A standard Sudoku:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");

    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=3; j<6; j++)
        {
            for(k=3; k<6; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=6; j<9; j++)
        {
            for(k=6; k<9; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=3; j<6; j++)
        {
            for(k=3; k<6; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=6; j<9; j++)
        {
            for(k=6; k<9; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                if(x[i][j]!=x[i][k]&&j!=k)
                {
                    c++;
                }
            }
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=3; j<6; j++)
        {
            for(k=3; k<6; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=6; j<9; j++)
        {
            for(k=6; k<9; k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                }
            }
        }
    }
    printf("Block wise counted number:%d\n",c);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                if(x[i][j]!=x[i][k])
                {
                    c++;
                    d++;
                }
            }
        }
    }
    printf("Row wise counted number:%d\n",d);
    printf("C:%d\n",c);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                if(x[j][i]!=x[k][i])
                {

                    e++;
                    c++;
                }
            }
        }
    }
    printf("Column wise counted number:%d\n",e);
    printf("C:%d\n",c);
    if(c==1458)
    {
        printf("Finally Yes,it's a valid one");
    }
    else
    {
        printf("No it's not");
    }
    return 0;
}
