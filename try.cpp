#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 2;
    try{
        if(b== 0 ){
            throw " not possible";
        }
        int result = a/b;
        cout<<result;

    }
    catch(const char* e){
        cout<<"exception handle"<<e;
    }


    return 0;
}