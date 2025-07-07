#include<iostream>
#include<string>
using namespace std;


void reverse( int s){
     string num = to_string(s);
    string rev;
     for(int i = num.length()-1;i>=0;i--){
        rev = rev + num[i];
     }
if(rev == num){
    cout<<"this is the palindrome also"<<s<<"\n";
}
     cout<<"the reverse letter"<<" "<<rev;

}

int main(){
    char name[] = "484";
    reverse(848);


    return 0;
}