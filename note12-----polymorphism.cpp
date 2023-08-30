//                  polymorphism
//                   /          \
//           compile time        run time 
//             /      \             |
//        func.     operator       virtual func
//   overloading   overloading   
// --------------------------------------------------------------------------------------------------------------
//   complie time overloading============================================================
// ------------------------------------------------------------------------------------------
//   1.function overloading

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ABC{
public:
     void func()
     {
        cout<<"my fist function of function overloading"<<endl;
     }

     void func(int x)                               //func() overloaded
     {
        cout<<"my second function of function overloading"<<endl;
     }
   
    void func(char x)                               //func() overloaded
     {
        cout<<"my third function of function overloading"<<endl;
     }
};




int main(){
    ABC obj1;
    obj1.func();
    obj1.func(10);
    obj1.func('x');
    return 0;
}


---------------------------------------------------------------------------------------------------------------
  // 2.operator loading
  

