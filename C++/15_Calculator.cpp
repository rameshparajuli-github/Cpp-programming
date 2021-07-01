#include <iostream>
using namespace std;
int main (){
    int firstNumber, secondNumberum;
    cout<<"Enter the First Number: ";
    cin>>firstNumber;
    cout<<"Enter the Second Number: ";
    cin>>secondNumberum;
    int sum , diff, mul, div, mod;
    //calculate
    sum = firstNumber + secondNumberum;
    diff =firstNumber - secondNumberum;
    mul =firstNumber * secondNumberum;
    div =firstNumber / secondNumberum;
    mod =firstNumber % secondNumberum;
 // print the value 
 cout<<"The sum is "<<sum<<endl;
  cout<<"The diff is "<<diff<<endl;
  cout<<"The mul is "<<mul<<endl;
  cout<<"The div is "<<div<<endl;
   cout<<"The mod is "<<mod<<endl;
    return 0;
}
