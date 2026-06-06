#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int w;
    std::cin >> w;
    if(w < 1 || w > 100) return 1;
    std::cout << (w % 2 == 0 && w >= 4 ? "YES" : "NO") << std::endl;
    return 0;
}