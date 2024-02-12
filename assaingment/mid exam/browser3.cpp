#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> addresses;
    string address;

    // Read the doubly linked list of addresses
    while (cin >> address)
    {
        if (address == "end")
            break;

        addresses.push_back(address);
    }

    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character

    auto it = addresses.begin();

    // Process the queries
    for (int i = 0; i < t; i++)
    {
        string command;
        getline(cin, command);

        if (command.substr(0, 5) == "visit")
        {
            string visitAddress = command.substr(6);
            bool flag = false;
            for (auto curr = addresses.begin(); curr != addresses.end(); curr++)
            {
                if (*curr == visitAddress)
                {
                    flag = true;
                    it = curr;
                    break;
                }
            }

            if (flag)
                cout << *it << endl;
            else
                cout << "Not Available" << endl;
        }
        else if (command == "next")
        {
            if (it != addresses.end())
                it++;

            if (it == addresses.end())
            {
                it--;
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *it << endl;
            }
        }
        else if (command == "prev")
        {
            if (it != addresses.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}
