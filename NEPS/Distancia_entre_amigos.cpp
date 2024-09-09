#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int max1 = A[0] + 0;
    int max2 = A[0] - 0;
    int max_dist = 0;

    for (int j = 1; j < N; ++j) {
        // Calcula a distância máxima possível para o prédio j
        max_dist = max(max_dist, max(max1 + A[j] - j, max2 + A[j] + j));

        // Atualiza os máximos
        max1 = max(max1, A[j] + j);
        max2 = max(max2, A[j] - j);
    }

    cout << max_dist << endl;

    return 0;
}
