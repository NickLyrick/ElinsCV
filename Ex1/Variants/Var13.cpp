// opencv header files
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp" 
#include "Var13.h"

// namespaces declaration
using namespace cv;
using namespace std; 

void var13()
{
    Mat img = imread("Lenna.png");

    if (!img.data)
        printf("No image data \n");
    else {
	    // Добавляем текст
	    putText(img,"yaskovMC",Point(img.cols/4,img.rows/4*3),FONT_HERSHEY_PLAIN,3,Scalar(0,255,0),2);

	    // Добавляем три крестика
	    drawMarker(img,Point(img.cols/2-40,img.rows/2),Scalar(255,0,0),MARKER_CROSS,40,2);
	    drawMarker(img,Point(img.cols/2,img.rows/2),Scalar(0,255,0),MARKER_CROSS,40,2);
	    drawMarker(img,Point(img.cols/2+40,img.rows/2),Scalar(0,0,255),MARKER_CROSS,40,2);

	    // отображаем в окне
		namedWindow("Display");
		imshow("Display",img);

		// сохранение
		imwrite("Var13.png",img);

		waitKey(0);	
    }
} 
