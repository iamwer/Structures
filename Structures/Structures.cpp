#include <iostream>
#include <string>
using namespace std;

struct Smartphone	
{	
	string name;
	int storageSpace;
	string color;
	float price;

};

void printSmartphoneInfo(Smartphone smartphone)
{
	cout << "Name: " << smartphone.name << endl;
	cout << "StorageSpace : " << smartphone.storageSpace << " GB" << endl;
	cout << "Color: " << smartphone.color << endl;
	cout << "Price: " << smartphone.price << endl;
}




int main()
{	

	Smartphone smartphone;
	smartphone.name = "Iphone";
	smartphone.storageSpace = 32;
	smartphone.color = "Yellow";
	smartphone.price = 1200.05;

	Smartphone smartphone2;
	smartphone2.name = "Samsung Galaxy Note 11";
	smartphone2.storageSpace = 128;
	smartphone2.color = "Green";
	smartphone2.price = 1000.45;

	Smartphone smartphone3;
	smartphone.name = "Xiomi";
	smartphone.storageSpace = 256;
	smartphone.color = "White";
	smartphone.price = 40;








	printSmartphoneInfo(smartphone);
	printSmartphoneInfo(smartphone2);
	printSmartphoneInfo(smartphone3);

	
	



	system("pause>0");
	return 0;
}