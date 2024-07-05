/* given an unsorted integer array, find a pair wiht the given sum in it.
 * eg. 
 * 	input : 
 * 		nums = [8, 7, 2, 5, 3, 1]
 * 		target = 10
 * 	output: 
 * 		pair found (8, 2)
 * 		
 * 		*/
#include<algorithm>
#include<iostream>
using namespace std;

/* 
// brute force method , runing time is n^2
//
int find_pair( int nums[], int n, int target) {
	
	for(int i=0; i < n-1; i++) {
		for(int j=i+1; j < n; j++) {
			if(target == (nums[i]+nums[j])) {
					cout << "Pair Found : ( " << nums[i] << ", " << nums[j] << " )" << endl;
					return 0;
					}
				}
			}
			cout << "Pari Not Found " << endl;
			return 0;
}

*/

int find_pair(int nums[], int n, int target) {
	sort(nums, nums+n);
	int i=0; int j = n-1;
	while(i < j) {
		if(target == (nums[i]+nums[j])) {
			cout << "Pair Found : ( " << nums[i] <<", " << nums[j] << " )" << endl;
			return 0;
		}
		if (target > (nums[i]+nums[j]))
			i++;
		if (target < (nums[i]+nums[j]))
			j--;
	}
	cout << "Pair Not Found." << endl;
	return 0;
}

int main() {
	int nums[] = {8, 7, 2, 5, 3, 1};
	int target = 10;
	int n = sizeof(nums)/sizeof(nums[0]);

	find_pair(nums, n, target);
	return 0;
}

