#pragma once
//BusyThreadContainer:���������࣬����std::list<MyThread*>ʵ�֣����湤��״̬���߳�

#include <list>

class MyThread;

class BusyThreadContainer
{
	
public:
	BusyThreadContainer();
	~BusyThreadContainer();
	void push(MyThread *m);
	std::list<MyThread*>::size_type size();
	void erase(MyThread *m);

private:
	std::list<MyThread*> busy_thread_container_;
	typedef std::list<MyThread*> Container;
	typedef Container::iterator Iterator;
};

/*
void push(MyThread *m)����һ���̷߳��빤��������

void erase(MyThread *m)��ɾ��һ��ָ�����߳�

std::list<MyThread*>::size_type size()�����ع��������Ĵ�С
*/

