#include<iostream>
#include<string>
using namespace std;
int main(){

    // This statement accesses the value of the first element in fruits.
   /*
    string fruits[5]={"banana", "apple", "orange", "garps","mango"};
    cout<<fruits[0];*/

// change any array element.
    // To change the value of a specific element, refer to the index number:

/*string fruits[5]={"banana", "apple", "orange", "garps","mango"};
fruits[0]="been";
cout<<fruits[0];*/

//  loop through the array elements with the for loop.
/*int i=0;
string cars[4]={"volvo","tata","ford","BMW"};
for ( i = 0; i <4; i++)
{
    cout<<cars[i]<<endl;
}
*/

int i =0;
string cars[4]={"volvo","tata","ford","BMW"};
for ( i = 0; i < 4; i++)
{
cout<<i<<" :"<<cars[i]<<endl;
}

    return 0;
}
