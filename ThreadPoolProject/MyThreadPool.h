#pragma once
//MyThreadPool:�̳߳��࣬���ڴ��û���ȡ���񣬹�������ʵ�ֶ��̳߳����̵߳ĵ���

#include <thread>
#include <mutex>
#include "Task.h"
#include "MyThread.h"
#include "BusyThreadContainer.h"
#include "IdleThreadContainer.h"
#include "TaskContainer.h"

class MyThread;

class MyThreadPool
{
public:
	
	MyThreadPool(){}
	MyThreadPool(int number);
	~MyThreadPool();
	void AddTask(Task *Task,int priority);
	void AddIdleThread(int n);
	void RemoveThreadFromBusy(MyThread *myThread);
	void Start();
	void EndMyThreadPool();
private:
	BusyThreadContainer busy_thread_container_;
	IdleThreadContainer idle_thread_container_;
	bool issurvive_;
	TaskContainer task_container_;
	std::thread thread_this_;
	std::mutex busy_mutex_;
	std::mutex idle_mutex_;
	std::mutex task_mutex_;
	int number_of_thread_;
};

/*
MyThreadPool(int number)������MyThreadPool����������number���̵߳Ŀ�������

void AddTask(Task *Task,int priority)�����һ�����ȼ�Ϊpriority����������������

void AddIdleThread(int n)���ڴ���n�������̵߳�����������

void RemoveThreadFromBusy(MyThread *myThread)����һ���̴߳ӹ���������ɾ�������ƻؿ���������

void Start()���ж��Ƿ��п����̣߳����н�����Ӵ����������������������������У��ȴ�ִ��

void EndMyThreadPool()�������̳߳ص�����
*/
