#include<iostream>
using namespace std;


// tepmlate with multipale arguments
template <class T1, class T2>

class Vector{

    public:
    T1 data1;
    T2 data2;

    void setData(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }

    void sumData(){
        T1 d = data1 + data2;
        cout<<d<<endl;
    }
    
};



int main(){

    Vector <float, int> v1;
    v1.setData(1.2,2);
    v1.sumData();

    return 0;
}
