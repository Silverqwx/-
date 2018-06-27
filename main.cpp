#include <iostream>
#include "QWX_Optimized_Position_Orientation.h"

int main()
{
	Mat img = Mat::eye(40, 40, CV_8UC1);
	line(img, Point(0, 40), Point(40, 0), Scalar(1));
	Mat kernel = Mat::eye(15, 15, CV_8UC1);
	/*cout << img << endl;
	cout << kernel << endl;*/
	QWX_Optimized_Position_Orientation opo;
	opo.QWX_init(kernel, 1, 60);
	float optimized_orientation = opo.QWX_compute(img, 7, 7);
	cout << optimized_orientation << endl;

	return 0;
}