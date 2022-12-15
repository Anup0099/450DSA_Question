# longest common substring

def lcs(s1, s2):
    if len(s1) == 0 or len(s2) == 0:
        return 0
    if s1[-1] == s2[-1]:
        return 1 + lcs(s1[:-1], s2[:-1])
    else:
        return max(lcs(s1[:-1], s2), lcs(s1, s2[:-1]))


class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        return lcs(text1, text2)