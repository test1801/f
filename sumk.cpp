#include <iostream>
#include <map>
using namespace std;
map<pair<int, int>, long long> c;
long long count(int k, int n)
{
    if (n == 1)
    {
        if (k == 1)
            return 1;
        else
            return 0;
    }
    int h = k - n;
    if (c.count({k, n}) == 0)

    {   long long res;
        if (h == 0)
            res = count(k, n - 1) + 1;
        else if (h < n)
            res = count(k, n - 1) + count(h, h);
        else
            res = count(k, n - 1) + count(h, n - 1);
        c[{k,n}] = res;
        return c[{k,n}];
    }
    else return c[{k,n}];
}

int main()
{
    int k;
    cout << "Nhap k = ";
    cin >> k;
    cout << "Co tat ca " << count(k, k - 1) << " cach phan tich.";
}