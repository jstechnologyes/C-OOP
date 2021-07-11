#include<iostream>
#include<string>
using namespace std;

class MyClass{      //The Class
public :            //Access Specifier
    int myAge;      //Attribute (int Variable)
    string myName;// Attribute (string variable)
};

int main()
{

     MyClass myObj; //Create an objects of MyClass
    //Access Atrributes and set Values
    myObj.myName="Hadiuzzaman";
    myObj.myAge=38;


    //print Values
    cout<<"My Name is: "<<myObj.myName<<endl;
    cout<<"My Age is: "<<myObj.myAge<<endl;

return 0;
}
