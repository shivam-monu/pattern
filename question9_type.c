#include <stdio.h>
/*
1
1
13
13
135
*/

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        
        for ( int j = 1; j <=i; j=j+2)
        {
            printf("%d ",j);
        
        }
        printf("\n");
        
    }
    
    return 0;
}