#pragma once
//Task:�����࣬������������ȼ�����һ������Run������������Ҫ����Task����Ҫ��ɵ�����д��Run������
namespace
{
	enum  PRIORITY
	{

		MIN = 1, NORMAL = 25, MAX = 50
	};
}

class Task
{
	
public:
	Task()
	{

	}
	void SetPriority(int priority)
	{
		if (priority>(PRIORITY::MAX))
		{
			priority = (PRIORITY::MAX);
		}
		else if (priority>(PRIORITY::MAX))
		{
			priority = (PRIORITY::MIN);
		}
	}	
	virtual void Run() = 0;
protected:
	int priority_;
};

/*
void SetPriority(int priority) �������̵߳����ȼ�����ֵ��1-50֮�䣬ֵԽ�����ȼ�Խ��

virtual void run() = 0���߳�ִ�еķ������û���Ҫ��дΪ�Լ��ķ���
*/
