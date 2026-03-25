#include<bits/stdc++.h>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt long long
int main() {
    FIN;
    dt m, n, a;
    std::cin >> m >> n >> a;
    // std::cout << "m: " << m << ", n: " << n << ", a: " << a << std::endl;
    if(m%a != 0)
        m = m + (a - (m % a));
    if(n%a != 0)
        n = n + (a - (n % a));
    // std::cout << "m: " << m << ", n: " << n << ", a: " << a << std::endl;
    // std::cout << "Total: " << (m*n)/(a*a) << std::endl;
    std::cout << (m*n)/(a*a) << "\n";
    return 0;
}