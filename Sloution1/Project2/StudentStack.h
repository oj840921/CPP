#pragma once
// StudentStatck.h : 학생정보 스택 클래스
#include "Student.h"
#include "Utility.h"
#define MAX_STACK_SIZE	100		// 스택의 최대 크기 설정

class StudentStack {
private:
	int top;						// 요소의 개수
	Student data[MAX_STACK_SIZE];	// 요소의 배열
public:
	StudentStack();
	bool isEmpty();
	bool isfull();
	void push(Student e);
	Student pop();
	Student peek();
	void display();
};