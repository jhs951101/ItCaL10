#include<iostream>
#include<string>

using namespace std;

void subset_r(string prefix, string s) { // �κ������� ����ϴ� �Լ�

	int length = s.length()-1;       // length: ����(s)�� ���� - 1
	if(length >= 0){                 // ����(s)�� ������ ������ ��� ����Լ� ����
		subset_r( prefix + s.substr(0,1) , s.substr(1,length) );  // ( abcde �� a/bcde )
		subset_r( prefix , s.substr(1,length) );                  // ( abcde �� bcde )
	}
	else{                            // ����(s)�� �������� ������ ���� ���
		cout << "[" << prefix << "]" << endl;
	}
}

void subset(string s){  // �κ������� ����ϱ� ���� ����(�غ� �ܰ�)

	subset_r("", s);
}


int main(){

	string s;   // s: ���� ���Ҹ� �Է¹ޱ� ���� ����
	cout << "Enter distinct letters as a string: ";
	cin >> s;   // ���ڿ��� �Է¹���

	subset(s);  // �κ������� ����ϱ� ���� ����

	return 0;
}

