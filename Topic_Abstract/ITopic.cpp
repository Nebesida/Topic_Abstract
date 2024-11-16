#include "ITopic.h"

//конструкторы
ITopic::ITopic() {
	this->_courseName = "undefined";
	this->_topicName = "undefined";
	this->_lectsCount = 0;
	this->_tasksCount = 0;
	this->_topicSize = 0;
}

//список инициализации
ITopic::ITopic(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) :
	_courseName(correctAlpha(courseName)), _topicName(correctAlpha(topicName)), _lectsCount(correctCount(lectsCount)),
	_tasksCount(correctCount(tasksCount)), _topicSize(correctCount(topicSize)) {}

//деструктор
ITopic::~ITopic() {}

//геттеры и сеттеры

void ITopic::setCourseName(std::string courseName) {this->_courseName = correctAlpha(courseName);}

std::string ITopic::getCourseName() {return _courseName;}

void ITopic::setTopicName(std::string topicName) {this->_topicName = correctAlpha(topicName);}

std::string ITopic::getTopicName() {return _topicName;}

void ITopic::setLectsCount(int lectsCount) {this->_lectsCount = correctCount(lectsCount);}

int ITopic::getLectsCount() {return _lectsCount;}

void ITopic::setTasksCount(int tasksCount) {this->_tasksCount = correctCount(tasksCount);}

int ITopic::getTasksCount() {return _tasksCount;}

void ITopic::setTopicSize(int topicSize) {this->_topicSize = correctCount(topicSize);}

int ITopic::getTopicSize() {return _topicSize;}

void ITopic::display()
{
	setlocale(LC_ALL, "");
	std::cout << "Название курса: " << _courseName << std::endl;
	std::cout << "Название темы: " << _topicName << std::endl;
	std::cout << "Количество лекций в теме: " << _lectsCount << std::endl;
	std::cout << "Количество задач в теме: " << _tasksCount << std::endl;
	std::cout << "Размер темы в страницах: " << _topicSize << std::endl;
}