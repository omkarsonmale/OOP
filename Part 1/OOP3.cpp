//we can also access class from another file
#include<bits/stdc++.h>
#include"hero.cpp"
using namespace std;
int main(){
 hero ram;
 ram.age=10;
 ram.height=15;
 ram.weight=42;
 cout<<ram.age<<endl;
 cout<<ram.height<<endl;
 cout<<ram.weight<<endl;
}