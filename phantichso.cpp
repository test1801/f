#include <iostream>
#include <vector>

using namespace std;

void xuat(const vector<int>& pt, int size) {
   cout<<pt[0]<<" = ";
    for (int i = 1; i < size - 1; i++)
        cout << pt[i] << "+";
    cout << pt[size - 1] << endl;
}

void phanTich(int n, vector<int>& pt, int size) {
  
    if (n == 0) {
        xuat(pt, size);
        return;
    }

    for (int i = n; i >= 1; i--) {
        if (i <= pt[size - 1]) {
            pt[size] = i;
            phanTich(n - i, pt, size + 1);
        }
    }
}

int main() {
    int n;
    cout << "Nhap n = ";
    cin >> n;

    vector<int> pt(n);

    pt[0] = n;
    phanTich(n, pt, 1);

    return 0;
}
