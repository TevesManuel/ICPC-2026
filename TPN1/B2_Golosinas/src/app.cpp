#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt long long

int main() {
    FIN;
    int a, b, c;
    std::cin >> a >> b >> c; // B > A
    if( ( b - a ) % c == 0 ) std::cout << "S" << "\n";
    else std::cout << "N" << "\n";
    return 0;
}