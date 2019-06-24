/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2019 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include <SofaOpenglVisual/OglAttribute.inl>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace visualmodel
{

using namespace sofa::defaulttype;


static  int OglFloatAttributeClass = core::RegisterObject ( "OglFloatAttribute" ).add< OglFloatAttribute >();
static  int OglFloat2AttributeClass = core::RegisterObject ( "OglFloat2Attribute" ).add< OglFloat2Attribute >();
static  int OglFloat3AttributeClass = core::RegisterObject ( "OglFloat3Attribute" ).add< OglFloat3Attribute >();
static  int OglFloat4AttributeClass = core::RegisterObject ( "OglFloat4Attribute" ).add< OglFloat4Attribute >();

static int OglIntAttributeClass = core::RegisterObject ( "OglIntAttribute" ).add< OglIntAttribute >();
static int OglInt2AttributeClass = core::RegisterObject ( "OglInt2Attribute" ).add< OglInt2Attribute >();
static int OglInt3AttributeClass = core::RegisterObject ( "OglInt3Attribute" ).add< OglInt3Attribute >();
static int OglInt4AttributeClass = core::RegisterObject ( "OglInt4Attribute" ).add< OglInt4Attribute >();

static int OglUIntAttributeClass = core::RegisterObject ( "OglUIntAttribute" ).add< OglUIntAttribute >();
static int OglUInt2AttributeClass = core::RegisterObject ( "OglUInt2Attribute" ).add< OglUInt2Attribute >();
static int OglUInt3AttributeClass = core::RegisterObject ( "OglUInt3Attribute" ).add< OglUInt3Attribute >();
static int OglUInt4AttributeClass = core::RegisterObject ( "OglUInt4Attribute" ).add< OglUInt4Attribute >();

} // namespace visual

} // namespace component

} // namespace sofa