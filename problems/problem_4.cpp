#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int n = 0;
    std::string result;
     if (macAddress[0] == 'F' and macAddress[1] == 'F' ){
         result = "Broadcast";

     }else {
         n = (macAddress[1] - '0');

         if(n > 9) n ++;

         if (n % 2 == 0) {
             result = "Unicast";

         } else {
             result = "Multicast";
            }
         }
     return result;

    // make use of control flow statements
    // return result;
}
