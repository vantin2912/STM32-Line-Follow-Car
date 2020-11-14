/*
 * SimpleKalmanFilter - a Kalman Filter implementation for single variable models.
 * Created by Denys Sene, January, 1, 2017.
 * Released under MIT License - see LICENSE file for details.
 */

#include "SimpleKalmanFilter.h"
#include <math.h>

void Kalman_Init(SimpleKalmanFilter* Kfilter, float mea_e, float est_e, float q)
{
  Kfilter->_err_measure=mea_e;
  Kfilter->_err_estimate=est_e;
  Kfilter->_q = q;
  Kfilter->_current_estimate = 0;
  Kfilter->_last_estimate = 0;
  Kfilter->_kalman_gain = 0;
}

float Kalman_updateEstimate(SimpleKalmanFilter* Kfilter, float mea)
{
  Kfilter->_kalman_gain = Kfilter->_err_estimate/(Kfilter->_err_estimate + Kfilter->_err_measure);
  Kfilter->_current_estimate = Kfilter->_last_estimate + Kfilter->_kalman_gain * (mea - Kfilter->_last_estimate);
  Kfilter->_err_estimate =  (1.0 - Kfilter->_kalman_gain)*Kfilter->_err_estimate + fabs(Kfilter->_last_estimate - Kfilter->_current_estimate)*Kfilter->_q;
  Kfilter->_last_estimate=Kfilter->_current_estimate;

  return Kfilter->_current_estimate;
}

void Kalman_setMeasurementError(SimpleKalmanFilter* Kfilter, float mea_e)
{
  Kfilter->_err_measure=mea_e;
}

void Kalman_setEstimateError(SimpleKalmanFilter* Kfilter, float est_e)
{
  Kfilter->_err_estimate=est_e;
}

void Kalman_setProcessNoise(SimpleKalmanFilter* Kfilter, float q)
{
  Kfilter->_q=q;
}

float Kalman_getKalmanGain(SimpleKalmanFilter* Kfilter) {
  return Kfilter->_kalman_gain;
}

float Kalman_getEstimateError(SimpleKalmanFilter* Kfilter) {
  return Kfilter->_err_estimate;
}
