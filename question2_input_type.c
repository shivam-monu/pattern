#include <stdio.h>

int main(){
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int m;
    printf("enter the column:");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}