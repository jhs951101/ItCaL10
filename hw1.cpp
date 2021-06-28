#include<iostream>
#include<string>

using namespace std;

void subset_r(string prefix, string s) { // 부분집합을 출력하는 함수

	int length = s.length()-1;       // length: 원소(s)의 길이 - 1
	if(length >= 0){                 // 원소(s)가 여전히 존재할 경우 재귀함수 실행
		subset_r( prefix + s.substr(0,1) , s.substr(1,length) );  // ( abcde → a/bcde )
		subset_r( prefix , s.substr(1,length) );                  // ( abcde → bcde )
	}
	else{                            // 원소(s)가 존재하지 않으면 값을 출력
		cout << "[" << prefix << "]" << endl;
	}
}

void subset(string s){  // 부분집합을 출력하기 위해 실행(준비 단계)

	subset_r("", s);
}


int main(){

	string s;   // s: 집합 원소를 입력받기 위한 변수
	cout << "Enter distinct letters as a string: ";
	cin >> s;   // 문자열을 입력받음

	subset(s);  // 부분집합을 출력하기 위해 실행

	return 0;
}

