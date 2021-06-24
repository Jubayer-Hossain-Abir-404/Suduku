#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,y[9],z[9],row_sum,column_sum;
    int x[9][9]=
    {
        {1,2,3,4,5,6,7,8,9},
        {4,5,6,7,8,9,1,2,3},
        {7,8,9,1,2,3,4,5,6},
        {2,3,1,5,6,4,8,9,7},
        {5,6,4,8,9,7,2,3,1},
        {9,7,8,3,1,2,5,6,4},
        {3,1,2,6,4,5,9,7,8},
        {6,4,5,9,7,8,3,1,2},
        {8,9,7,2,3,1,6,4,5}
    };
    printf("A standard Sudoku:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d   ",x[i][j]);//for showing the input in the black box
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum1=sum1+x[i][j];//Taking the sum of first block
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=3; j<6; j++)
        {
            sum2=sum2+x[i][j];//second block sum
        }
    }
    for(i=0; i<3; i++)

    {
        for(j=6; j<9; j++)
        {
            sum3=sum3+x[i][j];//Third
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=0; j<3; j++)
        {
            sum4=sum4+x[i][j];//4th
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=3; j<6; j++)
        {
            sum5=sum5+x[i][j];
        }
    }
    for(i=3; i<6; i++)
    {
        for(j=6; j<9; j++)
        {
            sum6=sum6+x[i][j];
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=0; j<3; j++)
        {
            sum7=sum7+x[i][j];
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=3; j<6; j++)
        {
            sum8=sum8+x[i][j];
        }
    }
    for(i=6; i<9; i++)
    {
        for(j=6; j<9; j++)
        {
            sum9=sum9+x[i][j];
        }
    }
    for(i=0; i<9; i++)
    {
        row_sum=0;
        for(j=0; j<9; j++)
        {
            row_sum=row_sum+x[i][j];//Sum of every row individually
        }
        y[i]=row_sum;//every sum of every individual row is stored int y[i];
    }
    for(i=0; i<9; i++)
    {
        column_sum=0;
        for(j=0; j<9; j++)
        {
            column_sum=column_sum+x[j][i];//sum of every column individually
        }
        z[i]=column_sum;//every sum of every individual column is stored in z[i];
    }
    if(sum1==45&&sum2==45&&sum3==45&&sum4==45&&sum5==45&&sum6==45&&sum7==45&&sum8==45&&sum9==45&&y[0]==45&&y[1]==45&&y[2]==45&&y[3]==45&&y[4]==45&&y[5]==45&&y[6]==45&&y[7]==45&&y[8]==45&&z[0]==45&&z[1]==45&&z[2]==45&&z[3]==45&&z[4]==45&&z[5]==45&&z[6]==45&&z[7]==45&&z[8]==45)
    {
        printf("Finally Yes,it's a valid one");//After all of the condition above became true....
    }
    else
    {
        printf("No it's not");
    }
    return 0;
}


