# include <stdio.h>

int main(){

    char cArr[4] = {'a','b','c','d'};    // can be written without 4 coz its a member defined function
    int iArr[4] = {10,20,30,40};
    float fArr[4] = {10.0f,20.0f,30.0f,40.0f};
    double dArr[4] = {10.0,20.0,30.0,40.0};

    
    printf("Size of char array : %lu\n",sizeof(cArr));
    printf("Size of integer array : %lu\n",sizeof(iArr));
    printf("Size of float array : %lu\n",sizeof(fArr));
    printf("Size of double array : %lu\n",sizeof(dArr));

    return 0;
}


