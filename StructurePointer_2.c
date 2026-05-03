# include <stdio.h>
# pragma pack(1)

struct Demo {
    int i;       // 4
    int *ptr;    // 8        it shows 4
};               // 12       so ans will be 8

int main(){

    struct Demo dobj;
    int no = 21;

    dobj.i = 11;
    dobj.ptr = &no;

    printf("%d\n",dobj.i);         // 11
    printf("%d\n",*(dobj.ptr));    // 21

    return 0;
}

