#include <stdio.h>
/*
A B C D E F G H I J K 
A B C D E   F G H I J
A B C D       F G H I 
A B C           F G H
A B               F G 
A                   F

*/

int main()
{
    int n;
    printf("enter the row:");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n+1; i++)
    {
        char ch = 'A' + (i - 1);
        printf("%c ", ch);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            char ch = 'A' + (j - 1);
            printf("%c ", ch);
        }
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int j =1; j <=nsp; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= nst; j++)
        {
            char ch = 'F' + (j - 1);
            printf("%c ",ch);
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}