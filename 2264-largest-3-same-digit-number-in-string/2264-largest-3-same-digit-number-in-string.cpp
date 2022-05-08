class Solution {
public:
    string largestGoodInteger(string num) {
        char ans = 0;
        for(int i = 1; i <= num.size()-2; i++){
            if (num[i] == num[i - 1] && num[i] == num[i + 1])
            ans = max(ans, num[i]);
        }
        if (ans == 0)
            return "";
        else
            return string(3, ans);
    }
};