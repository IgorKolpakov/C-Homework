#include <iostream>
#include <string>
struct Person
{
	int p_age, p_weight;
	std::string p_name;
	bool p_gender;
	int p_years = 0;
	
	
	Person(std::string name, int age, int weight, bool gender) : p_name(name), p_age(age), p_weight(weight), p_gender(gender)
	{
	}

	int getYears()
	{
		return p_years;
	}

	void addYears()
	{
		p_years++;
	}

	void setYears(int years)
	{
		p_years = years;
	}

	int getAge()
	{
		return p_age;
	}

	int getWeight()
	{
		return p_weight;
	}

	void changeAge(int age)
	{
		p_age = age;
	}

	void postName(std::string name)
	{
		p_name = name;
	}

	void changeWeight(int weight)
	{
		p_weight = weight;
	}


	std::string getName()
	{
		return p_name;
	}

	void printGender()
	{
		if (true)
			std::cout << "Woman" << std::endl;
		else
			std::cout <<"Man" << std::endl;
	}

	bool getGender()
	{
		return p_gender;
	}
	

	void print()
	{
		std::cout << p_name << ", age = " << p_age << ", weight = " << p_weight << ", gender = " ;
		printGender();
	}
};

struct Student : Person
{
	int p_years = 0;
	std::string status = "Student";
	Student( std::string name, int age, bool gender, int weight)
		:Person(p_name, p_age, p_gender, p_weight), status("Student")
	{
		status = "Student";
	}
	 
};

struct UniMan
{
	std::string name;
	int bonus = 0, age;
	UniMan()
	{
		std::cout << "Enter name." << std::endl;
		std::cin >> name;
		std::cout << "Enter age." << std::endl;
		std::cin >> age;
	}
	void print()
	{
		std::cout << "Name: " << name << ", bonus " << bonus << std::endl;
	}
};

struct Student2 : UniMan
{
	int course; 
	int bonus = 5;
	Student2()
	{
		std::cout << "Enter number of course." << std::endl;
		std::cin >> course;
	}

	void print()
	{
		std::cout << "Name: " << name << ", age " << age << ", bonus " << bonus << std::endl;
	}
};

struct Teacher : UniMan
{
	int years;
	int bonus = 15;
	Teacher()
	{
		std::cout << "Enter years of works." << std::endl;
		std::cin >> years;
		if (years > 10)
			bonus += 10;
	}
	
	void print()
	{
		std::cout << "Name: " << name << ", age " << age << ", years " << years << ", bonus " << bonus << std::endl;
	}
};

int main()
{
		std::cout << "Hello World!\n";
		char answer[50];
		int age = 20, weight = 55;
		std::string name = "Ann";
		bool gender = true;
		Person pers1 = Person(name, age, gender, weight);
		pers1.print();
		pers1.changeAge(18);
		pers1.print();
		pers1.postName("Penni");
		pers1.print();
		pers1.changeWeight(35);
		pers1.print();
		std::cout << "You have paid for " << pers1.getYears() <<" years of study." << std::endl;
		std::cout << "To become a student, you must pay at least 1 year. Do you want to do this? (Y/N) " << std::endl;
		std::cin >> answer;
		if (answer[0] == 'Y')
		{
			pers1.addYears();
		}
		if (answer[0] == 'N')
		{
			std::cout << "What a pity." << std::endl;
		}
		
		std::cout << "You have paid for " << pers1.getYears() << " years of study." << std::endl;
		if (pers1.getYears() >= 1)
		{
			Student* s1 = static_cast<Student*>(&pers1);
			s1->print();
			std::cout << "Status = student" << std::endl;
		}
		else
			std::cout << "Status = null" << std::endl;

		std::cout << "\n\nTask 2!\n";
		Student2 student = Student2();
		student.print();

		UniMan uniman = UniMan();
		uniman.print();

		Teacher teacher = Teacher();
		teacher.print();
			
}
