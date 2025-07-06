#include <iostream>
using namespace std;

class car{
    public:
     string name;
     string model;
     int year;

     car(string carname,string carmodel,int caryear){

        name = carname;
        model = carmodel;
        year = caryear;
     }

     void display(){
        cout<<"name :"<<name<<"\n";
        cout<<"model:"<<model<<"\n";
        cout<<"year:"<<year<<"\n";


     }

};

int main(){
    car mycar("BMW","z5",2025);
   

    mycar.display();



    return 0 ;


}

