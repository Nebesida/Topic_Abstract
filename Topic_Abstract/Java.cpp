#include "Java.h"

Java::Java()
{
	setCourseName("undefined");
	setTopicName("undefined");
	setLectsCount(0);
	setTasksCount(0);
	setTopicSize(0);
	this->_frameworkName = "undefined";
}
Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName) :
	ITopic(courseName, topicName, lectsCount, tasksCount, topicSize), _frameworkName(correctAlpha(frameworkName)) {}

Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) :
	ITopic(courseName, topicName, lectsCount, tasksCount, topicSize), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount) :
	ITopic(courseName, topicName, lectsCount, tasksCount, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName, int lectsCount) :
	ITopic(courseName, topicName, lectsCount, 0, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName) : ITopic(courseName, topicName, 0, 0, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName) : ITopic(courseName, "undefined", 0, 0, 0), _frameworkName("undefined") {}

Java::~Java() {}

void Java::setFrameworkName(std::string frameworkName)
{
	this->_frameworkName = correctAlpha(frameworkName);
}

std::string Java::getFrameworkName()
{
	return _frameworkName;
}

//������������� ���������
Java Java::operator++()
{
	setTopicSize(getTopicSize() + 1);
	return *this;
}

Java Java::operator--()
{
	setlocale(LC_ALL, "");
	if (getTopicSize() > 0)
	{
		setTopicSize(getTopicSize() - 1);
		return *this;
	}
	else
	{
		std::cout << "���������� ������� ���� ������ 0!" << std::endl;
		return *this;
	}
}

Java Java::operator++(int)
{
	Java t(*this);
	++(*this);
	return t;
}

Java Java::operator--(int)
{
	Java t(*this);
	--(*this);
	return t;
}

bool Java::operator< (Java other)
{
	return this->getTopicSize() < other.getTopicSize();
}

bool Java::operator> (Java other)
{
	return this->getTopicSize() > other.getTopicSize();
}

std::ostream& operator<<(std::ostream& output, Java t)
{
	setlocale(LC_ALL, "");
	output << "�������� �����: " << t.getCourseName() << std::endl
		<< "�������� ����: " << t.getTopicName() << std::endl
		<< "���������� ������ � ����: " << t.getLectsCount() << std::endl
		<< "���������� ����� � ����: " << t.getLectsCount() << std::endl
		<< "������ ���� � ���������: " << t.getTopicSize() << std::endl
		<< "������������ ��������� Java: " << t._frameworkName << std::endl
		<< "_____________________________________________" << std::endl;
	return output;
}

void Java::display()
{
	setlocale(LC_ALL, "");
	ITopic::display();
	std::cout << "������������ ��������� Java: " << _frameworkName << std::endl;
}