#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    if (S == 'M') {
        if (height <= 1.70) {
            std::cout << "Short";
        } else if (height >= 1.70 && height < 1.85) {
            std::cout << "Normal";
        } else if (height >= 1.85) {
            std::cout << "Tall";
        }
    } else if (S == 'F') {
        if (height <= 1.60) {
            std::cout << "Short";
        } else if (height >= 1.60 && height < 1.75) {
            std::cout << "Normal";
        } else if (height >= 1.75) {
            std::cout << "Tall";
        }
    }

    return 0;

    // use return to return your result
    // make use of control flow statements
}