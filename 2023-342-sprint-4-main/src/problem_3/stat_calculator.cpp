#include "stat_calculator.h"

float StatCalculator::mean(const List<float> &data) {
    /*
     * TODO: homework
     */
}

/*
 * based on https://www.calculatorsoup.com/calculators/statistics/percentile-calculator.php
 */
void StatCalculator::percentiles(List<float> &data,
                                 int percentile_target_step,
                                 Map<int, float> &result_map) {
    /*
     * TODO: homework
     */
}

void StatCalculator::sort(List<float> &data) {
    size_t length = data.size();
    if (length < 2) {
        return;
    }
    for (size_t i = 0; i < length; i++) {
        for (size_t j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data, j, j + 1);
            }
        }
    }
}

void StatCalculator::swap(List<float> &data, size_t i, size_t j) {
    float tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}