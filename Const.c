// const is a qualifies

# include <stdio.h>

int main(){

    int i = 10 ;
    const int j = 10 ;

    i++;  // allowed
    
    // j++;  // not allowed  --  j+1 is performed but value can't be changed
       
    return 0;
}

