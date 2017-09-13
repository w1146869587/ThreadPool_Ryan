#pragma once
//IdleThreadContainer:���������࣬����std::vector<MyThread*>ʵ�֣����洦�ڿ���״̬���߳�
#include <vector>

class MyThread;
class MyThreadPool;
class IdleThreadContainer
{
	
public:
	IdleThreadContainer();
	~IdleThreadContainer();
	std::vector<MyThread*>::size_type size();
	void push(MyThread *m);
	void assign(int n,MyThreadPool* m);	
	MyThread* top();
	void pop();
	void erase(MyThread *m);
private:
	std::vector<MyThread*> idle_thread_container_;
	typedef std::vector<MyThread*> Container;
	typedef Container::iterator Iterator;
};

/*
~IdleThreadContainer(); �������������������е��߳�

void push(MyThread *m)����һ���̷߳Żؿ���������

void assign(int n,MyThreadPool* m)������n���߳����̳߳�m��������̷߳������������

MyThread* top()������λ�ڿ����������˵��߳�

void pop()�����������������˵��߳�

void erase(MyThread *m)��ɾ��һ��ָ�����߳�

*/
