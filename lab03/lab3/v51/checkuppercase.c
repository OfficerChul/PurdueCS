#include <stdio.h>
#include "header.h"

int checkuppercase(char *input){
    int count = 0;
    
    // Put from 65 to 90 to the integer array
    int uppercaseArr[26];
    int firstLetter = 65;
    for(int i = 0; i < 26; i++){
        uppercaseArr[i] = firstLetter;
        firstLetter++;
    }
    
    // Compare input and ASCII code and return
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 26; j++){
            if (input[i] == uppercaseArr[j]){
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
