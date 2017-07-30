/*
Reverse integer
Example: x= 123 , return 321
Note: return 0 when the reversed integer overflows
*/

class Solution{
	
public: 
	int reverse(int x)
	{
		long int res=0;
		while(x)
		{
			res = res*10 + x%10;
			x =x/10;
		}
		return (res<INT_MIN || res>INT_MAX) ? 0 : res;
	}
}

//using stringstream
class Solution {
public:
    int reverse(int x) {
        int sign = x>0 ? 1:-1;
        //x= abs(x);
        string xc = to_string(x);
        int n = xc.size();
        for(int i=0; i<n/2; i++)
            swap(xc[i], xc[n-i-1]);
                
        if(stol(xc)>INT_MAX)
            return 0;
        else
            return stoi(xc)*sign;
        
        
    }
};