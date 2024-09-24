//
//  main.cpp
//  pratice4.0
//
//  Created by Mingze Lee on 2024/9/23.
//



#include <iostream>
using namespace std;
int scale(int, int);

int main()
{
    int n;
    cin >> n;
    int x = scale(1, n);
    cout << 2 << ' ' << x << flush;
    return 0;
}

int scale(int a, int b)
{
    if (a == b)
        return a;
    if (b - a == 1)
    {
        cout << 1 << ' ' << 1 << ' ' << 1 << endl << flush;
        cout << a << ' ' << b << endl << flush;
        int answer;
        cin >> answer;
        if (answer == 1)
            return a;
        else
            return b;
    }
    int size = b - a + 1;
    int remainder = size % 3;
    int k;
    if (remainder == 0 || remainder == 1)
        k = size / 3;
    else
        k = size / 3 + 1;
    cout << 1 << ' ' << k << ' ' << k << endl << flush;
    for (int i = 0; i < k; ++i)
    {
        cout << a + i << ' ';
        cout << endl << flush;
    }
    for (int i = 0; i < k; ++i)
    {
        cout << a + k + i << ' ';
        cout << endl << flush;
    }
    int answer;
    cin >> answer;
    if (answer == 1)
        return scale(a, a + k - 1);
    else if (answer == -1)
        return scale(a + k, a + 2 * k - 1);
    else
        return scale(a + 2 * k, b);
}
