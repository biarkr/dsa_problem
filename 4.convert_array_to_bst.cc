#include<iostream>
#include<vector>
struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};
TreeNode* buildBST(std::vector <int>& nums, int start, int end) {
	if(start>end) 
		return 0;
	int mid=start+(end-start)/2;
	TreeNode* newNode = new TreeNode(nums[mid]);
	newNode->left = buildBST(nums, start, mid-1);
	newNode->right = buildBST(nums, mid+1, end);
	return newNode;
}
int main() {
	std::vector <int> nums {-10,-3,0,5,9};
	int n = nums.size();
	if(nums.empty())
		return 0;
	buildBST(nums, 0, n-1);
	return 0;
}

