#include<iostream>
#include<string>
using namespace std;


class Shop{

    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(){counter=0;}
    void setPrice();
    void displayPrice();  
};


void Shop :: setPrice(){

    cout<<"Enter the Item ID :"<<counter+1 <<endl;
    cin>>itemId[counter];
    cout<<"Enter the Item Price :"<<endl;
    cin>>itemPrice[counter];
    counter ++;

}

void Shop :: displayPrice(){

    for (int i = 0; i < counter; i++)
    {
        cout<<"The Product's Item Id is "<<itemId[i]<<" and Price is "<<itemPrice[i]<<endl;
    }
    
}

int main(){

    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.displayPrice();


    return 0;
}