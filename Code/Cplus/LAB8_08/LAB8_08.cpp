#include <iostream>

using namespace std;

// กำหนดโครงสร้าง struct
struct Address {
	int houseNumber;
	int villageNumber;
	string alley;
	string road;
	string province;
	string district;
	string subDistrict;
	string postalCode;
};

struct Student {
	string idCard;
	string title;
	string fristname;
	string lastname;
	int mobile;
	int homePhone;
	string email;
	string grade;
	string school;
	Address address;
};
; // สร้างอาร์เรย์ของ struct ขนาด 5
struct Guardian {
	string title;
	string fristname;
	string lastname;
	int mobile;
	int homePhone;
	string relation;
};
struct StudentInfo {
	Student student;       // ข้อมูลนักเรียน
	Guardian guardian;     // ข้อมูลผู้ปกครอง
};


int main() {
	
	Address address[1];
	Student students[1];
	Guardian guardian[1];
	// รับข้อมูลนักศึกษา
	for (int i = 0; i < 1; i++) {
		cout << "Enter information for student " << i + 1 << ":" << endl;
		cout << "Student ID: ";
		cin >> students[i].idCard;
		cout << "Title: ";
		cin >> students[i].title;
		cout << "fristname: ";
		cin >> students[i].fristname;
		cout << "lastname: ";
		cin >> students[i].lastname;
		cout << "mobile: ";
		cin >> students[i].mobile;
		cout << "homePhone: ";
		cin >> students[i].homePhone;
		cout << "email: ";
		cin >> students[i].email;
		cout << "grade: ";
		cin >> students[i].grade;
		cout << "school: ";

		cin >> students[i].school;
		cout << "Address-house: ";
		cin >> students[i].address.houseNumber;
		cout << "Address-villageNumber: ";
		cin >> students[i].address.villageNumber;
		cout << "Address-alley: ";
		cin >> students[i].address.alley;
		cout << "Address-road: ";
		cin >> students[i].address.road;
		cout << "Address-province: ";
		cin >> students[i].address.province;
		cout << "Address-district: ";
		cin >> students[i].address.district;
		cout << "Address-subDistrict: ";
		cin >> students[i].address.subDistrict;
		cout << "Address-postalCode: ";
		cin >> students[i].address.postalCode;
	}
	cout << "Enter information for guardian " << endl;
	for (int i = 0; i < 1; i++) {
		cout << "title: ";
		cin >> guardian[i].title;
		cout << "fristname: ";
		cin >> guardian[i].fristname;
		cout << "lastname: ";
		cin >> guardian[i].lastname;
		cout << "mobile: ";
		cin >> guardian[i].mobile;
		cout << "homePhone: ";
		cin >> guardian[i].homePhone;
		cout << "relation: ";
		cin >> guardian[i].relation;
		cout << endl;
	}

	// แสดงข้อมูลนักศึกษา

	cout << "Student Information:" << endl;

	for (int i = 0; i < 1; i++) {
		cout << "Student " << i + 1 << ":" << endl;
		cout << " idCard: " << students[i].idCard << endl;
		cout << " Title: " << students[i].title << endl;
		cout << " fristname: " << students[i].fristname << endl;
		cout << " lastname: " << students[i].lastname << endl;
		cout << " mobile: " << students[i].mobile << endl;
		cout << " homePhone: " << students[i].homePhone << endl;
		cout << " email: " << students[i].email << endl;
		cout << " grade: " << students[i].grade << endl;
		cout << " school: " << students[i].school << endl;

		cout << " Address-house: " << students[i].address.houseNumber << endl;
		cout << " Address-villageNumber: " << students[i].address.villageNumber << endl;
		cout << " Address-alley: " << students[i].address.alley << endl;
		cout << " Address-road: " << students[i].address.road << endl;
		cout << " Address-province: " << students[i].address.province << endl;
		cout << " Address-district: " << students[i].address.district << endl;
		cout << " Address-subDistrict: " << students[i].address.subDistrict << endl;
		cout << " Address-postalCode: " << students[i].address.postalCode << endl;
	}
	cout << "Guardian Information:" << endl;
	for (int i = 0; i < 1; i++) {
		cout << " Title: " << guardian[i].title << endl;
		cout << " fristname: " << guardian[i].fristname << endl;
		cout << " lastname: " << guardian[i].lastname << endl;
		cout << " mobile: " << guardian[i].mobile << endl;
		cout << " homePhone: " << guardian[i].homePhone << endl;
		cout << " relation: " << guardian[i].homePhone << endl;
		cout << endl;
	}
		
	return 0;

}
