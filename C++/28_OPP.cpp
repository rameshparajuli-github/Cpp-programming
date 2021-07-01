//Find area by using class and area 
#include <iostream>
using namespace std;
class circle
{
public:
    double radius;


    double areaCircle(){
        return 3.24*radius*radius;
    }
};
int main(){
circle c1,c2;
c1.radius=50;
c2.radius=20;
cout<<"The area of c1 radius is: "<<c1.areaCircle();
cout<<endl<<"the area of c2 radius is: "<<c2.areaCircle();
    return 0;
}




