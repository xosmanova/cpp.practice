// Task 1
   #include<iostream>
   using namespace std;
   int main(){
        for(int i=1;i<=100;i++){ 
             if(i%2==0){
                cout<<"Cüt Ədəd:"<<i<<endl;
             }
        }
        for(int i=1;i<=100<=;i++){
             if(i%2!=0){
                cout<<"Tək Ədəd:"<<i<<endl;
             }
        }
        return 0;
   }

// Task 2
   #include<iostream>
   using namespace std;
   int main(){
        int a,b;
        cout<<"Iki eded daxil et:";
        cin>>a>>b;
        if(a>b){
           cout<<a<<"daha boyukdur."<<endl;
        }else if(a<b){
           cout<<b<<"daha boyukdur."<<endl;
        }else{
           cout<<"Ededler beraberdir."<<endl;
        }
        return 0;
   }


// Task 3
   #include<iostream>
   using namespace std;
   int main(){
        int yas=18;
        float ortalama=90.7;
        char herf='X';
        string name="Xumar";
        bool aktiv=true;


// Task 4
   #include<iostream>
   using namespace std;
   int main(){
       int a,b;
       cout<<"IKi eded daxil et:";
       cin>>a>>b;
       cout<<"Cem:"<<a+b<<endl;
       cout<<"Ferqi:<<a-b<<endl;
       cout<<"Hasili:"<<a*b<<endl;
       if(b!=0){
           cout<<"Bolme:"<<a/b<<endl;
       }else {
           cout<<"0-a bolmek olmaz!"<<endl;
       }
       return 0;
   }

// Task 5
   #include<iostream>
   using namespace std;
   int main(){
        int a;
        cout<<"Bir eded daxil et:";
        cin>>a;
        if(a>0){
            cout<<"Musbet:"<<endl;
        }else if{
            cout<<"Menfi:"<<endl;
        }else{
            cout<<"0-dır"<<endl;
        }
        return 0;
   }

// Task 6
   #include<Iostream>
   using namespace std;
   int main(){
        for(int i=1;i<=100;i++){
             if(i%2!=0){
                cout<<"Tek Ededler"<<endl;
             }
        }
        return 0;
   }


// Task 7
   #include<iostream>
   using namespace std;
   int main(){
        int i=1;
        while(i<=50){
              cout<<i<<" ";
        }
   }


// Task 8
   #include<iostreeam>
   using namespace std;
   int main(){  
        int a,b,c;
        cout<<"Üç ədəd daxil et:"<<endl;
        cin>>a>>b>>c;
        if(a>b && a>c){
            cout<<"En boyuk eded:"<<a<<endl;
        }else if(b>c && b>a){
            cout<<"En boyuk eded:"<<b<<endl;
        }else{
            cout<<"En boyuk eded:"<<c<<endl;
        }
        return 0;
   }


// Task 9
   #include<Iostream>
   using namespace std;
   int main(){
        int cem=0;
        for(int i=1;i<=10;i++){
            cem=cem+i;
        }
        cout<<"Cem:"<<cem<<endl;
        return 0;
   }

// Task 10
   #include<iostream>
   using namespace std;
   int main(){
        int cem=0,i=1;
        while(i<=10){
               cem=cem+i;
               i++;
        }
        cout<<"Cem:"<<cem<<endl;
        return 0;
   }
  

