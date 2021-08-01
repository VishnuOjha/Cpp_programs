#include <iostream>
#include <list>

using namespace std;

void display(list<int> &ls)
{

    list<int>::iterator itr;

    for (itr = ls.begin(); itr != ls.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int main()
{

    list<int> lst1;
    lst1.push_back(2);
    lst1.push_back(1);
    lst1.push_back(7);
    lst1.push_back(5);
    lst1.push_back(3);

    display(lst1);

    //Sorting the list
    //  cout<<endl;
    //  lst1.sort();
    //  display(lst1);

    list<int> lst2(3);
    // cout<<endl;
    list<int>::iterator itr = lst2.begin();
    *itr = 2;
    itr++;
    *itr = 5;
    itr++;
    *itr = 1;
    itr++;
    cout<<endl;
    lst1.sort();
    display(lst1);
    lst2.sort();
    display(lst2);
    cout<<endl;cls
    
    lst1.merge(lst2);
    display(lst2);
    //    for (itr = lst2.begin(); itr != lst2.end();itr++)
    //    {
    //        cout<<*itr<< " " ;
    //    }

    return 0;
}
