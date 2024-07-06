/* 
 * given a binary array, in-place sort it in linear time and constant space. the output should contain all zeros followed by ones.
 * 	input : [1, 0, 1, 0, 1, 0, 0, 1]
 * 	output: [0, 0, 0, 0, 1, 1, 1, 1]
 *
 * 	input : [1,1]
 * 	output: [1,1]
 *
 */

#include<iostream>
using namespace std;

int main () {
	int nums[]={1, 0, 1, 0, 1, 0, 0, 1};
	int i=0, j=sizeof(nums)/sizeof(nums[0]) - 1;

	while(i < j) {
		if (nums[i] == 0) {
			if (nums[j] == 0) {
				i++;
			}
			else {
				++i;
				--j;
			}
		}
		else {
			if(nums[j] == 0) {
				swap(nums[i], nums[j]);
				++i; --j;
			}
			else {
				--j;
			}
		}
	}
	cout << "Output is : "; 
	for(int k=0; k<(sizeof(nums)/sizeof(nums[0])); k++) {
		cout << nums[k] <<" " ;
	}
	cout << endl;
	return 0;
}


