// FUNCTION
// Parameters and Arguments.
// a function that takes a string called fname as parameter. When the function is called, we pass along a first name,
//  which is used inside the function to print the full name:
#include<iostream>
#include<string>
using namespace std;
void myfunction(string fname){
    cout<<fname<<" BARS"<<endl;

}
int main(){
    myfunction("Bishal");
    myfunction("Abiskar");
    myfunction("Ramesh");
    myfunction("Sujit");



    // FUNCTION OVERLOADING .
    
    /*#include<iostream>
    #include<string>
    using namespace std;
    int myfunction(int x ,int y){
        return x + y;
    }
    double myfunctiondoub(double x ,double y){
        return x + y;

    }
    int main(){
        int num1=myfunction(2 ,  3  );
       double num2=myfunctiondoub(2.2 ,3.2);
        cout<<"int: "<<num1<<endl;
        cout<<"double: "<<num2<<endl;*/
    return 0;
}
