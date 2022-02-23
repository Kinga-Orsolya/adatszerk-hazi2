//
// Created by user on 2/16/2022.
//

#include "tombfunctions.h"
int muveletek(int tomb[], int n){
    int osszegA = 0;
    int i;
    for (i = 0; i < n; i++) {
        osszegA += tomb[i];
    }
        return osszegA;

}
 int muveletek2(int tomb[], int n){
    int multiplying = 1;
    for (int i = 0; i < n; i++) {
        multiplying = multiplying * (tomb[i]);
    }
    return multiplying;

}

