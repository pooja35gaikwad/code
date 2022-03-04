#include <iostream>

using namespace std;
class  Dog{
public:
    void bark(){
    cout<<"Dog barkes"<<endl;
    }
};
class cat{
public:
void meow(){
cout<<"Cats meow:"<<endl;
}
void bark(){
cout<<"CAts don't bark"<<endl;
}
};

class hybrid:public Dog,public cat
{
public:
    hybrid(){
    Dog::bark();
    meow();
    }
};


int main()
{
    cout << "Hello world!" << endl;
    hybrid h;
    h.cat::bark();
    return 0;
}
