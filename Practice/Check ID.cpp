#include <iostream>  // 引入標準輸入輸出流庫
#include <string>    // 引入字符串處理庫
#include <cctype>    // 引入字符處理函數庫（如toupper, isdigit等）
using namespace std; // 使用標準命名空間
int getLetterCode(char ch) {//將字母轉換為對應的數字代碼
    switch (ch) {//將字符轉為大寫後進行判斷
		case 'A': return 10;case 'B': return 11;case 'C': return 12;case 'D': return 13;
		case 'E': return 14;case 'F': return 15;case 'G': return 16;case 'H': return 17;
		case 'J': return 18;case 'K': return 19;case 'L': return 20;case 'M': return 21;
		case 'N': return 22;case 'P': return 23;case 'Q': return 24;case 'R': return 25;
		case 'S': return 26;case 'T': return 27;case 'U': return 28;case 'V': return 29;
		case 'X': return 30;case 'Y': return 31;case 'W': return 32;case 'Z': return 33;
		case 'I': return 34;case 'O': return 35;}//A對應10，B對應11~~~
	} 
//逐一驗證ID是否合法
bool validateID(const string& id) {

	//獲取第一個字母的數字代碼
    int code = getLetterCode(id[0]);

    //將字母代碼拆分為十位數和個位數			//25/10=2...5
    int n1 = code / 10;  // 十位數
    int n2 = code % 10;  // 個位數

    //定義權重數組（共11個權重）
    int weights[11] = {1,9,8,7,6,5,4,3,2,1,1};

    //計算加權和（前兩碼的加權值）
    int sum = n1 * weights[0] + n2 * weights[1];

    // 處理後9位數字
    for (int i = 1; i <= 9; i++) {
        // 將字符轉為數字
        int digit = id[i] - '0';
        // 加上當前數字的加權值（權重從weights[2]開始）
        sum += digit * weights[i + 1];
    }

    //檢查總和是否能被10整除
    return (sum % 10) == 0;
}
int main() {
    string ID;  // 引入身份證號碼
	while(cin>>ID){
    if (validateID(ID)) {  // 驗證身份證號碼
        cout<<ID<<"合法"<<endl;}
    else {
        cout<<ID<<"不合法"<<endl;}
	}
    return 0;
}
/* 身分證驗證規則

字母代碼=(字母ASCII碼-'A'的ASCII碼)+10

字母代碼:A=10,B=11,C=12,...,Z=33

總和=(字母代碼的十位數) 
    + (字母代碼的個位數 × 9) 
    + (第1位數字 × 8) 
    + (第2位數字 × 7) 
    + (第3位數字 × 6) 
    + (第4位數字 × 5) 
    + (第5位數字 × 4) 
    + (第6位數字 × 3) 
    + (第7位數字 × 2) 
    + (第8位數字 × 1) 
    + 檢查碼
	
總和 % 10 == 0 */