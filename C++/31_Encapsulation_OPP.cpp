// in Encapsulation their is Setter and Getter
#include<iostream>
using namespace std;
class Salary
{
private:
int Salary;
public:
//    setter
void setSalary(int s){
    Salary=s;
 }
// getter
    int getSalary(){
        return Salary;
   }
};
int main(){
    Salary myMoney;
    myMoney.setSalary(999999);
    cout<<myMoney.getSalary();
    return 0;

}
