/*
 14.Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs[strs.size()-1];
        int i=0;
        string str3="";
        while(i<str1.length() && str1[i] == str2[i]){
          if(str1[i]==str2[i])
          {
            str3.push_back(str1[i]);
            i++;
          }
        }
        return str3;
    }
};
*/