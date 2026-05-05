#include <iostream>
#include <vector>
using namespace std;
long long geshu = 0;
void guibing(vector<long long>& shuzu, int zuo, int you) {
    if (zuo >= you) return;
    int zhong = zuo + (you - zuo) / 2;
    guibing(shuzu, zuo, zhong);
    guibing(shuzu, zhong + 1, you);
    vector<long long> linshi(you - zuo + 1);
    int i = zuo, j = zhong + 1, k = 0;
    while (i <= zhong && j <= you) {
        if (shuzu[i] <= shuzu[j]) {
            linshi[k++] = shuzu[i++];
        } else {
            geshu += (zhong - i + 1);
            linshi[k++] = shuzu[j++];
        }
    }
    while (i <= zhong) {
        linshi[k++] = shuzu[i++];
    }
    while (j <= you) {
        linshi[k++] = shuzu[j++];
    }
    
    for (int idx = 0; idx < k; idx++) {
        shuzu[zuo + idx] = linshi[idx];
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> shuzu(n);
    for (int i = 0; i < n; i++) {
        cin >> shuzu[i];
    }
    guibing(shuzu, 0, n - 1);
    cout << geshu << endl;
    return 0;
}