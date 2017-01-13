// from http://docs.opencv.org/3.0-beta/doc/py_tutorials/py_feature2d/py_orb/py_orb.html#orb
// and from http://www.learnopencv.com/blob-detection-using-opencv-python-c/

#include <iostream>
#include <opencv2/opencv.hpp>
//#include "features2d.hpp"

int main(int argc, char** argv){
  cv::Mat image;
  image = cv::imread( argv[1], cv::IMREAD_GRAYSCALE);

  std::cout << "DECLARING DETECTOR\n";
  cv::Ptr<cv::ORB> detector = cv::ORB::create();
  std::cout << "DECLARING ARRAY OF KEYPOINTS\n";
  std::vector<cv::KeyPoint> keypoints;
  std::cout << "DETECTING FEATURES\n";
  detector->detect(image, keypoints);

  // Draw detected blobs as red circles
  std::cout << "DECLARING MARKED IMAGE\n";
  cv::Mat image_with_keypoints;
  std::cout << "MARKING FEATURES\n";
  cv::drawKeypoints(image, keypoints, image_with_keypoints,
  		    cv::Scalar(0,0,255),
  		    cv::DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

  // Show blobs
  std::cout << "SHOWING FEATURES\n";
  cv::imshow("keypoints", image_with_keypoints);
  cv::waitKey(0);
}
