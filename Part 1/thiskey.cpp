//this keyword we can use mostly to access whe instance and local variables are same
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int x;
    public:
    void print(int x){
     this->x=x;
    cout<<x;

    }
};
int main(){
student object;
object.print(76);


}