#include <iostream>
using namespace std;
#include <vector>
void costSlab1(const vector<int>& slab) {
	cout << "Bill for the Slab 1:\n";
	for (int i : slab) {
		cout << 10 * i << " ";
	}
	cout << endl;
}
void costSlab2(const vector<int>& slab) {
	cout << "Bill for the Slab 2:\n";
	for (int i : slab) {
		cout << 15 * i << " ";
	}
	cout << endl;
}
void costSlab3(const vector<int>& slab) {
	cout << "Bill for the Slab 3:\n";
	for (int i : slab) {
		cout << 20 * i << " ";
	}
	cout << endl;
}
int main() {
	vector<vector<int>> matrix = {{7, 6, 8}, {2, 4, 3}, {1, 8, 5}};
	string ID;
	cout << "Please Enter your ID: ";
	getline(cin, ID);
	cout << "Student ID: " << ID << endl;
	cout<<"..................................."<<endl;
	cout << "Enter One of them:\n"
	     << "1. Display Bill of the Slab 1 and Slab 2\n"
	     << "2. Display Bill of the Slab 3\n"
	     << "3. Exit\n";
	cout<<"..................................."<<endl;
	int choice;
	cout << "Please Enter your choice (1-3): ";
	cin >> choice;
	if (choice == 1) {
		costSlab1(matrix[0]);
		costSlab2(matrix[1]);
	} else if (choice == 2) {
		costSlab3(matrix[2]);
	} else {
		cout << endl;
	}
	return 0;
}
