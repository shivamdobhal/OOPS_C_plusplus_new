//static keyword is an class member which can be usec to access the member of class without creation of object
#include <iostream>
using namespace std;

class ABC{
    public:
          int x;
         static int y;
    
            
};

int ABC::y=10;                   //syntax for accessing the class member without object creation

int main(){
    cout<<ABC::y;                             //output--------------------------->10
    return 0;
}
