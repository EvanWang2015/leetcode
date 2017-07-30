/*
Zigzag conversion

The string is written in a zigzag pattern on a given number of rows
abcd to 2 rows
a  c
 b   d
The printed result will be "acbd"
*/

class Solution {
public:
    string convert(string s, int numRows) {
       
        if(numRows<=1)
            return s;
        vector<string> result(numRows);
        
        int n=s.size();
        int row=0, step=0;
        for(int i=0; i<n; i++)
        {
            if(row==0)
                step=1;
            if(row==numRows-1)
                step=-1;
            result[row].push_back(s[i]);
            row +=step;
        }
        s.clear();
        for(int i=0; i<numRows; i++)
        {
            s+=result[i];
        }
        return s;
    }
};