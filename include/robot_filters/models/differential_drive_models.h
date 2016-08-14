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

#ifndef ROBOT_FILTERS_MODELS_DIFFERENTIAL_DRIVE_MODELS_H
#define ROBOT_FILTERS_MODELS_DIFFERENTIAL_DRIVE_MODELS_H

namespace robot_filters
{

namespace models
{

// Differential Drive Model
// q  = [x, y, theta, dx, dy, dtheta]'
// dq = [ q_4]
//      [ q_5]
//      [ q_6]
//      [-q_6 sin(q_3) (q_4 cos(q3) + q5 sin(q_3_))]
//      [ q_6 cos(q_3) (q_4 cos(q3) + q5 sin(q_3_))]
//      [ 0]
//
// Bu = [ 0]
//      [ 0]
//      [ 0]
//      [ (u_1 + u_2) cos(q_3)/(m*r_w)]
//      [ (u_1 + u_2) sin(q_3)/(m*r_w)]
//      [ (u_1 - u_2)      r_t/(I_zz*r_w)]
//


}  // end namespace models

}  // end namespace robot_filters

#endif  // ROBOT_FILTERS_MODELS_DIFFERENTIAL_DRIVE_MODELS_H
