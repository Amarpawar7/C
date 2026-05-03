# include <stdio.h>
# pragma pack(1)                    //Avoids padding


struct Hello{
    float f;                     // 4
    int Arr[3];                  // 12

}hobj;            // 16    global object


int main(){

    printf("Size of object is : %lu\n",sizeof(hobj));


    return 0;
}


