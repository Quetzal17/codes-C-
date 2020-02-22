/* CIRHUZA  VITAL
*/

#include <iostream>
using namespace std;

class Adress{
    public:
    string state;
    string city;
    string street;
    int number;
public:
    Adress(string state,string city,string street,int number)
    {
       this->state=state;
       this->city=city;
       this->street=street;
       this->number=number;
    }
};
class customer{
     string name;
     int id;
     int unit;
     int cond;
     Adress *adress;
     double r1=0.5,r2=0.65,r3=0.80,r4=1.00,total,oac;
 public:
    customer(string name,int id,int unit,Adress *adress){
    this->name=name;
    this->id=id;
    this->unit=unit;
    this->adress=adress;
    }
    void condition(){
       if(unit>0 && unit<=200){
            cout<<"the rate is: "<<r1<<" per unit"<<endl; oac=0;
            total=(r1*unit)+oac;
            cout<<"the total is: "<<total<<" BIF"<<endl;
            cout<<"the others charges is: "<<oac<<endl;
        }
        else if(unit>200 && unit<=400){
            cout<<"the rate is: "<<r2<<" per unit"<<endl; oac=1000.00;
            total=(r2*unit)+oac;
            cout<<"the total is: "<<total<<" BIF"<<endl;
            cout<<"the others charges is: "<<oac<<endl;
        }
        else if(unit>400 && unit<=600){
            cout<<"the rate is: "<<r3<<" per unit"<<endl; oac=2500.00;
            total=(r3*unit)+oac;
            cout<<"the total is: "<<total<<" BIF"<<endl;
            cout<<"the others charges is: "<<oac<<endl;
        }
        else if(unit>600){
            cout<<"the rate is: "<<r4<<" per unit"<<endl; oac=3500.00;
            total=(r4*unit)+oac;
            cout<<"the total is: "<<total<<" BIF"<<endl;
            cout<<"the others charges is: "<<oac<<endl;
       }}
     void display(){
        cout<<"the customer name is: "<<name<<endl;
        cout<<"the customer ID is: "<<id<<endl;
        cout<<"the customer state is: "<<adress->state<<endl;
        cout<<"the customer city is: "<<adress->city<<endl;
        cout<<"the customer street(quarter) is: "<<adress->street<<endl;
        cout<<"the customer street number is: "<<adress->number<<endl;
        cout<<"the customer unit is: "<<unit<<endl<<endl;
        condition();
    }
     };
int main()
{
    int ID,num,unit=0,cond;
    string name,state,city,street;
    do{
    cout<<"put the ID of the customer : ";cin>>ID;
    cout<<"put the name of the customer : ";cin>>name;
    cout<<"put the state of the customer : ";cin>>state;
    cout<<"put the city of the customer : ";cin>>city;
    cout<<"put the street(quarter) of the customer : ";cin>>street;
    cout<<"put the number of the customer : ";cin>>num;
    cout<<"put the unit of the customer : ";cin>>unit;cout<<endl<<endl;
    Adress a=Adress(street,city,state,num);
    customer b=customer(name,ID,unit,&a);
           b.display();
    cout<<"press -1 to finish program or press any integer value to continue: ";
    cout<<"\n";
    cin>>cond;
    }
    while(cond!=-1);
    return 0;
}

