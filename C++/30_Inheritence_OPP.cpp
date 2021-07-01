#include<iostream>
#include<math.h>
using namespace std;
int main(){
string username="";
string password="";
bool loggingSuccess=false;
cout<<"Welcome!  First you have to enter your login account"<<endl;
do
{
cout<<"Enter your username: ";
cin>>username;
cout<<"Enter your password: ";
cin>>password;
if (username=="Ramesh" && password=="Parajuli")
{
    cout<<"Login account successful"<<endl;
    loggingSuccess=true;

}else
{
   cout<<"Incorrect username password"<<endl;
   cout<<"Please try again.";
}

} while (!loggingSuccess);
system("pause");

     return 0;
}
  
