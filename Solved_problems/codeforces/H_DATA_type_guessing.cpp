#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k, a;

    cin >> n >> k >> a;

    double result = (static_cast<double>(n) * k) / a;

    if (result == static_cast<int>(result))
    {
        cout << "int" << endl;
    }
    else if (result == static_cast<long long>(result))
    {
        cout << "long long" << endl;
    }
    else
    {
        cout << "double" << endl;
    }

    return 0;
}