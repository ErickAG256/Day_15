#include <iostream>

template <typename Data_type, typename Data_type_2>

auto sum_of(Data_type x, Data_type_2 y) {
	return x + y;
}

int data_type() {
	int x = 0;
	double y = 0; 

	std::cout << "What is x? " << "\n";
	std::cin >> x;
	
	std::cout << "What is y? " << "\n";
	std::cin >> y;
	
	std::cout << sum_of(x, y);

	return 0;
}

struct this_looks_objet_oriented {
	string name{};
	int age{ 0 };
	double grade{ 0.0 };
	bool approve{ true };
}

void just_a_test(this_looks_objet_oriented* student_1) {
	std::cout << "\n" << student_1 << "\n";
}

int main() {

	std::string name;
	int age;
	double grade;
	bool approve= true;

	std::cout << "Tell me the student's name: " << "\n";
	std::cin >> name;

	std::cout << "Tell me the student's age: " << "\n";
	std::cin >> age;

	std::cout << "Tell me the student's grade: " << "\n";
	std::cin >> grade;

	grade > 9 ? approve=true : approve = false;

	this_looks_objet_oriented student_1;
	student_1.name = name;
	student_1.age = age;
	student_1.grade = grade;
	student_1.approve = approve;


	std::cout << "Name: " << student_1.name << "\n";
	std::cout << "Age: " << student_1.age << "\n";
	std::cout << "Grade: " << student_1.grade << "\n";
	std::cout << "Aprove: " << student_1.approve << "\n";


	std::cout << "\n" << &student_1 << "\n";
	just_a_test(&student_1);
	
	return 0;
}
