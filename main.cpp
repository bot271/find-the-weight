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
    cout << 2 << ' ' << x;
    return 0;
}

int scale(int a, int b)
{
    if (a == b)
        return a;
    int size = b - a + 1;
    if (size % 2 == 0)
    {
        cout << 1 << ' ' << size / 2 << ' ' << size / 2 << endl;
        for (int i = a; i < a + size / 2; ++i)
            cout << i << " ";
        cout << endl;
        for (int i = a + size / 2; i <= b; ++i)
            cout << i << " ";
        cout << endl;
        int answer;
        cin >> answer;
        if (answer == 1)
            return scale(a, a + size/2 - 1);
        return scale(a + size / 2, b);
    }
    else
    {
        cout << 1 << ' ' << size / 2 << ' ' << size / 2 << endl;
        for (int i = a; i < a + size / 2; ++i)
            cout << i << " ";
        cout << endl;
        for (int i = a + size / 2; i < b; ++i)
            cout << i << " ";
        cout << endl;
        int answer;
        cin >> answer;
        if (answer == 0)
            return b;
        else if (answer == 1)
            return scale(a, a + size / 2 - 1);
        return scale(a + size / 2, b - 1);
    }
    
}

