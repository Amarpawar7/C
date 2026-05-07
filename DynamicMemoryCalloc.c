#include <stdio.h>
#include <stdlib.h>     // for malloc,calloc,realloc,free

int main(){

    int Size = 0 ;
    float *Marks = NULL ; 
    int i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    // Dynamic memory allocation
    Marks = (float*)calloc(Size , sizeof(float));                 // memory allocation for float array

    printf("Enter your marks : \n");


    // Iteration
    //    1     2    3
    for(i = 0; i<Size; i++)
    {
        scanf("%f",&Marks[i]);
    }

    printf("Entered marks are : \n");

    for(i = 0; i<Size; i++)
    {
        printf("%f\n", Marks[i]);
    }

    free(Marks);              // deallocating memory
    
    return 0;
}
