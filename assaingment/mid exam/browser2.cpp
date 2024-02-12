#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    list<string> addresses;
    while (true) {
        cin >> s;
        if (s == "end")
            break;
        addresses.push_back(s);
    }

    int t;
    cin >> t;

    list<string>::iterator current = addresses.begin();

    while (t--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string address;
            cin >> address;

            bool flag = false;
            for (auto it = addresses.begin(); it != addresses.end(); ++it) {
                if (*it == address) {
                    current = it;
                    cout << *current << endl;
                    flag = true;
                    break;
                }
            }

            if (!flag) {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (current == --addresses.end()) {
                cout << "Not Available" << endl;
            } else {
                current++;
                cout << *current << endl;
            }
        } else if (command == "prev") {
            if (current == addresses.begin()) {
                cout << "Not Available" << endl;
            } else {
                current--;
                cout << *current << endl;
            }
        }
    }

    return 0;
}
