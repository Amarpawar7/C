# include <stdio.h>

int Addition(int No1,int No2){

    int Ans = 0;
    Ans = No1 + No2 ;
    return Ans;
    

}

int main(){

    int Ret = 0;

    Ret = Addition(10,11);
    
    printf("Additon is : %d\n",Ret);

    return 0;
}
