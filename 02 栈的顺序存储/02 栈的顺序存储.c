#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "seqStack.h"


//#define  MAX 1024
//
//struct SStack
//{
//	void * data[MAX];
//	int m_Size;
//};
//
//typedef void * SeqStack;
//
////��ʼ��ջ
//SeqStack init_SeqStack()
//{
//	struct SStack *myStack = malloc(sizeof(struct SStack));
//
//	if ( myStack == NULL)
//	{
//		return NULL;
//	}
//
//	memset(myStack->data, 0, sizeof(void *)* MAX); //�����ÿ�
//
//	myStack->m_Size = 0;
//
//	return myStack;
//}
////��ջ
//
//void push_SeqStack(SeqStack stack , void * data)
//{
//	//���ʾ�������β��
//
//	if (stack == NULL)
//	{
//		return;
//	}
//	if ( data == NULL)
//	{
//		return;
//	}
//
//	struct SStack * myStack = stack;
//
//	if (myStack->m_Size == MAX)
//	{
//		return;
//	}
//
//	myStack->data[myStack->m_Size] = data;
//
//	myStack->m_Size++;
//
//}
//
//
////��ջ
//void pop_SeqStack(SeqStack stack)
//{
//	//��ջ���� βɾ
//	if (stack == NULL)
//	{
//		return;
//	}
//	struct SStack * myStack = stack;
//
//	//����ǿ�ջ ֱ�� return
//	if (myStack->m_Size == 0)
//	{
//		return;
//	}
//
//	myStack->data[myStack->m_Size - 1] = NULL;
//	myStack->m_Size--;
//}
//
//
////����ջ��Ԫ��
//void * top_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return NULL;
//	}
//	struct SStack * myStack = stack;
//
//	//����ǿ�ջ ����NULL
//	if ( myStack->m_Size == 0)
//	{
//		return NULL;
//	}
//
//	return myStack->data[myStack->m_Size - 1];
//}
//
//
////��ȡջ��С
//int size_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return 0;
//	}
//	struct SStack * myStack = stack;
//
//	return myStack->m_Size;
//
//}
//
////�ж�ջ�Ƿ�Ϊ��
//int isEmpty_SeqStack(SeqStack stack)
//{
//
//	if (stack == NULL)
//	{
//		return -1; //����������NULL������Ҳ�ǿ�ջ
//	}
//	struct SStack * myStack = stack;
//
//	if (myStack->m_Size == 0)
//	{
//		return 1;
//	}
//
//	return 0;
//
//}
//
//
////����ջ
//void destroy_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return; 
//	}
//
//	free(stack);
//	stack = NULL;
//}





//����
struct Person
{
	char name[64];
	int age;
};

void test01()
{
	//��ʼ��ջ
	SeqStack myStack = init_SeqStack();


	//׼������
	struct Person p1 = {  "aaa", 10 };
	struct Person p2 = {  "bbb", 20 };
	struct Person p3 = {  "ccc", 30 };
	struct Person p4 = {  "ddd", 40 };
	struct Person p5 = {  "eee", 50 };

	//��ջ
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	while ( isEmpty_SeqStack(myStack) == 0 ) //ֻҪջ��Ϊ��  �鿴ջ�� ���ҳ�ջ
	{
		struct Person * pTop = top_SeqStack(myStack);
		printf("������%s  ����: %d\n", pTop->name, pTop->age);

		//��ջ
		pop_SeqStack(myStack);
	}

	//�鿴ջ��Ԫ�ظ���
	printf("Ԫ�ظ���Ϊ��%d\n", size_SeqStack(myStack));


	destroy_SeqStack(myStack);
	myStack = NULL;

}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}