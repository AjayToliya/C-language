#include <stdio.h>
int main() {
    
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            if((j == 1 || j == 5) && i < 5 || (i == 5 && j >= 2 && j <= 4)) { 
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}