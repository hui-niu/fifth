#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//ϰ��3. ���û�������ݺ��·ݣ�Ȼ�����������ж����졣
int main(void){
	bool flag; //�����־
	int year; //���
	int month; //�·�
	int days; //����
	cout << "���������" << endl;
	cin >> year;
	cout << "�������·�" << endl;
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
		cout << "���벻�Ϸ�" << endl;
		days = 0;
		break;
	}

	cout << year << "��" << month << "����:" << days << "��" << endl; 

	system("pause");
	return 0;
}