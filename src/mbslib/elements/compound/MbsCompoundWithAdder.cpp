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

/**
 * \file mbslib/elements/compound/MbsCompoundWithAdder.cpp
 * Definition of mbslib::MbsCompoundWithAdder
 */

#include <mbslib/elements/compound/MbsCompoundWithAdder.hpp>

using namespace mbslib;

MbsCompoundWithAdder::MbsCompoundWithAdder(const std::string & name)
    : MbsCompound(name) {
}

void MbsCompoundWithAdder::addElement(MbsObject * element) {
    MbsCompound::addElement(element);
}

void MbsCompoundWithAdder::addElement(MbsObject & element) {
    MbsCompound::addElement(&element);
}
MbsCompoundWithAdder::~MbsCompoundWithAdder() {
}
