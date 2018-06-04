#pragma once
#include"MyMat.h"
void GetGrayIntegralImage(unsigned char *Src, int *Integral, int Width, int Height, int Stride); //求解积分图
void GetGrayIntegralImage(int *Src, double *Integral, int Width, int Height, int Stride); //求解积分图
void GetGraySqImage(unsigned char *Src, double *Integral, int Width, int Height, int Stride); //求解平方积分图
void bubbleSort(int* pData, int *idx, int length);
//快速排序
void quickSort(float *s, int l, int r);
void quickSort(int *s, int *b, int l, int r);
void quickSort(float *s, int *b, int l, int r);