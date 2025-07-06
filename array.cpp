#include <iostream>
#include<string>
#include<vector>
using namespace std;

void print( vector<int>& v){
    for(int num:v){
        cout<<num<<" ";
    }
}

void newarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}
int main()
{ 

    int array[] =  {4,6,8,4,7,2,9,5};
    int l = sizeof(array) /sizeof(array[0]);
    int s = 0;
    int e = l-1;
    newarray(array,l);

    while(s<e){
        swap(array[s],array[e]);
        s++;
        e--;
    }
cout<<"reverse array"<<"\n";
newarray(array,l);


    int array[] =  {4,6,8,4,7,2,9,5};
    int l = sizeof(array) /sizeof(array[0]);
    int mid = l/2;



    int first[mid],second[l-mid] ,i;

    for(i = 0;i<mid;i++){
        first[i] = array[i];
    }

    for(int num : first){
        cout<<num<<" ";
    }

    for(int j = i;j<l;j++){
        second[j-mid] = array[j];
    }
cout<<"\n";
    
    for(int num : second){
        cout<<num<<" ";
    }
   
cout<<"new array"<<"\n";
int a;
    int array2[8] = {};
    for(a=0;a<sizeof(first)/sizeof(first[0]);a++){
        array2[a] = first[a];

    }
       for(int k=0;k<sizeof(second)/sizeof(second[0]);k++){
        array2[a] = 2*(second[k]);
        a++;

    }
  newarray(array2,8);



  /* vector<int> array = {4,9,7,5,8,4,2,1,6,4,8,2};
    int l = array.size();
    cout<<"size of array"<<" "<<l<<"\n";

   vector<int> first;// first array
   vector<int> second; // second array
   int i;

   for(i = 0; i<l/2;i++){
    first.push_back(2*array[i]);
    
   }

    int f = first.size();// fpr getting size


   for(int j = i;j<l;j++){ // for assign 
    second.push_back(array[j]);
   }

  

   print(first);
cout<<"\n";  

  print(second);*/






   /* int array[] = {1, 5, 4, 9, 6};
    int size = 5;
    int pos = 1;
    int value = 45;
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }



    for (int i = size; i > pos; i--) // for inserting
    {
        array[i] = array[i - 1];
    }
    array[pos] = value;
    size++;




    cout << endl;
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }


for(int i = pos;i<size-1;i++){// deleting
    array[i]= array[i+1];
}
size--;

    
    cout << endl;

    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
    */
}