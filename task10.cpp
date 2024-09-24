#include<iostream>

using namespace std;

main () {

	int nums[15],sum,mul,sub,total;

	for (int i = 0;i < 15;i++) {
		cout << "Enter number " << i+1 << ": ";
		cin >> nums[i];
	}
	
	sum = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
	mul = nums[5] * nums[6] * nums[7] * nums[8] * nums[9];
	sub = nums[10] - nums[11] - nums[12] - nums[13] - nums[14];

	total = sum + mul - sub;

	cout << "The final result is: " << total;
}