#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int n, s, i, k, ss;

    //1
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (i = 0; i < n; i++)
    {
        s = a[i];
        a[i] = b[i];
        b[i] = s;
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }

    //2
    cin >> n;
    int* c = new int[n];
    int* d = new int[n];

    for (i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (i = 1; i < n; i++)
    {
        s = 0;
        ss = 0;
        for (k = 1; k <= i; i++)
        {
            s = s + c[k];
            ss++;
        }
        b[i] = s / ss;
    }

    for (i = 1; i < n; i++)
    {
        cout << b[i] << endl;
    }
}
