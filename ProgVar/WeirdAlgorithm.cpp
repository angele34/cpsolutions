#include <iostream>
#include <vector>

int main() {
    long long int n;
    std::cin >> n;
    std::vector<long long int> algorithm;
    algorithm.push_back(n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        algorithm.push_back(n);
    }
     for (int z = 0; z < algorithm.size(); z++) {
        std::cout << algorithm[z] << " ";
    }
    std::cout << std::endl;
    return 0;
}