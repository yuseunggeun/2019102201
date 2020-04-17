#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number: ";
	cin >>num;
	for(int i = 1;i <= 9;i++){ //등호 오류 수정
		cout << num<<" * "<<i<<" = "<<num*i
	}


	return 0;
}