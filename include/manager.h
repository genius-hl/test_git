#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include <string>
#include <vector>
#include "computerroom.h"

using namespace std;
class Manager : public Identity{
public:
    //默认构造函数
    Manager();
    //有参构造函数
    Manager(string name, string pwd);
    //菜单界面
    virtual void openMenu();
    //添加账号
    void addPerson();
    //查看账号  
    void showPerson();
    //查看机房信息
    void showComputer();
    //清空预约记录
    void cleanFile();
    //初始化容器
    void initVector();
    //学生容器
    vector<Student> vStu;
    //教师容器
    vector<Teacher> vTea;
    //检测重复
    bool checkTRepeat(int id, int type);
    //机房信息
    vector<Computerroom> vCom;
};
#endif