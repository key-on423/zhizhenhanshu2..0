#include <stdio.h>
//9.��дһ�����򣬳�ʼ��һ��double���͵�3x5��ά���飬ʹ��һ������䳤����ĺ������俽������һ����ά������
//��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�����������Ӧ���ܴ�������N*M����
//void bianchang(int n, int m,double[3][5], double[3][5]);
//int main()
//{
//	int x, y;
//	double shuzi[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	double kaobe[3][5];
//	bianchang(3, 5, kaobe, shuzi);
//	for (x = 0;x < 3;x++)
//	{
//		for (y = 0;y < 5;y++)
//			printf("%5.2lf ", kaobe[x][y]);
//		printf("\n");
//	}
//	printf("\nGooddd!\n");
//	return 0;
//}
//void bianchang(int n, int m, double pz[3][5], double px[3][5])
//{
//	int x, y;
//	for (x = 0;x < n;x++)
//	{
//		for (y = 0;y < m;y++)
//			pz[x][y] = px[x][y];
//	}
//}
//10.��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ���洢����3�������С�Ҳ����˵
//�������1�а�����ֵ��2,4,5,8������2�а�����ֵ��1,0,4,6����ô�ú�����3,4,9,14������3������
//��������3����������һ�������С����һ���򵥵ĳ����в��Ըú���


//void plus(int x[], int y[], int z[], int n);
//int main()
//{
//	int a;
//	int x [4] = { 2,4,5,8 };
//	int y [4] = { 1,0,4,6 };
//	int z [4];
//	plus( x, y, z, 4);
//	for (a = 0;a < 4;a++)
//		printf("%d ", z[a]);
//	return 0;
//}
//void plus(int x[], int y[], int z[], int n)
//{
//	int w;
//	for (w = 0;w < n;w++)
//		z[w] = x[w] + y[w];
//}


//11.��дһ����������һ��int���͵�3x5��ά���飬���ú��ʵ�ֵ��ʼ�������ó����ӡ�����е�ֵ
//Ȼ���ֵ����������ʾ����Ԫ�ص����ǡ���дһ��������ʾ��������ݣ��ڱ�дһ�������Ѹ�Ԫ�ص�ֵ
//�������������������Ժ�������������Ϊ����

//void xianshi(int[][5], int n);
//void fuzhi(int[][5], int[][6], int n);
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int fuz[3][5];
//	printf("��ʼֵΪ��\n");
//	xianshi(arr, 3);
//	printf("\n");
//	fuzhi(arr, fuz, 3);
//	printf("����ʼֵ������Ϊ��\n");
//	xianshi(fuz, 3);
//	return 0;
//}
//
//void xianshi(int arr[][5], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		for (int z = 0;z < 5;z++)
//		printf("%5d ", arr[i][z]);
//		printf("\n");
//	}
//}
//void fuzhi(int arr[][5], int fuz[][5], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		for (int z = 0;z < 5;z++)
//			fuz[i][z] = arr[i][z]*2;
//	}
//}


//��дһ��������ʾ�û�����3������ÿ��������5��double���͵������ó���Ӧ�����������
//a.���û���������ݴ洢��3x5��������
//b.����ÿ�����ݵ�ƽ��ֵ
//c.�����������ݵ�ƽ��ֵ
//d.�ҳ���15�����е����ֵ
//e.��ӡ���

//double pinjun(int[],int n);
//double max1(int[], int[], int[], int n);
//void dayin(int[], int n);
//int main()
//{
//	double suoyoupin, pin1, pin2, pin3,max,zongpin;
//	int x;
//	double arr1[5];
//	double arr2[5];
//	double arr3[5];
//	printf("������3����ÿ���������:\n");
//	for (x = 0;x < 5;x++)
//	{
//		scanf("%lf", &arr1[x]);
//	}
//	for (x = 0;x < 5;x++)
//	{
//		scanf("%lf", &arr2[x]);
//	}
//	for (x = 0;x < 5;x++)
//	{
//		scanf("%lf", &arr3[x]);
//	}
//	printf("��ӡarr1����������Ϊ��\n");
//	dayin(arr1, 5);
//	printf("��ӡarr2����������Ϊ��\n");
//	dayin(arr2, 5);
//	printf("��ӡarr3����������Ϊ��\n");
//	dayin(arr3, 5);
//	pin1 = pinjun(arr1, 5);
//	pin2 = pinjun(arr2, 5);
//	pin3 = pinjun(arr3, 5);
//	zongpin = (pin1 + pin2 + pin3) / 3;
//	max = max1(arr1, arr2, arr3, 5);
//	printf("��һ���ƽ��ֵΪ%.2lf �ڶ����ƽ��ֵΪ%.2lf �������ƽ��ֵΪ%.2lf , �����ƽ��ֵΪ%.2lf\n", pin1, pin2, pin3, zongpin);
//	printf("���������Ϊ��%.2lf", max);
//	return 0;
//}
//double pinjun(double arr1[], int n)
//{
//	double pinjunzhi, sum1;
//	sum1= 0;
//	for (int i = 0;i < n;i++)
//	{
//		sum1 += arr1[i];
//	}
//	pinjunzhi = sum1 / n;
//	return pinjunzhi;
//}
//double max1(double arr1[], double arr2[], double arr3[], int n)
//{
//	double max = arr1[0];
//	for (int i = 0;i < n;i++)
//	{
//		if (max < arr1[i])
//			max = arr1[i];
//	}
//	for (int i = 0;i < n;i++)
//	{
//		if (max < arr2[i])
//			max = arr2[i];
//	}
//	for (int i = 0;i < n;i++)
//	{
//		if (max < arr3[i])
//			max = arr3[i];
//	}
//	return max;
//}
//void dayin(double arr[], int n)
//{
//	int x;
//	for ( x = 0;x < n;x++)
//	{
//		printf("%.2lf ", arr[x]);
//	}
//	printf("\n");
//}