#include<bits/stdc++.h>
using namespace std;
//creating a class of hero
class hero{
    //Declaring a access modifiers
    public:
    int height;
    int weight;
    private:
    int power;
    string suitcolor ;
    public:

    void print(){
        power=100;
        suitcolor ="red";
        cout<<power<<endl;
        cout<<suitcolor;
    }
 

};
int main(){
    //creating object for a class
    

  hero ramesh;
  ramesh.height=10;
  ramesh.weight=70;
 
  
  //now we are accessing the objects
  cout<< ramesh.height<<endl;
  cout<< ramesh.weight<<endl;
   ramesh.print();

}