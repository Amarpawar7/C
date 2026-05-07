# include <stdio.h>

int main(){

    int no1 ;
    int no2;
    int ans = 0;
    printf("Enter first number : \n");
    scanf("%d\n",no1);
    
    printf("Enter second number : \n");
    scanf("%d\n",no2);

    ans = no1 + no2;
    printf("Addition is : %d\n",ans);
    
    return 0;
}