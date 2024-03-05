class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0) {
            return "";
        } else if (strs.size() == 1) {
            return strs[0];
        }
        for (int charindex = 0; charindex < 201; charindex++) {

            for (int x = 1; x < strs.size(); x++) {
                if (strs[x].length() == charindex) {
                    return result;
                }

                if (strs[x - 1].length() == charindex) {
                    return result;
                }

                if (strs[x][charindex] != strs[x - 1][charindex]) {
                    return result;
                }
            }

            result = result + strs[0][charindex];
        }
        return "";
    }
};