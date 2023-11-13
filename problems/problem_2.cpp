float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result = (i > j) ? j : k;
    result = (result > k) ? result : k;

    return result;
}