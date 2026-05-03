# include <stdio.h>
# pragma pack(1)

struct Demo {
    int i;       // 4
    int *ptr;    // 8        it shows 4
};               // 12       so ans will be 8

int main(){

    struct Demo dobj;

    printf("Size of object is : %lu\n",sizeof(dobj));   // either 8 OR 16 it varies due to difference in OS's memory allocation

    return 0;
}
