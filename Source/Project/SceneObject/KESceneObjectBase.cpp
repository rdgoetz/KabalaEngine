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
 **     class SceneObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILESCENEOBJECTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "KESceneObjectBase.h"
#include "KESceneObject.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SceneObjectBase::BehaviorsFieldMask = 
    (TypeTraits<BitVector>::One << SceneObjectBase::BehaviorsFieldId);

const OSG::BitVector  SceneObjectBase::NodeFieldMask = 
    (TypeTraits<BitVector>::One << SceneObjectBase::NodeFieldId);

const OSG::BitVector SceneObjectBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var BehaviorPtr     SceneObjectBase::_mfBehaviors
    
*/
/*! \var NodePtr         SceneObjectBase::_sfNode
    
*/

//! SceneObject description

FieldDescription *SceneObjectBase::_desc[] = 
{
    new FieldDescription(MFBehaviorPtr::getClassType(), 
                     "Behaviors", 
                     BehaviorsFieldId, BehaviorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SceneObjectBase::editMFBehaviors)),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "Node", 
                     NodeFieldId, NodeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SceneObjectBase::editSFNode))
};


FieldContainerType SceneObjectBase::_type(
    "SceneObject",
    "AttachmentContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&SceneObjectBase::createEmpty),
    SceneObject::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SceneObjectBase, SceneObjectPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SceneObjectBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SceneObjectBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SceneObjectBase::shallowCopy(void) const 
{ 
    SceneObjectPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SceneObject *>(this)); 

    return returnValue; 
}

UInt32 SceneObjectBase::getContainerSize(void) const 
{ 
    return sizeof(SceneObject); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<SceneObjectBase *>(&other),
                          whichField);
}
#else
void SceneObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SceneObjectBase *) &other, whichField, sInfo);
}
void SceneObjectBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SceneObjectBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfBehaviors.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SceneObjectBase::SceneObjectBase(void) :
    _mfBehaviors              (), 
    _sfNode                   (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SceneObjectBase::SceneObjectBase(const SceneObjectBase &source) :
    _mfBehaviors              (source._mfBehaviors              ), 
    _sfNode                   (source._sfNode                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SceneObjectBase::~SceneObjectBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SceneObjectBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
    {
        returnValue += _mfBehaviors.getBinSize();
    }

    if(FieldBits::NoField != (NodeFieldMask & whichField))
    {
        returnValue += _sfNode.getBinSize();
    }


    return returnValue;
}

void SceneObjectBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
    {
        _mfBehaviors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NodeFieldMask & whichField))
    {
        _sfNode.copyToBin(pMem);
    }


}

void SceneObjectBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
    {
        _mfBehaviors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NodeFieldMask & whichField))
    {
        _sfNode.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneObjectBase::executeSyncImpl(      SceneObjectBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
        _mfBehaviors.syncWith(pOther->_mfBehaviors);

    if(FieldBits::NoField != (NodeFieldMask & whichField))
        _sfNode.syncWith(pOther->_sfNode);


}
#else
void SceneObjectBase::executeSyncImpl(      SceneObjectBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (NodeFieldMask & whichField))
        _sfNode.syncWith(pOther->_sfNode);


    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
        _mfBehaviors.syncWith(pOther->_mfBehaviors, sInfo);


}

void SceneObjectBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (BehaviorsFieldMask & whichField))
        _mfBehaviors.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SceneObjectPtr>::_type("SceneObjectPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SceneObjectPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SceneObjectPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

