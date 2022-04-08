#include <stdio.h>
#include "header.h"

int checkspecialc(char *input){
    int count = 0;
    
    // Put from 35 to 38 to the integer array
    int specialcArr[26];
    int firstChar = 35;
    for(int i = 0; i < 4; i++){
        specialcArr[i] = firstChar;
        firstChar++;
    }
    
    // Compare input and ASCII code and return
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            if (input[i] == specialcArr[j]){
                count++;
            }
        }
    }
    
    // Return 0 if `count` is more than 0.
    if(count > 0){
        return 0;
    } else {
        return -1;
    }
}