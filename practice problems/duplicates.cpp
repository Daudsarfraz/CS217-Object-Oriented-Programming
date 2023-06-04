#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(int n[], int m)
{
    int f = 0;
	    sort(n, n + m);
    for (int i = 0; i < m - 1; i++)
    {
        if (n[i] == n[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        return true;
    else
        return false;
}
int main()
{
    int i, n1, n2;
    int a1[] = {24,33,22,33,4,4, 333, 11, 24, 5, 24, 88, 9};
    int a2[] = {2, 3, 1, 4, 5,33,22,21,12,23, 10, 8, 9};
    bool duplicate1 = false;
    bool duplicate2 = false;
    n1 = sizeof(a1) / sizeof(a1[0]);
    n2 = sizeof(a2) / sizeof(a2[0]);
    cout << "\nThe elements of the first input array are =\n";
    for (i = 0; i < n1; i++){
        cout << a1[i] << "  ";
    }
    duplicate1 = containsDuplicate(a1, n1);
    if (duplicate1)
        cout << "\nThe first input array contains duplicate";
    else
        cout << "\nThe first input array does not contain any duplicate";

    cout << "\n\n\n\nThe elements of the second input array are =\n";
    for (i = 0; i < n2; i++){
        cout << a2[i] << "  ";
    }
    duplicate2 = containsDuplicate(a2, n2);
    if (duplicate2)
        cout << "\nThe second input array contains duplicate";
    else
        cout << "\nThe second input array does not contain any duplicate";
    cout << "\n\n\n";
    return 0;
}