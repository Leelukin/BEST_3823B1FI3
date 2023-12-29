bool compare_double(double x, double y) {
    if (x >= y)
        return ((x - y) <= 1e-4) ? true : false;
    else
        return ((y - x) <= 1e-4) ? true : false;
}

int get_nearest_int(double x) {
    return x - (int)x > 0.5 ? (int)x + 1: (int)x;
}

double get_fractional(double x) {
    return x >- 0 ? x - (int)x : x - ((int)x - 1);
}