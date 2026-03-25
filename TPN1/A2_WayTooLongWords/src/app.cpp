#include<bits/stdc++.h>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
int main() {
    FIN;
    int quantity;
    std::cin >> quantity;
    std::string s[quantity];
    for(int i = 0; i < quantity; i++)
        std::cin >> s[i];
    for(int i = 0; i < quantity; i++) {
        int l = s[i].length();
        if (l > 10) {
            std::cout << s[i][0] << l - 2 << s[i][l - 1] << "\n";
        } else {
            std::cout << s[i] << "\n";
        }
    }
    return 0;
}