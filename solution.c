int myAtoi(char *s) {
    int i = 0;
    int sign = 1;
    long result = 0;   // use long to detect overflow

    // 1. Skip leading whitespace
    while (s[i] == ' ') {
        i++;
    }

    // 2. Check sign
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // 3. Convert digits
    while (isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        // 4. Handle overflow
        if (sign * result >= INT_MAX)
            return INT_MAX;
        if (sign * result <= INT_MIN)
            return INT_MIN;

        i++;
    }

    return (int)(sign * result);
}

