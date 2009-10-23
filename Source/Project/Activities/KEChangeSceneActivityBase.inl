/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *                                                                           *
 *   contact: djkabala@gmail.com                                             *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ChangeSceneActivity!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ChangeSceneActivityBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ChangeSceneActivityBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ChangeSceneActivityPtr ChangeSceneActivityBase::create(void) 
{
    ChangeSceneActivityPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ChangeSceneActivityPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ChangeSceneActivityPtr ChangeSceneActivityBase::createEmpty(void) 
{ 
    ChangeSceneActivityPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ChangeSceneActivity::_sfGotoScene field.
inline
const SFScenePtr *ChangeSceneActivityBase::getSFGotoScene(void) const
{
    return &_sfGotoScene;
}

//! Get the ChangeSceneActivity::_sfGotoScene field.
inline
SFScenePtr *ChangeSceneActivityBase::editSFGotoScene(void)
{
    return &_sfGotoScene;
}


//! Get the value of the ChangeSceneActivity::_sfGotoScene field.
inline
ScenePtr &ChangeSceneActivityBase::editGotoScene(void)
{
    return _sfGotoScene.getValue();
}

//! Get the value of the ChangeSceneActivity::_sfGotoScene field.
inline
const ScenePtr &ChangeSceneActivityBase::getGotoScene(void) const
{
    return _sfGotoScene.getValue();
}

//! Set the value of the ChangeSceneActivity::_sfGotoScene field.
inline
void ChangeSceneActivityBase::setGotoScene(const ScenePtr &value)
{
    _sfGotoScene.setValue(value);
}


OSG_END_NAMESPACE