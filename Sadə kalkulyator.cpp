#include<iostream>
using namespace std;
int main(){
      char operation;
      float a,b;
      cout<<"Iki eded daxil et:";
      cin>>a>>b;
      cout<<"Emeliyyat sec(*,/,+,-);
      cin>>operation;
      switch(operation) {
      case'+':
         cout<<"Cem:"<<a+b<<endl;
         break;
      case'-':
         cout<<"Ferqi:"<<a-b<<endl;
         break;
      case'*':
         cout<<"Hasili:"<<a*b<<endl;
         break;
     case'/':
         if(b!=0){
             cout<<"Bolme:"<<a/b<<endl;
         }else{
             cout<<"0-a bolmek olmaz!<<endl;
         }
         break;
     default:
         cout<<"Sehv emeliyyat secildi"<<endl;
     }
     return 0;
}