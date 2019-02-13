#include <bits/stdc++.h>
using namespace std;

void snt1()
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

// tối ưu thuật toán. 
void snt2(int x)
{
    ip[1] = 1;
    int px = sqrt(x);
    for (int i=2; i<=px; i++)
        if (ip[i] == 0)
        {
            int j = i*i;
            ip[j] = 1;
            while (j <= x)
            {
                j = j + i;
                ip[j] = 1;
            }
        }
    for (int i=1; i<=x; i++)
        if (ip[i] == 0)
        {
            cnt++;
            pr[cnt] = i;
        }
}
void snt3(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 
int main(int argc, char* argv[]) {
    if (argc > 1) {
        assert(freopen(argv[1], "r", stdin));
    }
    if (argc > 2) {
        assert(freopen(argv[2], "wb", stdout));
    }
    snt1();
    cout <<endl;
    snt2();
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
