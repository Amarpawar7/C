#include<iostream>
using namespace std;

int main(){

    int Size = 0 ;
    float *Marks = NULL ; 
    int i = 0;

    cout<<("Enter number of elements : \n");
    cin>>Size;

    // Dynamic memory allocation
    Marks =new float[Size];                 // memory allocation for float array ,  NO need for typecasting
    
    cout<<("Enter your marks : \n");
    

    // Iteration
    //    1     2    3
    for(i = 0; i<Size; i++)
    {
        cin>>Marks[i];
    }

    cout<<"Entered marks are : \n";

    for(i = 0; i<Size; i++)
    {
        cout<<Marks[i]<<endl;
    }

    // delete Marks;    this will delete the 1st element
    delete [] Marks;              // deallocating memory, as delete is operator nd not fxn so no brackets 
    
    return 0;
}
