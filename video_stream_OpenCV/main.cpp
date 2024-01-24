#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Create a blue image (100x100 pixels)
    cv::Mat image(100, 100, CV_8UC3, cv::Scalar(255, 0, 0));

    // Show the image
    cv::imshow("OpenCV Test", image);

    // Wait for a key press
    cv::waitKey(0);

    return 0;
}




// #include <opencv2/opencv.hpp>
// #include <iostream>

// using namespace std;

// int main(){
//     cout << "hello";
//     return 0;
// }



// #include <opencv2/opencv.hpp>
// #include <iostream>

// int main() {
//     // Buka kamera
//     cv::VideoCapture cap(0);

//     // Periksa apakah kamera terbuka dengan sukses
//     if (!cap.isOpened()) {
//         std::cerr << "Error: Unable to open camera." << std::endl;
//         return -1;
//     }

//     cv::namedWindow("Video Stream", cv::WINDOW_NORMAL);

//     while (true) {
//         cv::Mat frame;
//         // Ambil frame dari kamera
//         cap >> frame;

//         // Periksa apakah frame diperoleh dengan sukses
//         if (frame.empty()) {
//             std::cerr << "Error: Unable to capture frame." << std::endl;
//             break;
//         }

//         // Tampilkan frame
//         cv::imshow("Video Stream", frame);

//         // Hentikan loop jika tombol 'q' ditekan
//         if (cv::waitKey(1) == 'q') {
//             break;
//         }
//     }

//     // Tutup kamera dan jendela
//     cap.release();
//     cv::destroyAllWindows();

//     return 0;
// }
