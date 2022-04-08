#include <stdio.h>
#include "header.h"

int main()
{

    char candidatepw[12];
    char c;
    int count = 0;

    printf("Please input\n");

    // Get char character by character
    while ((c = getchar()) != 10)
    {
        candidatepw[count] = c;
        count++;
    }
    if(count < 6 || count > 11) {
        printf("Length of the password should be between 6 to 12.\n");
        return -1;
    }
    
    //Run the function
    if (checklowercase(candidatepw) == 0){
        printf("Lowercase checking successed\n");
    } else {
        printf("Lowercase checking failed\n");
    }
    if (checkuppercase(candidatepw) == 0){
        printf("Uppercase checking successed\n");
    } else {
        printf("Uppercase checking failed\n");
    }
    if (checknumerical(candidatepw) == 0){
        printf("Numerical checking successed\n");
    } else {
        printf("Numerical checking failed\n");
    }
    if (checkspecialc(candidatepw) == 0){
        printf("Specialc checking successed\n");
    } else {
        printf("Specialc checking failed\n");
    }
    
    //Everything works successfully
    printf("Checking finished.\n");

    return 0;
}
