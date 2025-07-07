#include<iostream>

using namespace std;

class person{// encapsulation
    private:
    string name;

    public:
    void setname( string s){
        name = s;

    }

    void getname(){
        cout<<"this is the name"<<" " <<name<<endl;
    }
};

class bank{ // abstraction
    private:
    int balance;

    public:
    void deposite(int amount){
        if(amount > 0){
            balance  += amount;
            cout<<"deposited amount"<<amount<<endl;
        }
    }
    void checkbalance(){
        cout<<"current balance"<<" "<<balance;
    }
  

};

class student:public person{ //injeritence from the person  
    public:
    void role(){
        int array[] = {4,5,7,4};
        for(int i = 0;i<sizeof(array)/sizeof(array[0]);i++){
            cout<<array[i]<<endl;
        }

        cout<<"role: student";

    }

};

 
int main(){
 /* bank b1;
  b1.deposite(10000);
  b1.deposite(4000);

  b1.checkbalance();*/

  student s;
  s.setname("tushar");
  s.getname();
  s.role();
  
   
    return 0;
}