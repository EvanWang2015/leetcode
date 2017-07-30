/*
Integer to Roman
Given an integer, convert it to a roman numeral
Input is guaranteed to be within the range of 3999.
*/

class Solution {
public:
    string intToRoman(int num) {
        string m[] = {"", "M", "MM", "MMM"};
        string c[] = {"", "C", "CC", "CCC", "CD", "D","DC","DCC", "DCCC", "CM"};
        string x[] = {"", "X", "XX", "XXX","XL","L","LX","LXX","LXXX","XC"};
        string i[] ={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        
        string result = m[num/1000]+c[(num%1000)/100]+x[num%100/10]+i[num%10];
        
        return result;
        
    }
};