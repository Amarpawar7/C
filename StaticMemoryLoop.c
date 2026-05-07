#include <stdio.h>

int main(){

    // Static memory allocation
    float Marks[5];           // 20 bytes

    printf("Enter your marks : \n");

    // Iteration

    int i = 0;
    //    1     2    3
    for(i = 0; i<5; i++)
    {
        scanf("%f",&Marks[i]);  // 4
    }

    printf("Entered marks are : \n");

    for(i = 0; i<5; i++)
    {
        printf("%f\n", Marks[i]);
    }

    
    
    return 0;
}
