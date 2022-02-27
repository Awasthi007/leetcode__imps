2186. Minimum Number of Steps to Make Two Strings Anagram II
User Accepted:9153
User Tried:9932
Total Accepted:9389
Total Submissions:14323
Difficulty:Medium
You are given two strings s and t. In one step, you can append any character to either s or t.

Return the minimum number of steps to make s and t anagrams of each other.

An anagram of a string is a string that contains the same characters with a different (or the same) ordering.

 

Example 1:

Input: s = "leetcode", t = "coats"
Output: 7
Explanation: 
- In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcodeas".
- In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coatsleede".
"leetcodeas" and "coatsleede" are now anagrams of each other.
We used a total of 2 + 5 = 7 steps.
It can be shown that there is no way to make them anagrams of each other with less than 7 steps.
Example 2:

Input: s = "night", t = "thing"
Output: 0
Explanation: The given strings are already anagrams of each other. Thus, we do not need any further steps.
 

Constraints:

1 <= s.length, t.length <= 2 * 105
s and t consist of lowercase English letters.
  
  
  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
  
  class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        unordered_map<char, int> m;
        
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        n = t.length();
        for(int i=0; i<n; i++)
        {
            m[t[i]]--;
        }
        
        for(auto it: m)
        {
            count += abs(it.second);
        }
        return count;
    }
};
