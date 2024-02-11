#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Address
{
private:
	std::string NameCity_;
	std::string NameStreet_;
	int NumberHouse_;
	int NumberApartment_;


public:
	Address(std::string&  NameCity, std::string& NameStreet, int& NumberHouse, int& NumberApartment) {
		NameCity_ =  NameCity;
		NameStreet_ = NameStreet;
		NumberHouse_ = NumberHouse;
		NumberApartment_ = NumberApartment;
	};

	std::string get_output_address() { return  NameCity_ + ", " + NameStreet_ + ", " + std::to_string(NumberHouse_) + ", " + std::to_string(NumberApartment_); }
	std::string get_NameCity() { return NameCity_;}
};

void sort(Address **addresses, int size) {

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			char a = addresses[j]->get_NameCity()[0];
			char b = addresses[j + 1]->get_NameCity()[0];
			if (a < b) {
				Address * temp = addresses[j];
				addresses[j] = addresses[j + 1];
				addresses[j + 1] = temp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::ifstream flie_read("in.txt");
	if (!flie_read.is_open())
	{
		std::cout << "File 'in.txt' not open!\n";
		return 0;
	}

	int size_arr;
	flie_read >> size_arr;

	if (size_arr > 0)
	{
		Address** address = new Address*[size_arr];

		for (size_t i = 0; i < size_arr; i++)
		{
			std::string NameCity;
			std::string NameStreet;
			int NumberHouse;
			int NumberApartment;

			flie_read >> NameCity;
			flie_read >> NameStreet;
			flie_read >> NumberHouse;
			flie_read >> NumberApartment;

			address[i] = new Address(NameCity, NameStreet, NumberHouse, NumberApartment);
		}

		sort(address, size_arr);

		std::ofstream flie_write("out.txt");

		flie_write << size_arr << std::endl;

		for (size_t i = 0; i < size_arr; i++)
		{
			flie_write << address[i]->get_output_address() << std::endl;
		}

		flie_write.close();

		for (size_t i = 0; i < size_arr; i++)
		{
			delete address[i];
		}
		delete[] address;

	}
	flie_read.close();
}

