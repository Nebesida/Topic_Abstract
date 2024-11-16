#pragma once
#include "ITopic.h"
class Java : public ITopic
{
public:
	Java();
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName);
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount);
	Java(std::string courseName, std::string topicName, int lectsCount);
	Java(std::string courseName, std::string topicName);
	Java(std::string courseName);

	~Java();

	void setFrameworkName(std::string frameworkName);
	std::string getFrameworkName();

	Java operator++();
	Java operator--();

	Java operator++(int);
	Java operator--(int);

	bool operator< (Java other);
	bool operator> (Java other);

	friend std::ostream& operator<< (std::ostream& output, Java t);

	void display();

private:
	std::string _frameworkName;
};