class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int lastnum = 0;
        for (int x = s.length() - 1; x > -1; x--) {
            int curnum = romToInt(s[x]);
            if (curnum > lastnum || curnum == lastnum) {
                result = result + curnum;
            } else {
                result = result - curnum;
            }
            lastnum = curnum;
        }
        return result;
    }

    int romToInt(char s) {
        switch (s) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
        }
    }
};