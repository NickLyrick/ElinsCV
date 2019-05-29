// opencv header files
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp" 
#include "Var1.h"

#include <iostream>

// namespaces declaration
using namespace cv;
using namespace std; 

void var1()
{
    Mat image, sub_image, imageRotated;
    image = imread("../Lenna.png");

    putText(image, "sh-sergey", Point(100, 100), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(0, 255, 0), 3);
    circle(image, Point(200, 200), 40, Scalar(0, 255, 0), 4);

    Rect ROI = Rect(0, 0, image.cols / 4, image.rows / 4);
    sub_image = image(ROI);

    namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
    imshow("Original Image", image);

    Mat matRotation = getRotationMatrix2D(Point(image.cols / 8, image.rows / 8), 10, 1);
    warpAffine(sub_image, imageRotated, matRotation, sub_image.size(), INTER_LINEAR, BORDER_CONSTANT);

    namedWindow("Rotated Image", CV_WINDOW_AUTOSIZE);
    imshow("Rotated Image", imageRotated);

    imwrite("../Var1.png", image);

    waitKey(0);
} 
