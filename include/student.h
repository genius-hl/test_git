#ifndef STUDENT_H
#define STUDENT_H
#include "identity.h"
#include <iostream>
#include <string>
#include <vector>
#include "computerroom.h"
using namespace std;

class Student : public Identity{
public:
    //默认构造
    Student();
    //有参构造 参数: 学号、姓名、密码
    Student(int id, string name, string pwd);
    //菜单界面
    virtual void openMenu();
    //申请预约
    void applyOrder();
    //查看自身预约
    void showMyOrder();
    //查看所有预约
    void showAllOrder();
    //取消预约
    void cancelOrder();
    //学生学号
    int m_Id;
    //学生姓名
    string m_Name;
    //学生密码
    string m_Pwd;
    //机房信息
    vector<Computerroom> vCom;
};
#endif