#include<iostream>
using namespace std;
class Pen{ 
private:
    int price;
    char name;

    public:
    void setPrice(int n){
        price = n;
    }
    void setName(char p){
         name = p;
    }
    int getPrice(){
        return price;
    }
    char getName(){
        return name;
    }

    void printInfo(){
    cout<<"Price is: "<<price<<endl;
    cout<<"Name is: "<<name<<endl;
    
    }
    Pen(int price,char name){
        this->price = price;
        this->name = name;
        cout<<price<<endl;
        cout<<name<<endl;
    }
};

int main(){
    Pen p1(69,'i');
    p1.setPrice(30);
    p1.setName('o');
    // p1.printInfo();
    int price = p1.getPrice();
    char name = p1.getName();

    cout<<"Price is " << price<<endl; 
    cout<<"Name is " << name<<endl; 

    
    return 0;

}