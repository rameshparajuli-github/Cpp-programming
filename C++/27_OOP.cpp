//opp : method of creating 
//- it is internal desgine of code 
//-systamatic software development
//1=encapsulation :=it hide the data 
//2=abstraction
//3=polymorphis :=like ,repeat class lena mealchha 
//4=inhritance
#include <iostream>
using namespace std;
class person


{

public:      //we can put here PRIVATE;PUBLICE;PROTECT
        //function
void personalDetail(){
 cout<<"Id Number: " <<id<<".Name: " <<name<<".Height  "  <<
 height<<
 ".Gender "  <<
 gender<<endl;
}
     int id;
     string name ;
     float height ;
     char gender ;
};

 
int main(){
person p;
p.id =1;
p.name ="Ramesh";
p.height =5.6;
p.gender ='M';

person p2;
p2.id =2;
p2.name ="Hari";
p2.height =5.6;
p2.gender ='M';


p.personalDetail();
p2.personalDetail();
return 0;

}
