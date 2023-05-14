#include <iostream>

int main() {
    float R, G;
    std::cin >> R >> G;
    float avg = G - R;
    float new_rating = avg + G;
    std::cout << new_rating << std::endl;
    return 0;
}