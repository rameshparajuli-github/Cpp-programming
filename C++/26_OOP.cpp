#include<iostream>
using namespace std;
//create class
class bus
{


public:
  string brand;
  int year;
  string color;
};
// creapte object
int main(){
    bus busObj;
    busObj.brand="TATA";
    busObj.year=1999;
    busObj.color="yellow";

// print attribute value 
cout<<busObj.brand<<" Brand:  " <<busObj.year<<" Year:  "  <<busObj.color<<" Color:  " ;
return 0;
}
