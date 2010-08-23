/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *  authors: David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)  *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published            *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU General Public                 *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#define KE_COMPILEKABALAENGINELIB

#include <OpenSG/OSGConfig.h>

#include "KEGeoMergeGraphOpCommand.h"
#include <OpenSG/OSGSceneFileHandler.h>
#include <OpenSG/OSGFCFileHandler.h>
#include <OpenSG/OSGWindowEventProducer.h>
#include <OpenSG/OSGGeometryMergeGraphOp.h>

#include <boost/filesystem/convenience.hpp>
#include <boost/algorithm/string.hpp>

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ExportModelCommand
A ExportModelCommand. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

CommandType GeoMergeGraphOpCommand::_Type("GeoMergeGraphOpCommand", "Command");

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

GeoMergeGraphOpCommandPtr GeoMergeGraphOpCommand::create(NodeUnrecPtr RootNode)
{
	return RefPtr(new GeoMergeGraphOpCommand(RootNode));
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void GeoMergeGraphOpCommand::execute(void)
{
	std::string maxMerge = MainApplication::the()->getSettings().get<std::string>
							("player.debugger.geo_merge_graph_op.max_geos_to_merge");

	OSG::GeometryMergeGraphOpRefPtr TheGraphOp = OSG::GeometryMergeGraphOp::create();

	std::string params = std::string("mergeThreshold=") + maxMerge;
	TheGraphOp->setParams(params);

	TheGraphOp->traverse(_RootNode);
}

std::string GeoMergeGraphOpCommand::getCommandDescription(void) const
{
	std::string Description("Attempts to merge sibling geometries");
	
	return Description;
}

std::string GeoMergeGraphOpCommand::getPresentationName(void) const
{
	return getCommandDescription();
}

const CommandType &GeoMergeGraphOpCommand::getType(void) const
{
	return _Type;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

GeoMergeGraphOpCommand::~GeoMergeGraphOpCommand(void)
{
}

/*----------------------------- class specific ----------------------------*/

void GeoMergeGraphOpCommand::operator =(const GeoMergeGraphOpCommand& source)
{
}

