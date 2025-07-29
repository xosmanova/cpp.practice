1. #include<iostream>
   using namespace std;
   int main(){
     cout<<"Hello World";
     return 0;
}
2. #include<iostream>
   using namespace std;
   int main(){
        int a,b;
        cout<<"Iki eded daxil et:";
        cin>>a>>b;
        cout<<"Sum:"<<a+b<<endl;
        return 0;
   }
3. #include<iostream>
   using namespace std;
   int main(){
        int eded;
        cout<<"Bir eded daxil et:";
        cin>>eded;
        if(eded>0){
           cout<<"Musbet ededdir."<<endl;
        } else if(eded<0) {
           cout<<"Menfi ededdir."<<endl;
        } else {
           cout<<"Sifirdir."<<endl;
        return 0;
   }
4. #include <iostream>
   using namespace std;
   int main(){
        int n;
        int faktorial=1;
        cout<<"Eded daxil edin:";
        cin>>n;
        for(int i=1;i<=n;i++){
             faktorial=faktorial*i;
             
        }
        cout<<n<<"!="<<faktorial<<endl;
        return 0;
   }
5. #include<iostream>
   using namespace std;
   int main(){
        int yaş;
        cout<<"Yaşınızı daxil edin:";
        cin>>yaş;
        cout<<"Sizin yaşınız:"<<yaş<<endl;
        return 0;
   }
6. #include<iostream>
   using namespace std;
   int main(){
        for(int i=1;i<=10;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return 0;
   }
7. #include <iostream>
   using namespace std;
   int main(){
       int eded;
       cout<<"Bir eded daxil edin:";
       cin>>eded;
       if(eded%2==0){
           cout<<"Eded:"<<"Cütdür."<<endl;
       } else {
           cout<<"Eded:"<<"Tekdir."<<endl;
       }
       return 0;
   }
        
        


