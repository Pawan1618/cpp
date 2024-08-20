#include <iostream>
using namespace std;
int main()
{
    int n, n1;
    int count = 0;
    cin >> n;
    int arr[n];
    int count1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Common Elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n1; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << arr1[j] << " ";
                count++;
            }
        }
    }
    // cout<<count1[2];
    if (count == 0)
    {
        cout << "None";
    }
}