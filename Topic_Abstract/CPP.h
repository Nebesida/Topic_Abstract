#pragma once
#include "ITopic.h"

class CPP : public ITopic
{
public:
	CPP();
	CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, int standart);
	CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);
	CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount);
	CPP(std::string courseName, std::string topicName, int lectsCount);
	CPP(std::string courseName, std::string topicName);
	CPP(std::string courseName);

	~CPP();

	//перегруженные операторы
	CPP operator++();
	CPP operator--();

	CPP operator++(int);
	CPP operator--(int);

	bool operator< (CPP other);
	bool operator> (CPP other);

	friend std::ostream& operator<< (std::ostream& output, CPP t);

	void setStandart(int standart);
	int getStandart();

	void display();

private:
	int _standart;
};

