#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;
int main() {
	//solution 1
	//cin and stringstream
	string line;
	vector<int> numbers;
	getline(cin, line);
	stringstream ss(line);
	int size1 = 0;
	int num;
	while (ss >> num) {
		numbers.push_back(num);
		size1++;
	}
	int size2 = 0;

	//solution 2
	//scanf
	while (scanf("%d", &num) != EOF) {
		numbers.push_back(num);
	}
	//solution 3
	//fstream
	ofstream ofs;
	ofs.open("out.txt", ios::out);
	while(ofs << num) {
		cout << num;
	}
	ofs.close();
	ifstream ifs;
	ifs.open("out.txt", ios::in);
	while (ifs >> num) {



		if (ifs.peek() == '\n') {
			break;
		}
	}
	//solution 4
	//peek
	while (cin >> num) {
		

		if (cin.peek() == '\n') {
			break;
		}
	}

	//solution 5
	//getchar
	
	while (cin >> num) {
		numbers.push_back(num);
		if(getchar()=='\n') {}
	}
}
