#include <bits/stdc++.h>
using namespace std;

void Minglee()
{

  int N = 1000;
  bool check[N + 1];
  // Kh?i t?o t?t c? các s? [2...N] d?u là s? nguyên t?
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }

  // Thu?t toán sàng nguyên t?
  // N?u m?t s? là s? nguyên t?, thì t?t c? các b?i c?a nó không ph?i s? nguyên t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  // In ra các s? là s? nguyên t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      printf("%d ", i);
    }
  }
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        assert(freopen(argv[1], "r", stdin));
    }
    if (argc > 2) {
        assert(freopen(argv[2], "wb", stdout));
    }
    Minglee();
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
