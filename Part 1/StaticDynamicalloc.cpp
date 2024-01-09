//Static allocation(privious file) is normal which we alway used to create object
//let see dynamically allcation
#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int height;
    int weight;

};

int main(){
    //Dynamic allocation
    hero *b = new hero;

    
    b->height=50;
    b->weight=70;
    cout<<(*b).height<<endl;
    cout<<b->weight;


}