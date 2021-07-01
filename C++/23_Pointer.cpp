//basic of pointer 
#include <iostream>
#include<string>
using namespace std;
int main (){
    int a;// this is normal variable
    int *b;// this one is pointer
    a =10;
    b =&a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The place of a value in b is "<<b;
    return 0;
}
