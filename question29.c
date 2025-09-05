#include <stdio.h>
/*
1
12*
123**
1234***
12345****
*/

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        for (int j = 1; j <=i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    return 0;
}