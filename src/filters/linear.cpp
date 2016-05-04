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

// C++ Standard Library

// Boost

// Eigen

namespace robot_filters
{

namespace linear
{

Type::Type()
{

}

Eigen::Vector2d Type::getNumerator()
{
  return b_;
}

Eigen::Vector2d Type::getDenominator()
{
  return a_;
}

Butter::Butter()
{
  // Filter coefficients of first order low-pass with a cutoff frequency 
  // of 1 radian/sec.
  b_ << 0.0, 1.0;
  a_ << 1.0, 1.0;
}

Elliptic::Elliptic()
{

}

LowPass::LowPass(double cutoff_frequency)
{

}

HighPass::HighPass(double cutoff_frequency)
{

}
BandPass::BandPass(double lower_cutoff_frequency, double upper_cutoff_frequency)
{

}

BandStop::BandStop(double lower_cutoff_frequency, double upper_cutoff_frequency)
{

}

}  // end namespace linear

}  // end namespace robot_filters
