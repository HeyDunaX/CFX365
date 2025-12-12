#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    long long K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int j = 0; j < N; j++) {
        cin >> A[j];
    }

    long long count = 0;
    for (int j = 1; j < N; j++) {
        for (int i = 0; i < j; i++) {
            if (A[i] + A[j] == K) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}

