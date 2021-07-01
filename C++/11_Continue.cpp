//Continue
#include<iostream>
using namespace std;
int main(){
    for (int i =1;i<=10;i++)   
     {
         
        //break- break entire loop
        //continue-bypass
        if (i==5)
        {
            continue;//break la jatti number ho tati samma break garcha 
            //rw continue la teo number laii chodara aaru number continue run garcha 
          }
        
        cout<<i<<endl;
    }
    
    return 0;
    
}
