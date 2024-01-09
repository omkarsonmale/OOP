//strcpy is a function we used to copy value of one string to another string

#include<bits/stdc++.h>
#include<cstring>
using namespace std;


int main()
{  
 char firstlet[]="A";
 string name="Ram";
 char secondlet[20];
 string name2;

 strcpy(secondlet,firstlet);
 //here we used copy assignment operator
 name2=name;
 cout<<secondlet<< " "<< name2;
}