#include <iostream>

#include <opencv4/opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#define FILENAME_INDEX (1)

int main(int argc, char **argv) {
  // INFO: Parse the arguments from [1, argc].
  // Take only the filename argument, which should be an image.

  if (argc <= 1) {
    std::cout << "No arguments provided.\n";
    return 0;
  }

  std::string filename{argv[FILENAME_INDEX]};
  cv::Mat img = imread(filename, cv::IMREAD_COLOR);

  if (img.empty()) {
    std::cout << "Could not read the image: " << filename << std::endl;
    return 1;
  }

  cv::imshow("Display window", img);
  int k = cv::waitKey(0);

  return 0;
}
