#include "student.h"
#include <fstream>
#include <algorithm>
#include <iostream>

void addStudent(std::vector<Student>& vec) {
	Student s{};
	std::cout << "Input id name score: ";
	std::cin >> s.id >> s.name >> s.score;
	vec.push_back(s);
}

void listAll(const std::vector<Student>& vec) {
	for (const auto& s : vec)
		std::cout << s.id << '\t' << s.name << '\t' << s.score << '\n';
}

void sortByScore(std::vector<Student>& vec) {
	std::sort(vec.begin(), vec.end(),
		[](const Student& a, const Student& b) {
			return a.score > b.score;   // ½µÐò
		});
}

void saveFile(const std::vector<Student>& vec, const char* path) {
	std::ofstream ofs(path);
	for (const auto& s : vec) ofs << s.id << ' ' << s.name << ' ' << s.score << '\n';
}

void loadFile(std::vector<Student>& vec, const char* path) {
	vec.clear();
	std::ifstream ifs(path);
	Student s{};
	while (ifs >> s.id >> s.name >> s.score) vec.push_back(s);
}
