#pragma once
// pragma once 防止头文件被多次包含

#include <string>
#include <vector>

struct Student {
	unsigned id;
	std::string name;
	double score;
};

/* 工具函数声明 */
void addStudent(std::vector<Student>& vec);
void listAll(const std::vector<Student>& vec);
void sortByScore(std::vector<Student>& vec);   // 从高到低
void saveFile(const std::vector<Student>& vec, const char* path);
void loadFile(std::vector<Student>& vec, const char* path);
