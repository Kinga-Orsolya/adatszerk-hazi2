#include <stdio.h>
#include "sumfunctions.h"
#include "minmaxfunctions.h"
#include "tombfunctions.h"

int main(){

    int sum = osszead(1, 2);
    printf("sum = %d\n", sum);

    int osszeg =legkisebb(4, 49);
    printf("osszeg = %d\n", osszeg);

    int osszeg2 = legnagyobb(6, 42);
    printf("osszeg2 = %d\n", osszeg2);

    int tomb[] ={4, 13, 19, 29, 0};
    int osszegA = muveletek(tomb, 5);
    printf("tomb elemeinek osszege = %d\n", osszegA);

    int multiplying = muveletek2(tomb, 5);
    printf("tomb elemeinek szorzata = %d\n", multiplying);

    return 0;
}
