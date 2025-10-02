// main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "student.h"
#include <iostream>

constexpr char FILE_NAME[] = "grade.txt";

int main() {
	std::vector<Student> students;
	loadFile(students, FILE_NAME);          // 启动即读盘

	while (true) {
		std::cout << "\n=== Student Score Mgr ===\n"
			"1.add  2.list  3.sort  0.exit\n>>> ";
		int c{};
		if (!(std::cin >> c)) break;
		switch (c) {
		case 0: saveFile(students, FILE_NAME); return 0;
		case 1: addStudent(students);          break;
		case 2: listAll(students);             break;
		case 3: sortByScore(students);         break;
		default: std::cout << "Invalid Input!\n";
		}
	}
}
