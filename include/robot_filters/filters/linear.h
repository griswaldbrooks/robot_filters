/*
 * Software Licence Agreement (MIT)
 *
 * Copyright (c) 2016 Griswald Brooks
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 * TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/*
 * \author Griswald Brooks
 */

#ifndef ROBOT_FILTERS_FILTERS_LINEAR_H
#define ROBOT_FILTERS_FILTERS_LINEAR_H

// C++ Standard Library
#include <vector>

// Boost
#include <boost/shared_ptr.hpp>

// Eigen
#include <Eigen/Core>

namespace robot_filters
{

namespace linear
{

/**
 * \brief Class that describes how coefficients are created for different
 *        families of filters.
 *
 *        Types describe the first order low pass versions of the filter.
 *        These types should cutoff at an angular frequency of 1 radian/sec.
 */
class Type
{

};

/**
 * \brief Butterworth filter family to provide maximal passband flatness.
 */
class Butter : Type
{

};

/**
 * \brief Class that describes pass and stop characteristics for filters.
 */
class Bandform
{
private:
  Type filter_type_;  /// The prototype low pass filter type for the bandform.
};

/**
 * \brief Low-pass filter type.
 */
class LowPass : Bandform
{
  explicit LowPass(double cutoff_frequency);
};

/**
 * \brief High-pass filter type.
 */
class HighPass : Bandform
{
  explicit HighPass(double cutoff_frequency);
};

/**
 * \brief Band-pass filter type.
 */
class BandPass : Bandform
{
  BandPass(double lower_cutoff_frequency, double upper_cutoff_frequency);
};

/**
 * \brief Band-stop filter type.
 */
class BandStop : Bandform
{
  BandStop(double lower_cutoff_frequency, double upper_cutoff_frequency);
};

/**
 * \brief Base class for basic linear filtering.
 */
template<class T = Butter, size_t ORDER = 1>
class Filter
{
public:
  typedef boost::shared_ptr<Filter> Ptr;
  typedef const Ptr ConstPtr;

  /**
   * \brief Things.
   *
   * Should this filter be allowed to be constructed with out coefficients?
   * Check for initialization.
   * Filters should be either able to take coefficients or be given types and
   * frequency parameters.
   * To create higher order, cascade filters.
   */

  Filter(Bandform bandform)
  {
    // Create the filter properties.

    // Get the continuous-time coefficients.

    //
  }

  /**
   * Default Low Pass filter version.
   */
  Filter(double cutoff_frequency)
  {

  }

  /**
   * \brief Method to things.
   */
  void thing();

private:
};

/**
 * \brief Class for filtering of scalar values.
 */
template<size_t ORDER = 1>
class Scalar : public Filter<ORDER>
{
public:
  typedef boost::shared_ptr<Scalar> Ptr;
  typedef const Ptr ConstPtr;

};

/**
 * \brief Class for filtering of quaternions.
 */
template<size_t ORDER = 1>
class Quaternion : public Filter<ORDER>
{
public:
  typedef boost::shared_ptr<Quaternion> Ptr;
  typedef const Ptr ConstPtr;

};

/**
 * \brief Class for filtering of positions.
 */
template<size_t DIM, size_t ORDER>
class Position;

template<size_t ORDER>
class Position<2, ORDER> : public Filter<ORDER>
{
public:
  typedef boost::shared_ptr<Position> Ptr;
  typedef const Ptr ConstPtr;

};

/**
 * \brief Class for filtering of poses.
 */
template<size_t DIM, size_t ORDER>
class Pose;

template<size_t ORDER>
class Pose<2, ORDER> : public Filter<ORDER>
{

};

}  // end namespace linear

}  // end namespace robot_filters

#endif  // ROBOT_FILTERS_FILTERS_LINEAR_H
