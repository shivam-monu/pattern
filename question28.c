#include <stdio.h>
/*
   A 
  A B C
 A B C D E
A B C D E F G
*/

int main() {

 int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            char ch='A'+(j-1);

            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}