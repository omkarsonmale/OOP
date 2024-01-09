#include<bits/stdc++.h>
using namespace std;
//creating a class of hero
class hero{
    //Declaring a access modifiers
    public:
    int height;
    int weight;
    int power;
    string suitcolor;
    
    

};
int main(){
    //creating object for a class
    

  hero ramesh;
  ramesh.height=10;
  ramesh.weight=70;
  ramesh.power=100;
  ramesh.suitcolor="red";
  
  //now we are accessing the objects
  cout<< ramesh.height<<endl;
  cout<< ramesh.weight<<endl;
  cout<< ramesh.power<<endl;
  cout<< ramesh.suitcolor<<endl;

}