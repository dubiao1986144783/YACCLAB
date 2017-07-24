#include "labeling_algorithms.h"

cv::Mat1b Labeling::img_;

LabelingMapSingleton& LabelingMapSingleton::GetInstance()
{
    static LabelingMapSingleton instance;	// Guaranteed to be destroyed.
                                            // Instantiated on first use.
    return instance;
}

Labeling* LabelingMapSingleton::GetLabeling(const std::string& s)
{
    return LabelingMapSingleton::GetInstance().data_.at(s);
}

std::string Step(StepType n_step) {

    switch (n_step)
    {
    case ALLOC:
        return "Alloc";
        break;
    case DEALLOC:
        return "Dealloc";
        break;
    case FIRST_SCAN:
        return "First Scan";
        break;
    case SECOND_SCAN:
        return "Second Scan";
        break;
    case SINGLE_SCAN:
        return "Single Scan";
        break;
    }

    return "";
}

