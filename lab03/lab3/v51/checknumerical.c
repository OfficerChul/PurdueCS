#include <stdio.h>
#include "header.h"

int checknumerical(char *input){
    int count = 0;
    
    // Put from 48 to 57 to the integer array
    int numericalArr[26];
    int firstNum = 48;
    for(int i = 0; i < 10; i++){
        numericalArr[i] = firstNum;
        firstNum++;
    }
    
    // Compare input and ASCII code and return
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 10; j++){
            if (input[i] == numericalArr[j]){
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