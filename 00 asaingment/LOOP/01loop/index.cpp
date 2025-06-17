#include<iostream>

using namespace std;

int main(){

   char d='a';
   char s='z';

   do{
        cout<<d<<endl;

        d=d+4;
   }while(d<=s);

    return 0;
}