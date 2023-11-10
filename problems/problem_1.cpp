void problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    switch (consumed_water) {
        case <= 30:
            cost = 13 + consumed_water * 0.4;
            break;
        case <=50:
            cost = 13 + 30 * 0.4 + (consumed_water - 30) * 0.12;
            break;
        case <= 60:
            cost = 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
            break;
        default:
            cost = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5;
            break;
    }

    return cost;
}
