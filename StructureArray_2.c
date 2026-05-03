# include <stdio.h>
# pragma pack(1)                    //Avoids padding


struct Hello{
    float f;                     // 4
    int Arr[3];                  // 12

}hobj;            // 16    global object


int main(){

    hobj.f = 10.0f;

    hobj.Arr[0] = 10;
    hobj.Arr[1] = 21;
    hobj.Arr[2] = 51;

    printf("%f\n",hobj.f);    // 10.000000
    printf("%d\t%d\t%d\n",hobj.Arr[0],hobj.Arr[1],hobj.Arr[2]);      // 10      21      51



    return 0;
}
