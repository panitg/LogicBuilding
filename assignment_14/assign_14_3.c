#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; //k = 0;
    int ival = 0;

    for (i = 1; i <= iRow; i++)
    {
        ival = iRow;
        for (j = 1; j <= iCol; j++)

        {

            printf("%d", ival);
            ival--;
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