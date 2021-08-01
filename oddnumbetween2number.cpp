// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int start;
    int end;
    int count=0;
    
    cout<<"Enter the start Value : "<<endl;
    cin>>start;
    cout<<"Enter the End Value : "<<endl;
    cin>>end;
    
    for(int i = start;i<=end;i++){
            
            if(i%2!=0){
                cout<<i<<endl;
                
            }
        
            
            
    }

    return 0;
}