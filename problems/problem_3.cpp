#include <string>

std::string problemSolution3(float height, char s) {
    std::string result;
    // write your code her
    if (s=="Male"){
        if(height < 1.70){
            result = "short";
        } if (1.70 <= height < 1.85){
            result = "normal";
        } if (height >= 1.85){
            result = "Tall";
        }
    } if(s=="Female"){
        if(height < 1.60){
            result = "short";
        } if (1.60 <= height < 1.75){
            result = "normal";
        } if (height >= 1.75){
            result = "Tall";
        }


    }
    


    return result;
}

