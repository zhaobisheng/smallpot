//����������
//˽�д�ǰ�»���
//���������»���
//ͨ����ʹ�ù���������ͨ����������д

#pragma once

#include "Engine.h"
#include "Config.h"

//���ܲ���ȫ

class PotBase
{
protected:
    Engine* engine_;
    Config* config_;
public:
    PotBase();
    ~PotBase() {};

    //void setFilePath(char *s) { BigPotString::setFilePath(s); }
    //static bool fileExist(const string& filename);
    //void safedelete(void* p){ if (p) delete p; p = nullptr; };
};
