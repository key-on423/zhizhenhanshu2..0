#include <stdio.h>
//9.编写一个程序，初始化一个double类型的3x5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中
//还要编写一个以变长数组为形参的函数以显示两个数组的内容。这两个函数应该能处理任意N*M数组
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
//10.编写一个函数，把两个数组中相对应的元素相加，然后把结果存储到第3个数组中。也就是说
//如果数组1中包含的值是2,4,5,8，数组2中包含的值是1,0,4,6，那么该函数把3,4,9,14赋给第3个数组
//函数结束3给数组名和一个数组大小。在一个简单的程序中测试该函数


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


//11.编写一个程序，声明一个int类型的3x5二维数组，并用合适的值初始化它。该程序打印数组中的值
//然后各值翻倍，并显示出各元素的心智。编写一个函数显示数组的内容，在编写一个函数把个元素的值
//翻倍。这两个函数都以函数名和行数作为参数

//void xianshi(int[][5], int n);
//void fuzhi(int[][5], int[][6], int n);
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int fuz[3][5];
//	printf("初始值为：\n");
//	xianshi(arr, 3);
//	printf("\n");
//	fuzhi(arr, fuz, 3);
//	printf("各初始值翻倍后为：\n");
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


//编写一个程序，提示用户输入3组数，每组数包含5个double类型的数。该程序应完成下列任务。
//a.把用户输入的数据存储在3x5的数组中
//b.计算每组数据的平均值
//c.计算所有数据的平均值
//d.找出这15数据中的最大值
//e.打印结果

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
//	printf("请输入3组数每组五个数字:\n");
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
//	printf("打印arr1的所有数字为：\n");
//	dayin(arr1, 5);
//	printf("打印arr2的所有数字为：\n");
//	dayin(arr2, 5);
//	printf("打印arr3的所有数字为：\n");
//	dayin(arr3, 5);
//	pin1 = pinjun(arr1, 5);
//	pin2 = pinjun(arr2, 5);
//	pin3 = pinjun(arr3, 5);
//	zongpin = (pin1 + pin2 + pin3) / 3;
//	max = max1(arr1, arr2, arr3, 5);
//	printf("第一组的平均值为%.2lf 第二组的平均值为%.2lf 第三组的平均值为%.2lf , 三组的平均值为%.2lf\n", pin1, pin2, pin3, zongpin);
//	printf("三组最大数为：%.2lf", max);
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