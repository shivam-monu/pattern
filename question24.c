#include <stdio.h>
/*
   A
  AB
 ABC
ABCD
*/
int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int i, j;

    for (i = 1; i <= n; i++) {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
            for ( j = 1; j <=i; j++)
            {
            char ch = 'A' + (j - 1);
            printf("%c", ch);
        }
            
        
        printf("\n");
    }

}