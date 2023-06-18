#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList = {10,20,30};
    // list<int>newList;
    // newList=myList;
    // for(int val:newList)
    // {
    //     cout<<val<<endl;
    // }

    // push_back
    list<int> myList = {10,20,30,40,50,60,70,80};
    list<int> newList = {100,200,300};
    // myList.push_back(100); //add tail element
    // myList.push_front(100); //add head element
    // myList.pop_back(); //remove tail element
    // myList.pop_front(); //remove head element
    // myList.insert(next(myList.begin(),2),100); //insert any postion
    // myList.erase(next(myList.begin(),2)); //delete any postion

    // new lIst insert
    // myList.insert(next(myList.begin(),2),newList.begin(), newList.end());

    // multiple remove
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // for(int val:myList)
    // {
    //     cout<<val<<" ";
    // }


    // replace(myList.begin(), myList.end(), 30, 100);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 60);
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}