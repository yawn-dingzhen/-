#pragma once
#include <string>
#include <map>
#include "person.h"
using namespace std;


class bookmanager
{
public:
    map<string, book>allbook;//存放管理员和学生添加的书籍
};


class personmanager
{
public:
    map<string,student> studentsmasage;//学生信息
};