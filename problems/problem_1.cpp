void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost = 13.0;

    if (consumed_water > 30.0) {
        cost += (consumed_water - 30.0) * 0.4;
    }

    if (consumed_water > 50.0) {
        cost += (consumed_water - 50.0) * 0.12;
    }

    if (consumed_water > 60.0) {
        cost += (consumed_water - 60.0) * 1.4;
    }

    if (consumed_water > 70.0) {
        cost += (consumed_water - 70.0) * 1.5;
    }





    return cost;
}
