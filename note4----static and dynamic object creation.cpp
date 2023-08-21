#include <iostream>
using namespace std;

class ABC{
    public:
    int x;
    int y;
};

int main(){
  
    //static object creation
    ABC obj1;
    obj1.x=20; 
    obj1.y=40; 
    
    cout<<"for static object"<<endl;
    cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;

//     dynamic object
//   TreeNode *root=new TreeNode();
      cout<<"for dynamic object"<<endl;
       ABC *obj2=new ABC();
      // 2 way to represent dynamic allocation of object
    //   first way
       obj2->x=500;
       obj2->y=800;
    
      cout<<obj2->x<<endl;
      cout<<obj2->y<<endl;

      //second way
       (*obj2).x=1000;
       (*obj2).y=2000;
    
      cout<<(*obj2).x<<endl;
      cout<<(*obj2).y<<endl;

    return 0;
}
