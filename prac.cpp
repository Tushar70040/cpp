#include<iostream>
#include<vector>

using namespace std;

 int main(){

    vector<int> arr ={ 4,9,7,5,4,4,5,8,8};
    cout<<"the size of the vector"<<arr.size()<<endl;


    int array[]={4,8,6,7,2,4};
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"the length of the array is:"<<length<<endl;


    int find = 7;

   // fo finding the element 
    for(int i = 0; i<length;i++){
        if(array[i] == find ){
            cout<<"the number is of the postion is"<< " "<<i+1<<" "<<"and the value is"<<array[i]<<endl;
        }
       
    }
    cout<<endl;
    int num = array[4];
    cout<<"the fifth number of the array "<<num<<endl;

    return 0;

 }