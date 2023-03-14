#include <iostream>
#include<string.h>

using namespace std;

class MyClass 
{
     public:
     	
    void func0() 
	{
        cout<<"Function with 0 arguments called"<<endl;
    }

    void func1(int arg1) 
	{
        cout<<" with 1 argument called : "<<arg1<<endl;
    }

    void func2(int arg1, int arg2) 
	{
        cout<<" with 2 arguments called : "<<arg1<<" "<<arg2<<endl;
    }

    void func3(int arg1, int arg2, int arg3) 
	{
        cout<<"Function with 3 arguments called : "<<arg1<<" "<<arg2<<"  "<<arg3<<endl;
    }

   
};

int main() 
{
    MyClass obj;
    obj.func0();
    obj.func1(1);
    obj.func2(2, 3);
    obj.func3(4, 5, 6);
    
 return 0;
}
