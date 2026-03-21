#include<bits/stdc++.h>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
int main() {
    FIN;
    std::string s;
    std::cin >> s;
    int l = s.length();
    if (l > 10) {
        std::cout << s[0] << s.length() - 2 << s[l - 1] << "\n";
    } else {
        std::cout << s << "\n";
    }
    return 0;
}