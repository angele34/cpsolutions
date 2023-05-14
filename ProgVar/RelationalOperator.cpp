#include <iostream>
int main () {
/* First line of the input file is an integer t which denotes how many sets of inputs are there.
Each of the next t lines contain two integers a and b
Output t lines, one for each input. For each input, print '<' if a < b, '>' if a > b and '=' if a = b. */ 
    int t, a, b;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> a >> b;
        if (a > b) {
            std::cout << ">" << std::endl;
        } else if (a < b) {
            std::cout << "<" << std::endl;
        } else {
            std::cout << "=" << std::endl;
        }
    }
    return 0;
}