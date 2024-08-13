#include<iostream>
#include<cmath>
using namespace std;
int find_closest(int nums[], int n) {
	int closest=nums[0];
	for(int i=0; i<n; i++) {
		if(abs(closest) > abs(nums[i]))
			closest=nums[i];
		if(abs(closest) == abs(nums[i]) && closest <= nums[i]) 
			closest=nums[i];
	}
	cout << "The closest to zero is : "<< closest << endl;
	return 0;
}
int main() {
	int nums1[]= {-4,-2,1,4,8};
	int nums2[]={2,-1,1};
	int n=sizeof(nums1)/sizeof(nums1[0]);
	int m=sizeof(nums2)/sizeof(nums2[0]);
	find_closest(nums1, n);
	find_closest(nums2, n);

	return 0;
}
