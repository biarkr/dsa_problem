/*
 * given an integer array, find a pair with the max product in it. 
 *
 * each input can have multiple sol. The output should match with either one of them.
 *
 * 	input : [-10, -3, 5, 6, -2]
 * 	output: (-10, -3) or (-3, -10) or (5, 6) or (6, 5)
 *
 * 	input : [-4, 3, 2, 7, -5]
 * 	output: (3, 7) or (7, 3) 
 *
 *
 * if no pair exists, the sol should return the pair (-1, -1).
 * 	
 * 	input : [1]
 * 	output: (-1, -1)
 *
 */
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
	int nums[]={-10, -3, 5, 6, -2};
	int n=sizeof(nums)/sizeof(nums[0]);
	int product=INT_MIN;
	int temp;
	if(n < 2) {
		cout << "(-1, -1)" << endl;
		return -1;
	}
	/*
	 * this brute force function take O(n^2).
	 *
	 *
	else {
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(product <= (temp = nums[i]*nums[j])) {
					product = temp;
					cout << "(" << nums[i]<<", " << nums[j] << ") ";
				}
			}
		}
		cout << endl;
		return 0;
	}
	*
	*/


	/*
	 * how ever this approach bellow uses sort function which takes O(nlogn)
	 * and rest are done in O(1) 
	 */

	else {
		sort(nums, nums+n);
		if((nums[0] * nums[1]) == (nums[n-2] * nums[n-1])) {
			cout << "(" << nums[0] << ", " << nums[1] << ") " << "(" << nums[n-2] << ", " << nums[n-1] << ")" << endl;
		}
		else if((nums[0] * nums[1]) <= (nums[n-2] * nums[n-1])) {
			cout <<  "(" << nums[n-2] << ", " << nums[n-1] << ")" << endl;
		}
		else {
			cout <<  "(" << nums[0] << ", " << nums[1] << ")" << endl;
		}
	}
	return 0;

}




