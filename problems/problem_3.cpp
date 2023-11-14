#include <string>

std::string problemSolution3(float height, char s) {
    std::string result;
    // write your code her
    if (s=='M'){
        if(height < 1.70){
            return "short";
        } if (1.70 <= height < 1.85){
            return "normal";
        } if (height >= 1.85){
            return "Tall";
        }
    } if(s=='F'){
        if(height < 1.60){
            return "short";
        } if (1.60 <= height < 1.75){
            return "normal";
        } if (height >= 1.75){
            return "Tall";
        }


    }
    


    return result;
}

