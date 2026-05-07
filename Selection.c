# include <stdio.h>

int main(){

    int no ;
    printf("Enter first number : \n");
    scanf("%d\n",no);
    
    
    if(no % 2 == 0)
    {
        printf("Its Even number\n");
    }
    else
    {
        printf("Its Odd number\n");
    }

    return 0;
}