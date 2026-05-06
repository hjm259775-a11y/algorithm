#include<iostream>
#include<map>
#include<vector>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += h[i];
    }
    long long min_sum = current_sum;
    long long best_index = 0;
    for (int i = 1; i <= n - k; i++) {
        current_sum = current_sum - h[i - 1] + h[i + k - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            best_index = i;
        }
    }
    cout << best_index + 1 << endl;
    return 0;
}