#include<iostream>
#include<vector>
int main() {
	std::vector<int> nums;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	nums.push_back(40);
	nums.push_back(50);
	int left = 0;
	int right = nums.size() - 1;
	while (left < right) {
		int temp = nums[left];
		nums[left] = nums[right];
		nums[right] = temp;
		left++;
		right--;
	}
	for (int i = 0; i < nums.size(); i++) {
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";
	return 0;
}