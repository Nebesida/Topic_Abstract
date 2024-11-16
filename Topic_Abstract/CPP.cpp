#include "CPP.h"

CPP::CPP()
{
	setCourseName("undefined");
	setTopicName("undefined");
	setLectsCount(0);
	setTasksCount(0);
	setTopicSize(0);
	this->_standart = 0;
}

CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, int standart) :
	ITopic(courseName, topicName, lectsCount, tasksCount, topicSize), _standart(correctCount(standart)) {}

CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) :
	ITopic(courseName, topicName, lectsCount, tasksCount, topicSize), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount) :
	ITopic(courseName, topicName, lectsCount, tasksCount, 0), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName, int lectsCount) :
	ITopic(courseName, topicName, lectsCount, 0, 0), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName) :
	ITopic(courseName, topicName, 0, 0, 0), _standart(0) {}
CPP::CPP(std::string courseName) :
	ITopic(courseName, "undefined", 0, 0, 0), _standart(0) {}

CPP::~CPP() {}

void CPP::setStandart(int standart)
{
	this->_standart = correctCount(standart);
}

int CPP::getStandart()
{
	return _standart;
}

//перегруженные операторы
CPP CPP::operator++()
{
	setTopicSize(getTopicSize() + 1);
	return *this;
}

CPP CPP::operator--()
{
	setlocale(LC_ALL, "");
	if (getTopicSize() > 0)
	{
		setTopicSize(getTopicSize() - 1);
		return *this;
	}
	else
	{
		std::cout << "Количество страниц темы меньше 0!" << std::endl;
		return *this;
	}
}

CPP CPP::operator++(int)
{
	CPP t(*this);
	++(*this);
	return t;
}

CPP CPP::operator--(int)
{
	CPP t(*this);
	--(*this);
	return t;
}

bool CPP::operator< (CPP other)
{
	return this->getTopicSize() < other.getTopicSize();
}

bool CPP::operator> (CPP other)
{
	return this->getTopicSize() > other.getTopicSize();
}

std::ostream& operator<<(std::ostream& output, CPP t)
{
	setlocale(LC_ALL, "");
	output << "Название курса: " << t.getCourseName() << std::endl
		<< "Название темы: " << t.getTopicName() << std::endl
		<< "Количество лекций в теме: " << t.getLectsCount() << std::endl
		<< "Количество задач в теме: " << t.getLectsCount() << std::endl
		<< "Размер темы в страницах: " << t.getTopicSize() << std::endl
		<< "Используемый стандарт С++: " << t._standart << std::endl
		<< "_____________________________________________" << std::endl;
	return output;
}

void CPP::display()
{
	setlocale(LC_ALL, "");
	ITopic::display();
	std::cout << "Используемый стандарт С++: " << _standart << std::endl;
}