#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void negativenumber() {
	int num;
	while (1)
	{
		cout << "請輸入數字:" << endl;
		cin >> num;
		if (num==0) { break; }
		cout << "此數的負數為:" << -num << endl;
	}
}
void primenumber() {
	int n;
	while (cin >> n)
	{
		if (n== 0) { break; }
		bool flag = true;
		for (int j = 2; j <= sqrt(n); j++)
		{
			if (n % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}
void maxprime() {
	int n;
	while(cin>>n){
		if (n == 0) { break; }
		for (int i = n - 1; i >= 2; i--) {
			bool flag = true;
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
					flag = false;
					break;
			}
			if (flag)
			{
				cout << i << endl;
				break;
			}
		}
	}
}
void subtraction() {
	while (1) {
		int a, b;
		cout << "請輸入兩個數字:" << endl;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << "兩數相減的結果為:" << a - b << endl;
	}
}
void square() {
	double f;
	while (true) {
		cout << "請輸入小數:";
		cin >> f;
		if (f == 0) { break; }
		cout << "平方:" << fixed << setprecision(6) << f * f << endl;  // 限制小數點後 6 位
	}
}
void rectanglearea() {
	int l, w;
	while (true)
	{
		cout << "長L:";
		cin >> l;
		if (l == 0) { break; }
		cout << "寬w:";
		cin >> w;
		cout << "面積A=" << l * w << endl;
	}
}
void money() {
	int n, r = 30;
	while (true)
	{
		cout << "美金:";
		cin >> n;
		if (n == 0) { break; }
		cout << "=" << n * r << "台幣" << endl;
	}
}
void temperature() {
	double f;//華氏
	while (cin >> f)
	{
		if (f == 0) { break; }
		double c = (f - 32) * 5 / 9;//攝氏
		cout << fixed << setprecision(6) << c << endl;
	}
}
void fibonacci() {
	const int MOD = 1000000007;
	int n;
	while (cin >> n) {
		if (n == 0) { break; }
		int a = 0, b = 1;
		for (int i = 0; i < n; i++) {
			int temp = (a + b) % MOD;
			a = b;
			b = temp;
		}
		cout << b << endl;
	}
}
void circlearea() {
	int r;
	while (true)
	{
		cout << "輸入半徑:";
		cin >> r;
		if (r == 0) { break; }
		cout << "面積A=" << r * r * 3.14 << endl;
	}
}
void modulus() {
	int a, b;
	while (true)
	{
		cout << "請輸入兩個數字:" << endl;
		cin >> a >> b;
		if (a == 0 && b == 0) { break; }
		cout << "兩數相除的餘數為:" << a % b << endl;
	}
}
void ropelength() {
	double n;
	int d;
	while (cin >> n) {
		if (n == 0) { break; }
		for (d = 0; n > 3; d++) {
			if (n < 3) {
				break;
			}
			n /= 2;
		}
		cout << d << endl;
	}
}
int main() {
	int choice;
	while (1) {
		cout << "==============" << endl;
		cout << "1. 負數" << endl;
		cout << "2. 質數" << endl;
		cout << "3. 最大質數" << endl;
		cout << "4. 減法" << endl;
		cout << "5. 平方" << endl;
		cout << "6. 長方形面積" << endl;
		cout << "7. 美金轉台幣" << endl;
		cout << "8. 攝氏轉華氏" << endl;
		cout << "9. 費波那契數列" << endl;
		cout << "10. 圓面積" << endl;
		cout << "11. 餘數" << endl;
		cout << "12. 繩子長度" << endl;
		cout << "==============" << endl;
		cout << "0. 離開" << endl;
		cout << "請選擇:";
		cin >> choice;
		switch (choice) {
		case 1:
			negativenumber();
			break;
		case 2:
			primenumber();
			break;
		case 3:
			maxprime();
			break;
		case 4:
			subtraction();
			break;
		case 5:
			square();
			break;
		case 6:
			rectanglearea();
			break;
		case 7:
			money();
			break;
		case 8:
			temperature();
			break;
		case 9:
			fibonacci();
			break;
		case 10:
			circlearea();
			break;
		case 11:
			modulus();
			break;
		case 12:
			ropelength();
			break;
		case 0:
			break;
		}
	}
	return 0;
}