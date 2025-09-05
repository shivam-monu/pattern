#include <stdio.h>
/*
***** *****
****   ****
***     ***
**       **
*         *

*/

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 1; j <=nst; j++)
        {
            printf("*");
        }
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=nst; j++)
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        
        
        printf("\n");
        
    }
    
    return 0;
}