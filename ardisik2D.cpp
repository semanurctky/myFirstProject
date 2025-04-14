#include <iostream>
#include <vector>
#include <algorithm>  // max() fonksiyonunu kullanabilmek için
#include <limits>     // numeric_limits kullanabilmek için

using namespace std;

int N; // Matrisin boyutu (NxN)
vector<vector<int>> mat; // Sayı matrisi
vector<vector<int>> dp; // Dinamik programlama için kullanılacak önbellek (memoization)

// 4 yön: sağ (→), aşağı (↓), sağ-alt çapraz (↘), sol-alt çapraz (↙)
int dx[] = {1, 0, 1, -1}; // x ekseni için hareket
int dy[] = {0, 1, 1, 1};  // y ekseni için hareket

// 🔹 **DFS (Derinlik Öncelikli Arama) ile en uzun ardışık sayı dizisini bul**
int findLongestPath(int x, int y) {
    // Eğer bu hücre daha önce hesaplandıysa tekrar hesaplamayalım (Memoization)
    if (dp[x][y] != -1) return dp[x][y];

    int maxLength = 1; // Her hücre en az kendisi kadar uzun bir ardışık dizinin parçasıdır.

    // 4 yön için döngüye giriyoruz
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i]; // Yeni x konumu
        int newY = y + dy[i]; // Yeni y konumu

        // Eğer yeni konum matrisin sınırları içindeyse ve sayı +1 veya -1 farkla devam ediyorsa ilerle
        if (newX >= 0 && newX < N && newY >= 0 && newY < N &&
            (mat[newX][newY] == mat[x][y] + 1 || mat[newX][newY] == mat[x][y] - 1)) {
            maxLength = max(maxLength, 1 + findLongestPath(newX, newY));
        }
    }

    // Sonucu önbelleğe al (memoization)
    return dp[x][y] = maxLength;
}

int main() {
    // Kullanıcıdan matris boyutunu al
    cout << "Enter the matrix size (N): ";
    cin >> N;

    // Matrisi ve DP önbelleğini boyutlandır
    mat.resize(N, vector<int>(N));
    dp.resize(N, vector<int>(N, -1)); // Önceden hesaplanmış değerleri -1 ile başlat

    // Kullanıcıdan matrisi al
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    int maxLength = 0; // En uzun ardışık sayı dizisinin uzunluğu

    // **Tüm hücreleri kontrol et** (Her hücreden DFS başlat)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            maxLength = max(maxLength, findLongestPath(i, j));
        }
    }

    // **Sonucu ekrana yazdır**
    cout << "Length of the longest consecutive sequence: " << maxLength << endl;
    return 0;
}
