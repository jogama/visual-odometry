// from http://docs.opencv.org/3.0-beta/doc/py_tutorials/py_feature2d/py_orb/py_orb.html#orb
// and from http://www.learnopencv.com/blob-detection-using-opencv-python-c/

#include  <opencv2/opencv.hpp>
//#include "features2d.hpp"

int main(int argc, char** argv){
  cv::Mat image;
  image = cv::imread( argv[1], 1);

  // We're using OpenCV's home grown "ORB" feature.
  // We should be able to painlessly switch out ORB for
  // a more familiar feature like cv::BRISK, for examlple.
  cv::SimpleBlobDetector detector;
  std::vector<cv::KeyPoint> keypoints;
  detector.detect(image, keypoints);

  // Draw detected blobs as red circles
  cv::Mat image_with_keypoints;
  cv::drawKeypoints(image, keypoints, image_with_keypoints,
  		    cv::Scalar(0,0,255),
  		    cv::DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

  // Show blobs
  cv::imshow("keypoints", image_with_keypoints);
  cv::waitKey(0);
}
