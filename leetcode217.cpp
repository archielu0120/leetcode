#include<iostreram>
#include<vector>
#include<algorithm>



using namespace std;




bool containsDuplicate(vector<int>& nums) 
{
	int len = nums.size();
	sort(nums.begin(),nums.begin() + len);
	for(int i = 0; i<len-1; i++){
		if(nums[i] == nums[i+1]){
			return true;
		}
	}

	return false;
}        














int main(void){
	return 0;
}