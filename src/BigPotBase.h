//����������
//˽�д�ǰ�»���
//���������»���
//ͨ����ʹ�ù���������ͨ����������д

#pragma once

#include "Engine.h"
#include "BigPotString.h"
#include "BigPotConfig.h"


//���ܲ���ȫ

class BigPotBase
{
protected:
    Engine* engine_;
    BigPotConfig* config_;
public:
    BigPotBase();
    ~BigPotBase() {};

    //void setFilePath(char *s) { BigPotString::setFilePath(s); }
    //static bool fileExist(const string& filename);
    //void safedelete(void* p){ if (p) delete p; p = nullptr; };

};
