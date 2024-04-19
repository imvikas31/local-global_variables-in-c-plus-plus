#include<iostream>
using namespace std;

int x = 20;  //GLOBAL VARIABLE

int main(){

    // x = 10;
    int x = 30;  //LOCAL TO MAIN FUNCTION
    cout <<"Value of X inside main function is : "<<x<<endl;   //ACCESSING LOCAL VARIABLE

    cout <<"Value of X inside main function is by using '::' : "<<::x<<endl;   //ACCESSING GLOBAL VARIABLE

    {
        int x = 50;
        cout <<"Value of X inside main function is : "<<x<<endl;   // most local variable will be accessed that is x = 50
    }

    



    return 0;
}