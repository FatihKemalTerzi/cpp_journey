#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

/*void main() {
	
	string path = "images.jpeg";
	Mat img = imread(path);
	imshow("Frame", img);
	waitKey(0);
	
}*/

int main() {
	VideoCapture video(0);
	Mat img;
	while (true) {
		video.read(img);
		imshow("Frame", img);
		waitKey(1);
	}
	return 0;
}