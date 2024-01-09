#include<bits/stdc++.h>
using namespace std;
class college{
    int boys;
    int girls;
   public :
   college(int x,int y){
    boys=x;
    girls=y;
   }
   //copy consturctor 
   //give the reference to the  default constructor of itself
   college(college &t);

   void show(){
    cout<<girls<<endl;
    cout<<boys<<endl;
   }

};
college::college(college &t){
    this->boys=t.boys;
    this->girls=t.girls;

}
int main(){
    college r(500,100);
    r.show();
    college s=r;
    s.show();

    

}