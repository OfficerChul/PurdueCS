#include <stdio.h>

int main(){
    
    int Y[2] = {1, 1};
    
    int countY = 0;
    for (int i = 0; i < 4; i++) {
        if (Y[i] == 1 || Y[i] == 0) {
            countY++;
        }
    }
    
    printf("%d", countY);
}