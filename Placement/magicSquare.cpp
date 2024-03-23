#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMagicSquare(int N) {
    vector<vector<int>> magicSquare(N, vector<int>(N, 0));
    int num = 1;
    int i = N / 2;
    int j = N - 1;

    while (num <= N * N) {
        if (i == -1 && j == N) {
            break;
        }

        if (i < 0 && j == N) {
            i = 0;
            j = N - 2;
        } else {
            if (j == N) {
                j = 0;
            }
            if (i < 0) {
                i = N - 1;
            }
        }

        if (magicSquare[i][j] != 0) {
            i++;
            j -= 2;
            continue;
        } else {
            magicSquare[i][j] = num++;
        }

        i--;
        j++;
    }

    // Check if the magic square is valid
    int sum = N * (N * N + 1) / 2;
    int rowSum, colSum, diagSum1 = 0, diagSum2 = 0;

    for (int i = 0; i < N; i++) {
        rowSum = 0;
        colSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += magicSquare[i][j];
            colSum += magicSquare[j][i];
            if (i == j) diagSum1 += magicSquare[i][j];
            if (i + j == N - 1) diagSum2 += magicSquare[i][j];
        }
        if (rowSum != sum || colSum != sum) return {};
    }

    if (diagSum1 != sum || diagSum2 != sum) return {};

    return magicSquare;
}

int main() {
    int N = 3;
    vector<vector<int>> magicSquare = generateMagicSquare(N);

    if (magicSquare.empty()) {
        cout << "It's not possible to generate a magic square for N = " << N << endl;
    } else {
        cout << "Magic Square for N = " << N << ":" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << magicSquare[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
