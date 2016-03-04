#include <common.hpp>
#include <data.hpp>
#include <opencv2/core/core.hpp>

class TrainDetector{
  private:
    int numFaces;
    int numNegs;
  public:
    TrainDetector();
    void Train();
    cv::Mat Extract(DataSet data);
};
