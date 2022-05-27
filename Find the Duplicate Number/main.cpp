/*By::Cebastian Santiago
* Leetcode 287
*/
#include<iostream>
#include<vector>
#include<map>

int findDuplicate(std::vector<int>& nums) {
	//variables 
	std::map<int, int> Hash;

	//loop through the vector
	for (size_t i = 0; i < nums.size(); i++){
		//check to see if we've seen this number
		if (Hash.find(nums[i]) == Hash.end()) {
			//add this to the hash map 
			Hash.insert({ nums[i],1 });
		}

		else {
			return nums[i];
		}

	}
	return 0;
}




int main(int argc, char argv[]) {
	std::vector<int> num = { 3,1,3,4,2 };

	std::cout << findDuplicate(num) << std::endl;

	return 0;
}