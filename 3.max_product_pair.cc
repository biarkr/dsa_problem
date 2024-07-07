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
using namespace std;

int main() {
	int nums[]={-10, -3, 5, 6, -2};
	int n=sizeof(nums)/sizeof(nums[0]);
	int sum=INT_MIN;
	int temp;
	if(n < 2) {
		cout << "(-1, -1)" << endl;
		return -1;
	}
	else {
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(sum <= (temp = nums[i]*nums[j])) {
					sum = temp;
					cout << "(" << nums[i]<<", " << nums[j] << ") ";
				}
			}
		}
		cout << endl;
		return 0;
	}
}


