#include <iostream>
#include "ITopic.h"
#include "CPP.h"
#include "Java.h"

int main()
{
	CPP* sep = new CPP("C++", "basic_construction", 10, 95, themeSize::basic_constructions, 23);
	Java oct("Java", "OOP", 30, 87, themeSize::OOP, "Spring");
	Java* nov = new Java("Java", "JavaFx", 30, 87);
	CPP dec("C++", "multithreading", 30, 87);
	Java jan("Java");

	ITopic** arr = new ITopic * [5] {sep, & oct, nov, & dec, & jan};

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		std::cout 
			<< "Выберите тему лекции: 1 = basic_construction, 2 = OOP, 3 = JavaFx, 4 = multithreading, 5 = вывести все, 0 = выйти из программы" 
			<< std::endl;
		displaySeparator();

		char choice;
		std::cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->display();
			displaySeparator();
			break;
		case '2':
			arr[1]->display();
			displaySeparator();
			break;
		case '3':
			arr[2]->display();
			displaySeparator();
			break;
		case '4':
			arr[3]->display();
			displaySeparator();
			break;
		case '5':
			for (int i = 0; i < 5; ++i)
			{
				arr[i]->display();
				displaySeparator();
			}
			break;
		case '0':
			start = false;
			break;
		default:
			break;
		}
	} 
	while (start);

	delete sep;
	delete nov;
	delete[] arr;
	return 0;
}