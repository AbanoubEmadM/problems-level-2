#include <iostream>

using namespace std;
 
struct strAddress
{
	string StreetName;
	int BuildingNo;
	int POBox;
};

struct strInfo
{
	string FirstName;
	string LastName;
	short Age;
	string Phone;
	strAddress Address;
};

// modify must be by referanc bec otherwise it willnot be reaad in main func
void ReadInfo(strInfo &Info)
{
	cout << "FirstName: ";
	cin >> Info.FirstName;

	cout << "LastName: ";
	cin >> Info.LastName;

	cout << "Age: ";
	cin >> Info.Age;

	cout << "Phone: ";
	cin >> Info.Phone;

	cout << "Street Name: ";
	cin >> Info.Address.StreetName;

	cout << "Building Number: ";
	cin >> Info.Address.BuildingNo;

	cout << "POBox: ";
	cin >> Info.Address.POBox;
}

void PrintInfo(strInfo Info)
{
	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Street Name: " << Info.Phone << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "Phone: " << Info.Phone << endl;

}

int main()
{
	strInfo Person;
	ReadInfo(Person);
	PrintInfo(Person);

}