 #include<iostream>
 #include<algorithm>
 using namespace std;

void buuble(int arr[],int n){
    for(int i= 0 ;i<n;i++){
        for(int j= 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertion (int arr[],int n){
    for(int i =1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>= 0 && arr[prev]> curr){
            arr[prev+1] = arr[prev];
            prev--;
            
        }
        arr[prev+1] = curr;
        
      for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }


}
void selection( int arr[], int n){
   

    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

 int main(){
 
 int array[] =  {4,6,8,4,7,2,9,5};
    int l = sizeof(array) /sizeof(array[0]); 
     for(int i =0;i<l;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";

    insertion(array,l);



    return 0 ;
 }
