#include<iostream>
using namespace std;
class construct{
    int x;
    int y;
    public:
    construct(){
        x=0;
        y=0;
        
    }
    construct(int a ,int b){
        x=a;
        y=b;
    }
     construct(int a ){
        x=a;
        y=0;
    }
    void print(){
        cout<<x<< " "<<y<<endl;
       
    }
    
};
int main(){
  construct obj1(10,20) ; 
  obj1.print();
    construct obj2(40) ; 
  obj2.print();
  
     construct obj3 ; 
    obj3.print();
}