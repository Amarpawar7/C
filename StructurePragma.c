# include <stdio.h>
# pragma pack(1)

struct Demo{
    int i;           // 4
    float f;         // 4
    char ch;         // 1       

};        // 9

int main(){

    struct Demo dobj;
    
    printf("%d\n",sizeof(dobj));   // 9


    return 0;
}