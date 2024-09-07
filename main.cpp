#include<iostream>

using namespace std;

void sort(int a[], int n){
	for (int i=0; i < n-1; ++i){
		for (int j = 0; j < n-1-i; ++j){
			if (a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int main(){
	int arr[] = {12,4,6,2,3,6,45,74,24,12};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr,size);
	return 0;
}
