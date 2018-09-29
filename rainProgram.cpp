#include <iostream>
using namespace std;

int main() {
	int arr[10];
	cout << "Entr the 10 rain falls " << endl;

	int i = 0;
	while(i < 10) {
		cin >> arr[i];
		if(arr[i] < 0){ 
			cout << "Negative value not allowed" << endl;
		continue;
		}
		i++;
	}

	i = 0;
	int total = 0;
	int min = arr[0], max = 0;
	while(i < 10) {
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
		total = total + arr[i];
		i++;
	}
	int avg = total / 10;

	cout << "Total Rainfall = " << total << endl;
	cout << "Average Rainfall = " << avg << endl;
	cout << "Miniumum Rainfall = " << min << endl;
	cout << "Maximum Rainfall = " << max << endl;

	return 0;

}
