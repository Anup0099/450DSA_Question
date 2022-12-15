class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        num = str(num)
        for i in range(len(num)):
            if num[i] == '6':
                return int(num[:i] + '9' + num[i+1:])
        return int(num)