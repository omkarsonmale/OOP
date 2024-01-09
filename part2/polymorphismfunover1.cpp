//ploy->many  morphism->forms
//There are two types of polymorphism 1>Compile time->i>Function Overloading
//                                                      ii>Operator overloading

//                                      2>Run Time polymorphism ->Virtual function

//Lets see fun overloading
//in that function with diff form means with diff parameters

#include<bits/stdc++.h>

using namespace  std;
class base{
    public:
    void func(int x){
    cout<<x<<endl;
    }
    void func(double x){
        cout<<x<<endl;

    }
    void func(int x, char y){
        cout<<x<<" "<<y;

    }
   
    
};
int main()
{
    base obj;
    obj.func(10);
    obj.func(5.6);
    obj.func(10,'A');
} 
