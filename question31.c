#include <stdio.h>
/*
    1
   121
  12321
 1234321
123454321
*/

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=i-1;
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            char ch='A'+(j-1);
            printf("%c",ch);
        }
        for ( int j = 1; j <=i-1; j++)
        {
            char ch='@'+a;
            printf("%c",ch);
            a--;
        }
        printf("\n");
        
        
    }
    
    return 0;
}