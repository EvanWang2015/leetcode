/*
Container with most water

Question: 
Given n non-negative integers a1, a2, ..., an where each represents a point at coordinate(i, a_i). n vertical lines are drawn such that the 
two endpoints of line i is at(i, ai) and (i,0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
*/

int maxArea(vector<int>& height)
{
	int n = height.size();
	int maxSize = INT_MIN;
	int i=0, j=n-1;
	while(i<j)
	{
		maxSize = max(maxSize, (j-i)*min(height[i], height[j])));
		if(height[i]<height[j])
			i++;
		else
			j--;
	}
	
	return maxSize;

}