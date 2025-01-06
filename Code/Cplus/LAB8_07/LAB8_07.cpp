#include <iostream>

using namespace std;

// กำหนดโครงสร้าง struct

struct Student {
	string studentID;
	string name;
	string major;
	double GPA;
};

int main() {
	Student students[10]; // สร้างอาร์เรย์ของ struct ขนาด 5
	// รับข้อมูลนักศึกษา
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

	// แสดงข้อมูลนักศึกษา

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
