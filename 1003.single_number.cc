/* 136. single number 
 * give a non-emepty array of integers nums, every elements apeeras twice exept for one. Find that single one. 
 * eg : 
 * 	input : nums = [2,2,1]
 * 	output: 1
 *
 * eg : 
 * 	input : nums = [4, 1, 2, 1, 2]
 * 	output: 4
 *
 */

#include<iostream>
#include<algorithm>
using namespace std;

/*v.1 brute force method, the time complexcity is O(n^2) 
 
int singleNums(int nums[], int n) {
	for(int i=0; i<n; i++) {
		int count = 0;
		for(int j=0; j<n; j++) {
			if(nums[i]==nums[j]) 
				count++;
		}
		if(count != 2) {
			cout << nums[i] << endl;
			return 0;
		}
	}
	return 1;
}
v1. ends here */ 

int singleNums(int nums[], int n) {
	sort(nums, nums + n);
	for(int i = 0; i<n ; i++) {
		cout << nums[i] << " " ;
	}
	cout << endl;
	for(int i=0; i < n; i+=2) {
		int count = 1; 
		if(nums[i] == nums[i+1])
			count++;
		if(count != 2) {
			cout << nums[i] << endl; 
			return 0;
		}
		if(i == n-2) {
			cout << nums[n-1] << endl;
			return 0; 
		}
	}
	return 1;
}

int main() {
	int nums[] = {4, 1, 2, 1, 2};
	int n = sizeof(nums)/sizeof(nums[0]);
	singleNums(nums, n);
	return 0;
}



