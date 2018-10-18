#include <iostream>

using namespace std;





int main(){
     int intOne;
     int & rSomeRef = intOne;

     intOne = 5;

     cout<<"intOne: " << intOne<<endl;
     cout<<"rSomeRef: "<< rSomeRef<<endl;

     rSomeRef = 7; 
     cout<<"intOne: " << intOne<<endl;
     cout<<"rSomeRef: "<< rSomeRef<<endl;

     cout<<"&intOne: " << &intOne<<endl;
     cout<<"&rSomeRef: "<< &rSomeRef<<endl;




    return 0;

}

/* Exploting References 

A reference is an alias; when you create a reference, you initialize it 
with the name of another object, the target.  From that moment on, the 
reference acts as an alternative name for the target, and anything you 
do to the reference is really done to the target.  

Create
int &rSomeRef = someInt;
References must be declared when initialized.  

*/