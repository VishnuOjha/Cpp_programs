#include<iostream>
using namespace std;


struct ADT_array
{
    int  total_Size;
    int used_Size;
    int *ptr;
};


void createArray(struct ADT_array *a, int tSize, int uSize){

    a->total_Size = tSize;
    a->used_Size = uSize;
    a->ptr = (int *)malloc(tSize* sizeof(int));
}


void setData(struct ADT_array *a){

    int n;
    for (int i = 0; i < a->used_Size; i++)
    {
        cout<<"Enter the elements of Arrya : "<<i;
        cin>>n;
        (a->ptr)[i] = n;

    }
    

}


void showData(struct ADT_array *a){

        for (int i = 0; i < a->used_Size; i++)
        {
                cout<<(a->ptr)[i]<<" ";
        }
        
}

int main(){

    struct ADT_array marks;
    createArray(&marks,10,3);
    cout<<"Running SetData"<<endl;
    setData(&marks);
    cout<<"Running ShowData"<<endl;
    showData(&marks);
    
    return 0;
}