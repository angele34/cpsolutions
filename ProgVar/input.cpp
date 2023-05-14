#include <iostream>
int main() {
    int n, k;
    int count = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++){
        int t;
        std::cin >> t;
        if (t % k == 0){
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}