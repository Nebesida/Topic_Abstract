#pragma once
#include <iostream>
#include <string>
#include "anyTopic.h"

using namespace anyTopic;

class ITopic
{
public:
	//конструкторы
	ITopic();
	ITopic(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);

	//деструктор
	virtual ~ITopic();

	//геттеры и сеттеры
	void setCourseName(std::string courseName);
	std::string getCourseName();
	void setTopicName(std::string topicName);
	std::string getTopicName();
	void setLectsCount(int lectsCount);
	int getLectsCount();
	void setTasksCount(int tasksCount);
	int getTasksCount();
	void setTopicSize(int topicSize);
	int getTopicSize();

	//методы
	virtual void display() = 0;

private:
	//поля
	std::string _courseName;
	std::string _topicName;
	int _lectsCount;
	int _tasksCount;
	int _topicSize;
};