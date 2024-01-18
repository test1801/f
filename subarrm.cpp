#include <iostream>
#include <map>
using namespace std;
const int MAX = 10000;
int n , a[MAX], m;
map<pair<int, int>, long long> c;
long long F(int s, int n)
{
  if (n == 0)
    return s == 0 ? 1 : 0;
  if (c.count({s, n}) == 0)
    c[{s, n}] = F(s, n - 1) + F(s - a[n - 1], n - 1);

  return c[{s, n}];
}

int main()
{
  cout<<"Nhap m = ";
  cin>>m;
  cout<<"Nhap n = ";
  cin>>n;
  for(int i=0; i<n; i++){
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
  };
  cout << "Co tat ca " << F(m, n)<< " cach phan tich.";

  return 0;
}
