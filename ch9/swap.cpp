#include <iostream> 

using namespace std;

void swap( int * x, int * y);

int main(){

    int x = 5, y =10;
    cout<< " x: "<< x << " y : " << y << endl;
    swap(&x, &y);
    cout<< " Swap \n" ;
    cout<< " x: "<< x << " y : " << y << endl;

}

void swap( int * x, int * y ){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    
}
