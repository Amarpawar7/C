# include <stdio.h>

int no = 11;            // Global Variable  (memory is allocated on Data segment)

void Demo(){
    int i = 51;         // Local Variable  (memory is allocated on stack segment)

    printf("Inside Demo : %d\n",i);      // 51
    printf("Inside Demo : %d\n",no);     // 11

}

int main(){

    int i = 21;         // Local Variable

    fun();

    printf("Inside main : %d\n",i);      // 21
    printf("Inside main : %d\n",no);     // 11

    return 0;
}
