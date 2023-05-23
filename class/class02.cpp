#include <iostream>
using namespace std;

/*
 继承
 * */

// 基类 Shape
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}

protected:
	int width;
	int height;
};

// 基类 PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// 派生类
class Rectangle : public Shape, public PaintCost
{ // C++ 支持多继承
public:
	int getArea()
	{
		return (width * height);
	}
};

int main()
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;
	// 输出总花费
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}
