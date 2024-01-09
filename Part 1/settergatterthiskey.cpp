//gettersetter access for private keyword
//we can access gettersetter variables outside of a class using this keyword
#include<bits/stdc++.h>
using namespace std;

class testing
{
private:
   int marks;
public:
    void setmarks(int m);
    int getmarks();
};

void testing::setmarks(int m )
{
    this->marks=m;
}

int testing::getmarks()
{
    return marks;
}




int main(){

testing object;
 object.setmarks(100);
 cout<<object.getmarks();
}