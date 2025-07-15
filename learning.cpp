#include <iostream>

int first_attepmt(){
	std::cout << "i like" << "\n";
	std::cout << "second line" << std::endl;
	return 0;
}

int variables() {
	int x;
	x = 5;
	std::cout << x;
	return 0;
}

int simple_sums() {
	int x = 10;
	double y = 5.5;
	int sum = x + y;
	std::cout << x << "\n";
	std::cout << y << "\n";
	std::cout << sum << "\n";
	return 0;
}

int characters() {
	char grade = 'H';
	char note = '10';
	std::cout << grade << "\n";
	std::cout << note <<'\n';
	return 0;
}

int boolean() {
	bool aproved = true;
	std::cout << aproved << '\n';
	return 0;
}

int strings() {
	std::string grade = "h";
	std::string sentece = "you got 10";
	std:: cout << grade << '\n';
	std:: cout << sentece << '\n';
	return 0;
}

int main(){
	int x = 10;
	char grade = 'a';
	double y = 10.66;
	std::string dr = "hello";
	std::cout << x << "\n";
	std::cout << grade << "\n";
	std::cout << y << "\n";
	std::cout << dr << "\n";
	return 0;
}
