#include <stdio.h>
/*
1234567
123 123
12   12
1     1

*/

int main() {
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for (int i = 1; i <=2*n+1; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for (int i = 1; i <=n; i++)
    {
        int num=1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d",num);
            num++;
        }
        for (int k = 1; k <=nsp; k++)
        {
            printf(" ");
            num++;
        }
        for (int j = 1; j <=nst; j++)
        {
            printf("%d",j);
            num++;
        }
        nst--;
        nsp+=2;
        printf("\n");
        
        
    }
    
    

    return 0;
}