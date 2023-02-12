#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
    {
        cin >> x;
    }
    cout << "Mean: " << accumulate(arr, arr + n, 0) * 1.0 / n << endl;
    cout << "Max: " << *max_element(arr, arr + n) << endl;
    cout << "Min: " << *min_element(arr, arr + n) << endl;
    system("pause");
}