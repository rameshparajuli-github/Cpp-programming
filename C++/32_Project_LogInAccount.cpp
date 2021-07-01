#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
void forgot();
 main(){
    int want;
    cout<<"*****************************************************************"<<endl;
    cout<<"                Welcome to logging your account     "<<endl;
    cout<<" --------Follow the information given below----------"<<endl;
    cout<<"1.Already have account"<<endl;
    cout<<"2.Creat account"<<endl;
    cout<<"3.forgot password (or) username "<<endl;
    cout<<"4.Cancel"<<endl;
    cout<<"Enter what you want: ";
    cin>>want;
    cout<<endl;
    switch (want)
    {
    case 1: 
    login();
        break;
        case 2:
        registr();
        break;
        case 3:
        forgot();
        break; 
        cout<<"Thanks for using the page,This is create by ramesh_prj" <<endl;
        break;  
    default:
    system("cls");
    cout<<"Sorry, you enter the worng number";
        break;
        main();
    }
 }
void login(){
int cncl;
string user,pass,u,p;
system("cls");
cout<<"Follow the given information"<<endl;
cout<<"Enter the username: ";
cin>>user;
cout<<"Enter the password: ";
cin>>pass;


ifstream input("database.txt");
while (input>>u>>p)
{
    if(u==user && p==pass)
    {
        cncl=1;
        system("cls");
    }
}
input.close();
if (cncl==1)
{
    cout<<"Thank you "<<user<<" your login success"<<endl;
    cin.get();
    cin.get();
    main();
}
        else
        {
            cout<<"Sorry,Logging worng.check your username account again";
            main();
            
        }
        
    }




void registr(){
    string reguser,regpass,ru,rp;
    system("cls");
    cout<<"Enter the username: ";
    cin>>reguser;
    cout<<"Enter the password: ";
    cin>>regpass;


    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"Registration successfull"<<endl;
    main();

}
    void forgot()
    {
        int ch;
        system("cls");
        cout<<"Forgotten? Here for help you"<<endl;
        cout<<"1.Recover your account by username "<<endl;
        cout<<"2.Recover your account by password "<<endl;
        cout<<"3.Back"<<endl;
        cout<<"Enter what you want: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
            int cncl=0;
            string searchuser,su,sp;
            cout<<"Enter your remember username: ";
            cin>>searchuser;

            ifstream searchu("database.txt");
            while (searchu>>su>>sp)
            {
                if (su==searchuser)
                {
                    cncl =1;
                    break;
                }            
            }
            searchu.close();
            if (cncl ==1)
            {
                cout<<"Your account we found "<<endl;
                cout<<"Your password is "<<sp<<endl;
                cin.get();
                cin.get();
                system("cls");
                main();

            }
            else
            {
                cout<<"sorry,your account is not found"<<endl;
                cout<<"please kindly contact your syatem administrator for more detail"<<endl;
                cin.get();
                cin.get();
                main();
            }
            break;
        }
            case 2:
            {
            int cncl =0;
            string searchpass ,su2,sp2;
            cout<<"Enter the remembered password: ";
            cin>>searchpass;

            ifstream searchp("database.txt");
            while (searchp>>su2>>sp2)
            {
                if (sp2==searchpass)
                {
                    
                cncl=1;
            }
        }
          searchp.close();
          if (cncl==1)
          {
              cout<<"The account we found "<<endl;
              cout<<"your username is: "<<su2<<endl;
              cin.get();
              cin.get();
              system("cls");
              main();

          }else
          {
              cout<<"Sorry, we could not find your accountID in our database "<<endl;
              cout<<"Please kindly contact your administrator for more information"<<endl;
              cin.get();
              cin.get();
              main();
          }
          
          break;
            }
          case 3:
          {
          cin.get();
          main();
          break;
          }
        
        default:
        cout<<"You enter wrong number try it again."<<endl;
        forgot();
            
        }
    }
    
