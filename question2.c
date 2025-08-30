#include <stdio.h>

/*
*****               no of lines=no of rows
*****               no of stars in lines=no of colums
*****
*/
int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){     //outer loop->no of lines
        for(int j=1;j<=n;j++){ //inner loop->no of star in each line
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}