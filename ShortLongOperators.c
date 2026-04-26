// const is a qualifies

# include <stdio.h>

int main(){

    int i = 11;
    short int j = 11;
    long int k = 11;

    printf("Size of int : %lu\n",sizeof(i));        // 4
    printf("Size of short int : %lu\n",sizeof(j));  // 2
    printf("Size of long int : %lu\n",sizeof(k));   // should be 8 ,but it shows 4 due to system


    return 0;
}

