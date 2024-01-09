//Operation overloading
#include<bits/stdc++.h>
using namespace std;
class ope{
    public:
    int a;
    int  b;
    public:
  
    void operator+(ope &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<value2-value1;

    }

};
int main(){
     ope obj1,obj2;
     obj1.a=4;
     obj2.a=7;

     obj1+obj2;
}