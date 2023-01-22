#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	string line;

	ofstream MyFile("original.txt");
	MyFile << "Files can be tricky, but it is fun enough!";
	MyFile.close();

	ifstream ini_file{"original.txt"}; 
	ofstream out_file{ "copy.txt" };
	if (ini_file && out_file) {

		while (getline(ini_file, line)) {
			out_file << line << "\n";
		}
		cout << "Copy Finished \n";
	}
	else {
		printf("Cannot read File");
	}
	ini_file.close();
	out_file.close();
	return 0;
}
