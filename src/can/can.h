/***************************************************************************
 *   Copyright (C) 2008 by Ralf Kaestner                                   *
 *   ralf.kaestner@gmail.com                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef CAN_H
#define CAN_H

/** \defgroup can Generic CANopen Communication
  * \brief Library functions for generic CANopen communication
  * 
  * The generic CANopen communication module provides library functions
  * and interfaces for accessing hardware devices which comply with the
  * CANopen communication standard.
  */

/** \file can.h
  * \ingroup can
  * \brief Generic CANopen-related definitions and module includes
  * \author Ralf Kaestner
  * 
  * This header defines some generic CANopen-related constants and includes
  * the essential module headers.
  */

#include "device.h"
#include "message.h"

#include "emcy.h"
#include "sdo.h"

/** \brief Predefined CAN configuration parser option group
  */
#define CAN_CONFIG_PARSER_OPTION_GROUP            "can"

/** \name Node Identifiers
  * \brief Predefined node identifiers as defined by the CANopen standard
  */
//@{
#define CAN_NODE_ID_MAX                           0x007F
#define CAN_NODE_ID_BROADCAST                     0x0000
//@}

#endif
