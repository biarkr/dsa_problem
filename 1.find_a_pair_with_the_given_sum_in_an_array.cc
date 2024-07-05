/* given an unsorted integer array, find a pair wiht the given sum in it.
 * eg. 
 * 	input : 
 * 		nums = [8, 7, 2, 5, 3, 1]
 * 		target = 10
 * 	output: 
 * 		pair found (8, 2)
 * 		
 * 		*/

#include<iostream>
using namespace std;

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

int main() {
	int nums[] = {8, 7, 2, 5, 3, 1};
	int target = 10;
	int n = sizeof(nums);

	find_pair(nums, n, target);
	return 0;
}

