# include <stdio.h>
# pragma pack(1)                    //Avoids padding

struct Demo{
    int i;           // 4
    float f;         // 4
    char ch;         // 1       Generates padding
};                   // 9

int main(){

    struct Demo dobj;
    struct Demo *ptr = NULL ; 

    ptr = &dobj;

    ptr->i = 11;
    ptr->f = 10.0f;
    ptr->ch = 'A';

    printf("%d\n",ptr->i);        // 11
    printf("%c\n",ptr->ch);       // A
    printf("%f\n",ptr->f);        // 10.000000


    return 0;
}


