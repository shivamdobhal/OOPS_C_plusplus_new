code1-----
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class abc{                               //by default the class abc is private so abc class cant be accessed out it.
    string name;
    int health;

};

int main()
{
abc obj1;     
cout<<obj1.name;
cout<<obj1.health;
}

output------------------------------------------error:-name and health is private

........................................................................................................................................................
 code1.1-------- improved 

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class abc{                 
    public:                            //now abc class  can be accesssed from outside this class
    string name;
    int health;

};

int main()
{
abc obj1;     
cout<<obj1.name;
cout<<obj1.health;
}
  
output------------------------------------------no error compile successful  


........................................................................................................................................................
 code1.2--------  

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class abc{                 
    public:                            //now name(data member)  can be accesssed from outside this class
    string name;
private:                               //but health(data member) class  cannot be accesssed from outside this class            
    int health;

};

int main()
{
abc obj1;     
cout<<obj1.name;
cout<<obj1.health;
}
  
output------------------------------------------error:-name accessed but health cant be accessed
