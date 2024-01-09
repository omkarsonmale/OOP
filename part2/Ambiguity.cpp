//ambiguity of inheritance means there is same function name of multiple class whos properties are used to inherit
//to avoid this ambiguity we use scope of resolution operator
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    int print(){
        cout<<"this is a";
    }
};
class b{
    public:
    int print()
    {
        cout<<"this is b";
    }
};
class c: public a ,public  b{

};
int main(){
    c obj;
    obj.a::print();
    cout<<endl;
    obj.b::print();


}