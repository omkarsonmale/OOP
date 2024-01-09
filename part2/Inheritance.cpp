//Inheritance
#include<bits/stdc++.h>
using namespace std;
class  parent{
    public:
    int house;
    int no;
    int ward;

    void setval1(int h){
      this->house=h;
    }
    int getvalue1(){
        cout<<house;
    }

      
    void setval(int n){
      this->no=n;
    }
    int getvalue(){
        cout<<no;
    }
    
       void setward(int w){
     ward=w;
    }
   
   
   
};
class child :public parent{

  public:
  int neward;
  void declare(){
    this->neward=ward;
  }
  int display(){
    cout<<" "<<neward;
  }

};

int main(){
   child obj;
   obj.setval1(20);
   obj.getvalue1();
      obj.setval(5);
   obj.getvalue();
    obj.setward(100);
   obj.declare();
   obj.display();

}