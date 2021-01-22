
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x, n;
    cout << "Please Enter x" << endl; cin >> x;
    cout << "Please Enter n" << endl; cin >> n;

    float mult = 1, sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        mult = mult * i;
        sum = sum + (pow(x, i) / mult);
    }
    cout << " --> Z =" << sum + 1;
}
