//Encapsulation is process of data hiding /data protecting 
//wrapping of a data
//for ex :- Base class is a capsule then in that we store oure data members privately and methodes

#include<bits/stdc++.h>
class base{
    private:
    int a;
    int b;
    public:
    int solve(int input){
        this->a=input;
        b=a/10;
        return b;
    }
};
using namespace std;

int main(){
    base obj;
    int ans= obj.solve(20);
    cout<<ans;
}