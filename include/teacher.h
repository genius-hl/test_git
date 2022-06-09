#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include "identity.h"
#include <string>
#include "orderfile.h"
using namespace std;
class Teacher : public Identity{
public:
    //构造函数
    Teacher();
    //有参构造
    Teacher(int empId, string name, string pwd);

    //菜单界面
    void openMenu();

    //查看所有预约
    void showAllOrder();

    //审核预约
    void validOrder();

    //职工号
    int m_EmpId;
};

#endif