#include <iostream>
using namespace std;

class Polygon {
	protected:
		float width;
		float height;
	public:
		Polygon(float w, float h): width(w), height(h) {
			cout << "Constructing Polygon\n";
		};
		Polygon() {};
		virtual float getArea() = 0;
};

class Triangle: public Polygon {
	public:
		Triangle(float w, float h): Polygon(w, h) {}
		float getArea() { return width*height/2.0; }
};

class Rectangle: public Polygon {
		int* arr;
		float cout;
	public:
		Rectangle(float w, float h);//: width(w), height(h) {
		//	arr = new int[10];
		//}
		Rectangle() {count++;}
		~Rectangle();
		float getArea();
		static int count;
};
int Rectangle::count = 0;

int main()
{
	Rectangle* ptr;
	{
		Rectangle rec1(5, 4);
		ptr = &rec1;
		cout << "Area 1: " << (*ptr).getArea() << endl;
		cout << "rectangles so far: " << rec1.count << endl;
	}
	Rectangle rec2(2, 3);
	ptr = &rec2;
	cout << "Area 2: " << ptr->getArea() << endl;
	cout << "Total rectangles created: " << Rectangle::count << endl;
	
	Polygon* pptr = &rec2;
	cout << "Rectangle area: " << pptr->getArea() << endl;
	
	Triangle tr(2, 3);
	pptr = &tr;
	cout << "Triangle area: " << pptr->getArea() << endl;
	
	return 0;
}

Rectangle::Rectangle(float w, float h): Polygon(w, h)
{
	this->cout;
	count++;
}

float Rectangle::getArea()
{
	return this->width * height;
}

Rectangle::~Rectangle()
{
	std::cout << "Deleting rectangle object\n";
	delete[] arr;
}