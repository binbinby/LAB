#include <iostream>

using namespace std;

// ��˹��ç���ҧ struct

struct Student {
	string studentID;
	string name;
	string major;
	double GPA;
};

int main() {
	Student students[10]; // ���ҧ��������ͧ struct ��Ҵ 5
	// �Ѻ�����Źѡ�֡��
	for (int i = 0; i < 10; i++) {
		cout << "Enter information for student " << i + 1 << ":" << endl;
		cout << "Student ID: ";
		cin >> students[i].studentID;
		cout << "Name: ";
		cin >> students[i].name;
		cout << "Major: ";
		cin >> students[i].major;
		cout << "GPA: ";
		cin >> students[i].GPA;
		cout << endl;
	}

	// �ʴ������Źѡ�֡��

	cout << "Student Information:" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Student " << i + 1 << ":" << endl;
		cout << " Student ID: " << students[i].studentID << endl;
		cout << " Name: " << students[i].name << endl;
		cout << " Major: " << students[i].major << endl;
		cout << " GPA: " << students[i].GPA << endl;
		cout << endl;

	}

	return 0;

}
