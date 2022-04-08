#include <stdio.h>
#include "header.h"

int checklowercase(char *input){
    int count = 0;
    
    // Put from 97 to 122 to the integer array
    int lowercaseArr[26];
    int firstLetter = 97;
    for(int i = 0; i < 26; i++){
        lowercaseArr[i] = firstLetter;
        firstLetter++;
    }
    
    // Compare input and ASCII code and return
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 26; j++){
            if (input[i] == lowercaseArr[j]){
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
