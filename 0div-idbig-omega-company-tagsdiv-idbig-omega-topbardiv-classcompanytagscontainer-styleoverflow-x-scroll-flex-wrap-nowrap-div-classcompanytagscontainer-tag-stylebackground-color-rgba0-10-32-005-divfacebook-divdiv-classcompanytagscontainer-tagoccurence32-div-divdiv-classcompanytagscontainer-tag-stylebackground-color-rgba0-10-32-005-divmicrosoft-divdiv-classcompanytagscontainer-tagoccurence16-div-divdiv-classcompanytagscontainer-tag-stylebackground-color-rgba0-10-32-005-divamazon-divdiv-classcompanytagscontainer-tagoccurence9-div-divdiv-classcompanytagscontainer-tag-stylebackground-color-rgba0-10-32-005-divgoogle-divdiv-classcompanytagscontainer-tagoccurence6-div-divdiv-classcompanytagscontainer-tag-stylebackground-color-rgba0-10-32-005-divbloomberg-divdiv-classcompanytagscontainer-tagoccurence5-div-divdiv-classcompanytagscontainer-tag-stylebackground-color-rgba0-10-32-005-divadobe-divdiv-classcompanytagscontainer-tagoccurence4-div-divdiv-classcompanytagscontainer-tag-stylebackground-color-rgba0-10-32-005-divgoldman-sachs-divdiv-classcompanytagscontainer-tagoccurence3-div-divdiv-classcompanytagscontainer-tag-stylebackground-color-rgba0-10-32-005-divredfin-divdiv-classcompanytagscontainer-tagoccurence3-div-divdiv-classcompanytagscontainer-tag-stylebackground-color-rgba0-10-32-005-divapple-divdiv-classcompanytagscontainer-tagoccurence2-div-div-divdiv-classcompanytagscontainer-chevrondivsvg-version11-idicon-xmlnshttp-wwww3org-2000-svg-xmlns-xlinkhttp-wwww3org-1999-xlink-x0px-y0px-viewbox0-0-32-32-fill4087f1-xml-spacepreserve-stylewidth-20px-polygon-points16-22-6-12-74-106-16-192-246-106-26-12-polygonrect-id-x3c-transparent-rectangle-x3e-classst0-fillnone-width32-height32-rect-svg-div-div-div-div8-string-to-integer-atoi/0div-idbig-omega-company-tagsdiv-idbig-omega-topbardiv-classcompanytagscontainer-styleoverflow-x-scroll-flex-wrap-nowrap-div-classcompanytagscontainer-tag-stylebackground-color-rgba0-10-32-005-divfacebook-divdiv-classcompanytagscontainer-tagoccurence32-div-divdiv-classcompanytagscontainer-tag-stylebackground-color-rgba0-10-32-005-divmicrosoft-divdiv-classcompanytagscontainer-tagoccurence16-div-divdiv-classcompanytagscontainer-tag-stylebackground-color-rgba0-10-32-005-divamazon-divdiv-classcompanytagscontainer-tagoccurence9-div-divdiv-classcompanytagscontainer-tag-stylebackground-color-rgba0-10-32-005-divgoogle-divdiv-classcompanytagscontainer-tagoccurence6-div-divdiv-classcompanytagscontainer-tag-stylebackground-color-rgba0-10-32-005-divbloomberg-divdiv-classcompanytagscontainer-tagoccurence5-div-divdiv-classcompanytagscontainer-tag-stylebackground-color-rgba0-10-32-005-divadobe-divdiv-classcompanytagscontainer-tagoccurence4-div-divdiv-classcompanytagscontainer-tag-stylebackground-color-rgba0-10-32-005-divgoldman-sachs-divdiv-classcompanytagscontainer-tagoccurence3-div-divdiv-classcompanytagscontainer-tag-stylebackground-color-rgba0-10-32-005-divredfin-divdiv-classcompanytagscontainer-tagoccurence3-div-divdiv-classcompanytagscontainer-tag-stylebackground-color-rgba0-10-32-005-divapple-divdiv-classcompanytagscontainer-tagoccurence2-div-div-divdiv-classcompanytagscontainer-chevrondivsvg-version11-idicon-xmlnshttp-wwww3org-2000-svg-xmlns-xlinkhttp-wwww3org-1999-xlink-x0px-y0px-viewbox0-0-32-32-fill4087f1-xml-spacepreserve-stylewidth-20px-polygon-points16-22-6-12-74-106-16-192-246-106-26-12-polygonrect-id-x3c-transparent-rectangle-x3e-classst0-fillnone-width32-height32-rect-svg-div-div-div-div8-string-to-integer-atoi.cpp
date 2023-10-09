class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int sign = 1;  // 1 represents positive and -1 represents negative
        long result = 0;

        // 1. Skip all leading white-spaces
        while (i < str.size() && str[i] == ' ') {
            i++;
        }

        // 2. Check for a sign if present
        if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
            sign = (str[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert string to integer value
        while (i < str.size() && isdigit(str[i])) {
            result = result * 10 + (str[i] - '0');
            
            // 4. Handle overflow
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && result * sign < INT_MIN) return INT_MIN;
            
            i++;
        }

        // 5. Apply the sign to the result and return
        return sign * result;
    }
};
