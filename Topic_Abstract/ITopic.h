#pragma once
#include <iostream>
#include <string>
#include "anyTopic.h"

using namespace anyTopic;

class ITopic
{
public:
	//������������
	ITopic();
	ITopic(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);

	//����������
	virtual ~ITopic();

	//������� � �������
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

	//������
	virtual void display() = 0;

private:
	//����
	std::string _courseName;
	std::string _topicName;
	int _lectsCount;
	int _tasksCount;
	int _topicSize;
};