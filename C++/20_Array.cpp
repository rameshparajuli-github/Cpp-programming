// array : it can store the many data 
#include <iostream>
using namespace std;
int main(){
  float emp[5];
  for (int  i = 0;i<5; i++)
  {
      //store gareko
      cout<<"Enter the number "<<i<<":";
      cin>>emp[i];
  }
  //display gareko 
  for (int i = 0; i < 5; i++)
  {
      cout<<emp[i]<<endl;
  }
  
  return 0;
  
}
