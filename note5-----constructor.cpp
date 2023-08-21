//constructor
#include <iostream>
using namespace std;

class ABC{
    private:
    int x;
    int y;

public:

    ABC()        //invoked automatically when object is created
    {
     x=10;
     y=20;
     cout<<x<<endl<<y<<endl;
     cout<<"constructor is called"<<endl;
    }
        // cout<<"constructor is called";
    
};

int main(){

    cout<<"no constructor"<<endl;
    ABC obj1;                 //constructor called/invoked
    cout<<"hiii constructor";
    
    return 0;
}
