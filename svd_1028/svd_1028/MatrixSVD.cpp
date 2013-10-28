#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "MatrixSVD.h"

using namespace std;

//Vector��***************************************************************

Vector::Vector(int num)
{
	vector=new double[num];
	n=num;
	int i=0;
	for(i=0;i<n;i++)
		vector[i]=0;
}

double & Vector::operator[](int index)
{
	return vector[index];
}

int Vector::N()
{
	return n;
}

void Vector::Add(Vector A)
{
	if(n!=A.N())
	{
		cout<<"ERRO:����ά����ͬ���������"<<endl;
		cout<<"ά���ֱ�Ϊ"<<n<<"��"<<A.N()<<endl;
		cout<<"���������� (";
		print();
		cout<<") + (";
		A.print();
		cout<<")";
		system("pause");
		exit(1);
	}
	int i=0;
	for(i=0;i<n;i++)
		vector[i]=vector[i]+A[i];
}
	

void Vector::Minus(Vector A)
{
	if(n!=A.N())
	{
		cout<<"ERRO:����ά����ͬ���������"<<endl;
		cout<<"ά���ֱ�Ϊ"<<n<<"��"<<A.N()<<endl;
		cout<<"���������� (";
		print();
		cout<<") + (";
		A.print();
		cout<<")";
		system("pause");
		exit(1);
	}
	int i=0;
	for(i=0;i<n;i++)
		vector[i]=vector[i]-A[i];
}

void Vector::NumProd(double a)
{
	int i=0;
	for(i=0;i<n;i++)
		vector[i]=vector[i]*a;
	}
	
double Vector::DotProd(Vector A)
{
	if(n!=A.N())
	{
		cout<<"ERRO:����ά����ͬ���������"<<endl;
		cout<<"ά���ֱ�Ϊ"<<n<<"��"<<A.N()<<endl;
		cout<<"���������� (";
		print();
		cout<<") + (";
		A.print();
		cout<<")";
		system("pause");
		exit(1);
	}
	int i=0,sum=0;
	for(i=0;i<n;i++)
		sum+=vector[i]*A[i];
}

Matrix Vector::Trans()
{
	Matrix result(n,1);
	int i=0;
	for(i=0;i<n;i++)
		result.set(i,1,vector[i]);

}

	double Max();//������������

	void print();//����Ļ�ϴ�ӡ����
	void fprint();//���ļ��д�ӡ����

//Matrix��***************************************************************