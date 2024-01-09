//Protected access modifier it is completely works like private access modifier
//If we want to access it outside the class then we have to use friend class
#include<iostream>
using namespace std;
class parent{
    protected:
    int id;
};
//here we used friend class
class child :public parent {
   public:
    void setid(int x){
        id=x;
    }
    int getid(){
        cout<<id;
    }
};
int main(){
      child obj;
      obj.setid(20);
      obj.getid();
}