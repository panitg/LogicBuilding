#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; //k = 0;

    for (i = 0; i < iRow; i++)
    {
        //iOdd = 1;
        for (j = 0; j < iCol; j++)
        if (j%2 ==0)
        {
            printf("*\t");
        }
        else{
            printf("#\t");
        }
        
    printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    printf("mention the row and column size\n");
    scanf("%d %d", &iNo1, &iNo2);

    Pattern(iNo1, iNo2);

    return 0;
}