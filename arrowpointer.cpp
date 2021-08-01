#include <iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    
    public:
    void setData(int a, float b){
        id =a;
        price = b;
    }
    
    void showData(){
        cout<<"Id is : "<<id<<endl;
        cout<<"Price is : "<<price<<endl;
    }
};

int main() {
    // Write C++ code here
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    
    int p;
    float q;
    
    for (int i=0; i<size; i++){
        cout<<"Enter the Id and Price :"<<i+1<<endl;
        cin>>p>>q;
        
        ptr->setData(p,q);
        ptr++;
    }
    
    for(int i=0; i<size; i++){
        cout<<"item number";
        ptrTemp -> showData();
        ptrTemp++;
    }

    return 0;
}