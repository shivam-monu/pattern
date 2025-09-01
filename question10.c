#include <stdio.h>
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
 */
int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <=n; j++)
        {
            
            printf("%d ",a);
            a++;
            
        }
        printf("\n");
        
        
    }
    

    return 0;
}