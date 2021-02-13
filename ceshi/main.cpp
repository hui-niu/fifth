#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//习题3. 让用户输入年份和月份，然后输出这个月有多少天。
int main(void){
	bool flag; //闰年标志
	int year; //年份
	int month; //月份
	int days; //天数
	cout << "请输入年份" << endl;
	cin >> year;
	cout << "请输入月份" << endl;
	cin >> month;

	if(year % 4 == 0){
		flag = true;
	}else{
		flag = false;
	}

	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		days = flag ? 29:28;
		break;
	default:
		cout << "输入不合法" << endl;
		days = 0;
		break;
	}

	cout << year << "年" << month << "月有:" << days << "天" << endl; 

	system("pause");
	return 0;
}