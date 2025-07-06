#include <iostream>
#include <vector>
#include <string>
using namespace std;

// merging of the two sorted array
void merge(vector<int> &a, int m, vector<int> &b, int n)
{
  int idx = m + n - 1;
  int i = m - 1;
  int j = n - 1;

  while (i >= 0 && j >= 0)
  {
    if (a[i] > b[j])
    {
      a[idx] = a[i];
      idx--;
      i--;
    }
    else
    {
      a[idx] = b[j];
      idx--;
      j--;
    }
  }
  // if the element of the j still left
  while (j >= 0)
  {
    a[idx] = b[j];
    idx--;
    j--;
  }
}

int main()
{
  vector<int>A ={5,6,7,9};
  vector<int>B = {2,3,9};
  int m = A.size();
  int n = B.size();
  cout<<"size of the array a is "<<m+n<<endl;

  merge(A,m,B,n);
  
  for(int i = 0;i<m+n;i++){
    cout<<A[i]<<" ";
  }




  return 0;
}
/*pointer{


void changeA(int &ptr){
  ptr = 90;
  cout<<(ptr)<<endl;
};

void change(int &a){
  a = 50;
  cout<<(a)<<endl;
}

int main(){
  int a = 10;
  int *ptr = &a;
  int arr[]= {1,2,3,4,5,6};


  cout<<*(ptr)<<endl;
  cout<<ptr<<endl;



  changeA(a);
  change(a);
  cout<<*(arr)<<endl;

  return 0;
}
}*/

/*class Car
{
public:
  string name;
  int year;

  void display()
  {
    cout << "name: " << name << endl;
    cout << "year of manufacture: " << year << endl;
  }
};

int main()
{
  Car mycar;
  mycar.name = "camaro";
  mycar.year = 2024;*/
/* mycar.display();*/

/* Car mycar2;
 mycar2.name = "aventador & steratto";
 mycar2.year = 2025;
// mycar2.display();

vector<int>num = {1,2,3,4,5,9 };
for(int n:num){
 cout<<n<<" ";
}
cout<<endl;
cout<<"before"<<num.capacity()<<endl;
num.push_back(5);
cout<<"after"<<num.capacity()<<endl;

 return 0;
}*/