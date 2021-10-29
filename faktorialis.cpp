#include <iostream>

int faktorialis(int szam){
    int faktorialis = 1;
    if (szam < 0);
    else {
        for (int i = 1; i <= szam; ++i) {
            faktorialis = faktorialis * i;
        }
    }
    return faktorialis;
}

/*
 * int faktorialis(int szam) {
    int res = 1;
    for (int i = 2; i <= szam; i++) {
        res *= i;
    }

    return res;
}
 */
