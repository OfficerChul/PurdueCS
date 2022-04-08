#include "mycpp.h"
#include "myglobal.h"
#include "header.h"

int main()
{

    // Run readinput()
    if (readinput2() == -1)
    {
        exit(1);
    }
    // Run calcham2m(), write1Darray() and calcdiff.c
    calcdiff();
    write1Darray(calchamm2(), Z);

    return 0;
}