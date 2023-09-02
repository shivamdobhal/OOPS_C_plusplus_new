//single inheritance
#include <iostream>
using namespace std;
 
class animal{
    public:
     string name;
     string species;
     int age;
     int weight;

     void hobbie(){
               cout<<"barking"<<endl;
     }
};

class dog:public animal{
public:
    int height;
    void setage(int age){
        this->age=age;
    }
    int getage()
    {
        return this->age;
    }
};

int main(){
    dog obj1;
    obj1.setage(20);
    cout<<obj1.getage()<<endl;
    obj1.hobbie();
    return 0;
}

// output--------------------------->20
//                                   barking

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// MULTILEVEL INHERITANCE
#include <iostream>
using namespace std;

class animal{              //----------------------->parent1
    public:
     void hobbie(){
               cout<<"barking"<<endl;
     }
};

class dog:public animal{        //------------------------>parent2
public:
    void name(){
        cout<<"hello i am dog"<<endl;
    }
};

class pitbull: public dog{               //----------------------->child 
public: 

};

int main(){
    pitbull obj1;           //class pitbull acquire properties of class dog and class animal
    obj1.hobbie();
    obj1.name();

    return 0;
}

// output--------------------------->barking
//                                    hello i am dog

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 3.MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

class animal{              //----------------------->parent1

    public:
     void hobbie(){
               cout<<"barking"<<endl;
     }
};

class dog{        //------------------------>parent2
public:
    void name(){
        cout<<"hello i am dog"<<endl;
    }


};

class pitbull: public dog,public animal{               //----------------------->child + multiple inheritance
public: 

};

int main(){
    pitbull obj1;
    obj1.hobbie();
    obj1.name();

    return 0;
}

// output--------------------------->barking
//                                    hello i am dog

////////////////////////////////////////////////////////////////////////////////////////////

// 4.HIERARCHICAL INHERITANCE
#include <iostream>
using namespace std;

class animal{              //----------------------->parent

    public:
     void func1(){
               cout<<"barking"<<endl;
     }
};

class dog:public animal{        //------------------------>child1
public:
    void func2(){
        cout<<"hello i am dog"<<endl;
    }


};

class cat:public animal{               //----------------------->child 2
public: 
      void func3(){
        cout<<"hello i am cat"<<endl;
    }
};

int main(){
    cat  obj1;
    obj1.func1();
    obj1.func3();

    
    dog  obj2;
    obj2.func1();
    obj2.func2();


    return 0;
}

output---->barking
           hello i am cat
           barking
           hello i am dog

///////////////////////////////////////////////////////////////////////////////////////////
// 5.hybrid inheritance
#include <iostream>
using namespace std;

class animal{              //----------------------->parent1

    public:
     void func1(){
               cout<<"barking"<<endl;
     }
};

class D{
    public:
     void func4(){
               cout<<"func4"<<endl;
     }
};

class dog:public animal{        //------------------------>parent2
public:
    void func2(){
        cout<<"hello i am dog"<<endl;
    }


};

class cat:public animal,public D{               //----------------------->child 
public: 
      void func3(){
        cout<<"hello i am cat"<<endl;
    }
};

int main(){
    cat  obj1;
    obj1.func1();
    obj1.func3();
    obj1.func4();
    
    dog  obj2;
    obj2.func1();
    obj2.func2();



    return 0;
}

// output----------------
//                     barking
//                     hello i am cat
//                     func4
//                     barking
//                     hello i am dog
