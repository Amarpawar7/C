# include <stdio.h>

int main(){

    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("R values of all variables\n");
    printf("%lf\n" , &ch);
    printf("%lf\n" , &i);
    printf("%lf\n" , &f);
    printf("%lf\n" , &d);

    return 0;
}

