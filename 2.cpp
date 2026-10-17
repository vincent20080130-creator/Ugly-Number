//日期:2026/10/16
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number:";
	cin >> n;
	int a[50];
	int i = 0;
	while (n >= 1) {
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	cout << "Output:";
	for (int j = i - 1; j >= 0 ; j--) {
		cout << a[j] << "  ";
	}
	system("pause");
	return(0);
}
