#include <iostream>
#include <vector>

using namespace std;

// template <class T>3

void display(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "";
    }

    cout << endl;
}

int main()
{
    // difrent ways to create vector

    //First one is a vector with no length and elements specified.
    vector<int> vec1;

    //Second one is a vector of length 4 and no elements.
    vector<char> vec2(4);

    //Third one is a vector made from the second one.
    vector<char> vec3(vec2);

    //And last one, is a vector with length 6 and all the elements being 3.
    vector<int> vec4(6,3);
    int element, size;

    cout << "Enter the Size for vector : " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements for vector : " << endl;
        cin >> element;
        vec1.push_back(element);
    }


    // display(vec1);
    // vec1.pop_back();


    //genrating iterator 
    // vector<int> :: iterator itr = vec1.begin();
    // vec1.insert(itr,2);
    display(vec1);

    return 0;
}