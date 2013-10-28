#ifndef MATRIXSVD_H
#define MATRIXSVD_H

//��ͷ�ļ�������SVD�п��ܻ��õ��ľ�����������Լ�����

class Vector
{
private:
	double *vector;
	int n;
public:
	Vector(int num); //����nά����

	double &operator[](int index);//���������е�indexά��ֵ
	int N();//��������ά��

	void Add(Vector A);//��
	void Minus(Vector A);//��
	void NumProd(double a);//����
	double DotProd(Vector A);//���
	Matrix * Trans();//ת��

	void set(int i,double value);//�޸�ֵ

	double Max();//������������

	void print();//����Ļ�ϴ�ӡ����
	void fprint();//���ļ��д�ӡ����

	~Vector();//��������
};

class Matrix
{
private:
	double *matrix;//һά����ָ�룬���Դ������Ԫ��
	int m,n,mn;//m��������n������

public:
	Matrix(int Nnum);//���캯����n*n�ĵ�λ����
	Matrix(int Mnum,int Nnum);//���캯���� Mnum*Nnum�ľ���
	Matrix(bool num);//���ļ��ж�ȡ�������

	double a(int i,int j);//����a_{ij}��ֵ
	double &operator[](int index);//����matrix[index]
	int M();//���ؾ�������
	int N();//���ؾ�������

	void Add(Matrix A);//��
	void Minus(Matrix A);//��
	void NumProd(double a);//����
	Matrix * DotProd(Matrix A);//��
	Matrix * Trans();//ת��

	void set(int i,int j,double value);//�޸�ֵ

	Vector * Row(int k);//ȡ�����k��������
	Vector * Col(int k);//ȡ�����k��������

	Vector * HRow(int k);//Household��ȡ�������ķ���
	Vector * HCol(int k);//Household��ȡ�������ķ���

	double Max();//������������

	void print();//����Ļ�ϴ�ӡ����
	void fprint();//���ļ��д�ӡ����

	~Matrix();//��������

};





#endif