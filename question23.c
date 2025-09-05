#include <stdio.h>
/*
    ABCDE
   ABCDE
  ABCDE
 ABCDE
 */

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int i, j;
    char ch;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for ( j = 1; j <=n; j++)
        {
            ch = 'A' + (j - 1);
            printf("%c", ch);
        }
        
        printf("\n");
    }

}