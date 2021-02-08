#include <iostream>
using namespace std;
#include "student.h"
template<typename T>
void selectionSort(T arr[],int n) {
	for(int i=0; i<n; i++) {
		//Ѱ��[i,n)�������Сֵ
		int minIndex = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j]<arr[minIndex]) {
				minIndex = j;
			}
			swap(arr[i],arr[minIndex]);
		}

	}
}
int main() {
	//int ��������
	int a[10]= {10,9,8,7,6,5,4,3,2,1};
	selectionSort(a,10);
	for(int i=0; i<10; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;

	//double ��������
	double b[10]= {10.3,9.6,3.9,7.9,6,5.8,4.9,3.5,2.4,1.3};
	selectionSort(b,10);
	for(int i=0; i<10; i++) {
		cout<<b[i]<<" ";
	}
	cout<<endl;

	//string ��������
	string c[4]= {"c","v","d","e"};
	selectionSort(c,4);
	for(int i=0;i<4;i++) {
		cout<<c[i]<<" ";
	}
	cout<<endl;
	
	//ѧ������
	Student d[4] = {{"D",90}, {"B",100},{"C",95},{"A",95}};
	selectionSort(d,4);
	for(int i=0;i<4;i++) {
		cout<<d[i]<<" ";
	} 
	return 0;
}
