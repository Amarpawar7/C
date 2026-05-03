# include <stdio.h>
# pragma pack(1)                    // this will avoid padding

struct Demo{
    int i;           // 4
    float f;         // 4
    char ch;         // 1       it will generate padding but pragma pack will avoid it
};                   // 9                  
// memory is not allocated to this structure yet

int main(){

    struct Demo dobj;          // memory gets allocated to struct Demo
    
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 10.0f ;

    printf("%d\n", dobj.i);            // 11
    printf("%c\n", dobj.ch);           // A
    printf("%f\n", dobj.f);            // 10.000000    floats access digits up to 6 decimal places



    return 0;
}


