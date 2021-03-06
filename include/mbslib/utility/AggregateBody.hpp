/*
 * Copyright (C) 2015
 * Simulation, Systems Optimization and Robotics Group (SIM)
 * Technische Universitaet Darmstadt
 * Hochschulstr. 10
 * 64289 Darmstadt, Germany
 * www.sim.tu-darmstadt.de
 *
 * This file is part of the MBSlib.
 * All rights are reserved by the copyright holder.
 *
 * MBSlib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation in version 3 of the License.
 *
 * The MBSlib is distributed WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with MBSlib.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <mbslib/utility/types.hpp>

#ifndef __MBSLIB_AGGREGATE_BODY_HPP__
#define __MBSLIB_AGGREGATE_BODY_HPP__

#include <mbslib/utility/types.hpp>

namespace mbslib {
/**
 * \brief description of an aggregate body.
 */
class AggregateBody {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    /// Constructor
    AggregateBody();

    /// Destructor
    virtual ~AggregateBody();

    /// Mass.
    TScalar m;

    /// Center of mass.
    TVector3 com;

    /// Inertia at CoM.
    TMatrix3x3 I;
}; //class AggregateBody
}

#endif // __MBSLIB_AGGREGATE_BODY_HPP__
