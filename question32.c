#include <stdio.h>
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

int main() {
    int n;
    printf("enter the row :");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int middle_line=(n/2)+1;
    for (int i = 1; i <=n; i++)
    {
        for (int j =1; j <=nsp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=nst; j++)
        {
            printf("*");
        }
        if (i<middle_line)
        {
            nsp--;
            nst+=2;
            
        }
        else{
            nsp++;
            nst-=2;
        }
        
        printf("\n");
        
        
        
    }
    
    return 0;
}