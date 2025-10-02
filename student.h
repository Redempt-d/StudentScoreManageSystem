#pragma once
// pragma once ��ֹͷ�ļ�����ΰ���

#include <string>
#include <vector>

struct Student {
	unsigned id;
	std::string name;
	double score;
};

/* ���ߺ������� */
void addStudent(std::vector<Student>& vec);
void listAll(const std::vector<Student>& vec);
void sortByScore(std::vector<Student>& vec);   // �Ӹߵ���
void saveFile(const std::vector<Student>& vec, const char* path);
void loadFile(std::vector<Student>& vec, const char* path);
