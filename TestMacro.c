// Demonstration of preprocessor

/* 
    this is a multiline comment
*/


#include<stdio.h>

#define PI 3.14

int main(){

    // Area of circle

    float area = 0.0f;

    area = 10.5f * 10.5f * PI ; 

    printf("Area of circle is : %f\n",area);

    return 0;
}

// we can save all the below the files using this command => gcc -save-temps TestMacro.c -o Myexe
//      File                   ->        Meaning
// `File_Name.i`               ->    Preprocessed output
// `File_Name.s`               ->    Assembly code
// `File_Name.o`               ->    Object code
