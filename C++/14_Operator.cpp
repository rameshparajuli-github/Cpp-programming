//operaters 
/*+ = sum
  - = sub
  * = mult
  % = mod
  / = div
  < = smaller than 
  > = greater than 
  <= = smaller than or equal to
  >= = greater than or euqal
  == = equal to
  =! = not equal to 
  && =	expression1 && expression2	Logical AND.
True only if all the operands are true.

 || =	expression1 || expression2	Logical OR.
True if at least one of the operands is true.

 ! =	!expression	Logical NOT.
True only if the operand is false.*/
#include<iostream>
using namespace std;

int main(){

int a=20;
int b=10;

cout<<"The the sum of two Number is "<<a+b<<endl;
cout<<"The the diff of two Number is "<<a-b<<endl;
cout<<"The the mult of two Number is "<<a*b<<endl;
cout<<"The the div of two Number is "<<(float)a/b<<endl;
return 0;
}

