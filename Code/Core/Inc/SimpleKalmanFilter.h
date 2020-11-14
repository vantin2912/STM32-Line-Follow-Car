/*
 * SimpleKalmanFilter - a Kalman Filter implementation for single variable models.
 * Created by Denys Sene, January, 1, 2017.
 * Released under MIT License - see LICENSE file for details.
 */

#ifndef SimpleKalmanFilter_h
#define SimpleKalmanFilter_h

typedef struct SimpleKalmanFilter
{
  float _err_measure;
  float _err_estimate;
  float _q;
  float _current_estimate;
  float _last_estimate;
  float _kalman_gain;
} SimpleKalmanFilter;

void Kalman_Init(SimpleKalmanFilter* Kfilter,float mea_e, float est_e, float q );
float Kalman_updateEstimate(SimpleKalmanFilter* Kfilter, float mea);
void Kalman_setMeasurementError(SimpleKalmanFilter* Kfilter, float mea_e);
void Kalman_setEstimateError(SimpleKalmanFilter* Kfilter, float est_e);
void Kalman_setProcessNoise(SimpleKalmanFilter* Kfilter, float q);
float Kalman_getKalmanGain(SimpleKalmanFilter* Kfilter);
float Kalman_getEstimateError(SimpleKalmanFilter* Kfilter);


#endif
