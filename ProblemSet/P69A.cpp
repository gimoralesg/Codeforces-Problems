#include <iostream>

using namespace std;

int main()
{
    int n, tempx, tempy, tempz, x = 0, y = 0, z = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tempx >> tempy >> tempz;
        x += tempx;
        y += tempy;
        z += tempz;
    }

    if (x == 0 && y == 0 && z == 0) cout << "YES";
    else cout << "NO";

    return 0;
}