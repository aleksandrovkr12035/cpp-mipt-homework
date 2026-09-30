int main() {
    int n, i, sign;
    double sum = 0.0, pi;
    scanf("%i", &n);
    
    sign = 1;
    i = 1;
    while (i <= n) {
        sum = sum + sign * (1.0 / (2 * i - 1));
        sign = -sign;
        i = i + 1;
    }
    pi = 4 * sum;
    printf("%f\n", pi);
    return 0;
}