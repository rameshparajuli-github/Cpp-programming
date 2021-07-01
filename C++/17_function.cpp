//function declaration
# include <iostream>
using namespace std;
int sum(int a,int b);
void myFirst();

//function call
int main(){
    myFirst();
    return 0;
}
//function difination
void myFirst(){
    cout<<"The sum is "<<sum(10,20);
    
}
int sum(int a, int b){
   return a+b;
}
