#include <string>

std::string problemSolution3(float height, char s) {
    std::string result;
    // write your code her
    if (s == 'M') {
        if (height < 1.70) {
            return "Short";
        } else if (height < 1.85) {
            return "Normal";
        } else {
            return "Tall";
        }
    } else if (s == 'F') {
        if (height < 1.60) {
            return "Short";
        } else if (height < 1.75) {
            return "Normal";
        } else {
            return "Tall";
        }
    }
    return "Invalid sex";

    


    return result;
}


