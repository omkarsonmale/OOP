//in this code we declare a setter or gatter inside the class
#include<iostream>
using namespace std;
class jay{
 private:
 int height;
 int weight;

 //to access thes values we use gatter or setter 
 public:
 void setheight(int h){
    height=h;

 }
 
 
 //we use int type to written a int value
 int getheight(){
   return height;
 }
 void setweight(int w){
    weight=w;
 }
 int getweight(){
    return weight;

 }

};


int main(){
    jay object;
    object.setheight(42);
    object.setweight(50);
    cout<<object.getheight()<<endl;
    cout<<object.getweight();

    

}