# Last updated: 25/05/2025, 00:10:15
class Solution(object):
    def intToRoman(self, num):
        ones= ["","I","II","III","IV","V","VI","VII","VIII","IX"]
        tens=["","X","XX","XXX","XL","L", "LX","LXX","LXXX","XC"]
        hns= ["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"]
        thousands= ["","M","MM","MMM"]

        return thousands[num//1000] + hns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10]



        