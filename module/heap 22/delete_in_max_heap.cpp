#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() -1]; // Replace the root with the last element
    v.pop_back(); // Remove the last element
    int cur = 0; // Index of the current element

    while(true) // Perform heapify-down operation to maintain the heap property
    {
        int left_idx = cur * 2 + 1; // Index of the left child
        int right_idx = cur * 2 + 2; // Index of the right child
        int last_idx = v.size() - 1; // Index of the last element

        if(left_idx <= last_idx && right_idx <= last_idx)
        {
            // Both left and right children exist
            if(v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                // If left child is greater than or equal to right child and greater than the current element
                swap(v[left_idx], v[cur]); // Swap the current element with the left child
                cur = left_idx; // Move down to the left child index
            }
            else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                // If right child is greater than or equal to left child and greater than the current element
                swap(v[right_idx], v[cur]); // Swap the current element with the right child
                cur = right_idx; // Move down to the right child index
            }
            else
            {
                break; // The heap property is satisfied, so break the loop
            }
        }
        else if (right_idx <= last_idx)
        {
            // Only right child exists
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break; // No children exist, so break the loop
        }
    }
}
// Function to print the heap elements
void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    // Insert elements into the heap
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    // Delete the maximum element and print the heap
    delete_heap(v);
    print_heap(v);

    // Delete the maximum element again and print the heap
    delete_heap(v);
    print_heap(v);
    return 0;
}