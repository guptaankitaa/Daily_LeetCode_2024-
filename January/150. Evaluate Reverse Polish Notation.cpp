class Solution {
public:
    int str2int(const string& s) {
        int ret = 0;
        bool neg = false;

        for (const char& ch: s) {
            if (ch == '-')
                neg = true;
            else {
                ret *= 10;
                ret += ch - '0';
            }
        }

        if (neg) ret *= -1;

        return ret;
    }

    int evalRPN(vector<string>& tokens) {
        deque<int> s;

        for (const string& token: tokens) {
            if (token == "+") {
                int a = s.back();

                s.pop_back();
                s.back() += a;
            } else if (token == "-") {
                int a = s.back();

                s.pop_back();
                s.back() -= a;
            } else if (token == "*") {
                int a = s.back();

                s.pop_back();
                s.back() *= a;
            } else if (token == "/") {
                int a = s.back();

                s.pop_back();
                s.back() /= a;
            } else 
                s.push_back(str2int(token));
        }

        return s.back();
    }
};
