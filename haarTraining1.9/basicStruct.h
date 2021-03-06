/*************************************************
Date:2018-02-05
Description:基本结构体
**************************************************/
#pragma once
/****************************************************************************************\
*                                  Matrix type (MySize)                                   *
\****************************************************************************************/
typedef struct MySize
{
	int width; /* 矩形宽 */
	int height; /* 矩形高 */
}
MySize;
inline MySize mySize(int width,int height)
{
	MySize temp;
	temp.width = width;
	temp.height = height;
	return temp;
}
/****************************************************************************************\
*                                  Matrix type (MyRect)                                   *
\****************************************************************************************/
typedef struct MyRect
{
	int x; /* 方形的左上角的x-坐标 */
	int y; /* 方形的左上角的y-坐标*/
	int width; /* 宽 */
	int height; /* 高 */
}
MyRect;
