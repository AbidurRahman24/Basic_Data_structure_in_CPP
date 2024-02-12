#include <iostream>
#include <set>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        set<int> s;
        int moves = 0;

        for (int i = 0; i < n; i++)
        {
            if (s.find(ar[i]) != s.end())
            {
                moves++;
            }
            else
            {
                s.insert(ar[i]);
            }
        }

        cout << moves << endl;
    }

    return 0;
}
