/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com)                             *
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
 **     class SceneObjectContainer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>



#include "Project/SceneObject/KESceneObject.h" // SceneObjects Class

#include "KESceneObjectContainerBase.h"
#include "KESceneObjectContainer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SceneObjectContainer
    The SceneObjectContainer.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var SceneObject *   SceneObjectContainerBase::_mfSceneObjects
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SceneObjectContainer *>::_type("SceneObjectContainerPtr", "SceneObjectPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SceneObjectContainer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SceneObjectContainer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SceneObjectContainer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SceneObjectContainerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecSceneObjectPtr::Description(
        MFUnrecSceneObjectPtr::getClassType(),
        "SceneObjects",
        "",
        SceneObjectsFieldId, SceneObjectsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SceneObjectContainer::editHandleSceneObjects),
        static_cast<FieldGetMethodSig >(&SceneObjectContainer::getHandleSceneObjects));

    oType.addInitialDesc(pDesc);
}


SceneObjectContainerBase::TypeObject SceneObjectContainerBase::_type(
    SceneObjectContainerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SceneObjectContainerBase::createEmptyLocal),
    SceneObjectContainer::initMethod,
    SceneObjectContainer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SceneObjectContainer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SceneObjectContainer\"\n"
    "\tparent=\"SceneObject\"\n"
    "\tlibrary=\"KabalaEngine\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"false\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "\tlibnamespace=\"KE\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "The SceneObjectContainer.\n"
    "\t<Field\n"
    "\t\tname=\"SceneObjects\"\n"
    "\t\ttype=\"SceneObject\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tfieldHeader=\"Project/SceneObject/KESceneObjectFields.h\"\n"
    "\t\ttypeHeader=\"Project/SceneObject/KESceneObject.h\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The SceneObjectContainer.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SceneObjectContainerBase::getType(void)
{
    return _type;
}

const FieldContainerType &SceneObjectContainerBase::getType(void) const
{
    return _type;
}

UInt32 SceneObjectContainerBase::getContainerSize(void) const
{
    return sizeof(SceneObjectContainer);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SceneObjectContainer::_mfSceneObjects field.
const MFUnrecSceneObjectPtr *SceneObjectContainerBase::getMFSceneObjects(void) const
{
    return &_mfSceneObjects;
}

MFUnrecSceneObjectPtr *SceneObjectContainerBase::editMFSceneObjects   (void)
{
    editMField(SceneObjectsFieldMask, _mfSceneObjects);

    return &_mfSceneObjects;
}



void SceneObjectContainerBase::pushToSceneObjects(SceneObject * const value)
{
    editMField(SceneObjectsFieldMask, _mfSceneObjects);

    _mfSceneObjects.push_back(value);
}

void SceneObjectContainerBase::assignSceneObjects(const MFUnrecSceneObjectPtr &value)
{
    MFUnrecSceneObjectPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecSceneObjectPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<SceneObjectContainer *>(this)->clearSceneObjects();

    while(elemIt != elemEnd)
    {
        this->pushToSceneObjects(*elemIt);

        ++elemIt;
    }
}

void SceneObjectContainerBase::removeFromSceneObjects(UInt32 uiIndex)
{
    if(uiIndex < _mfSceneObjects.size())
    {
        editMField(SceneObjectsFieldMask, _mfSceneObjects);

        _mfSceneObjects.erase(uiIndex);
    }
}

void SceneObjectContainerBase::removeObjFromSceneObjects(SceneObject * const value)
{
    Int32 iElemIdx = _mfSceneObjects.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(SceneObjectsFieldMask, _mfSceneObjects);

        _mfSceneObjects.erase(iElemIdx);
    }
}
void SceneObjectContainerBase::clearSceneObjects(void)
{
    editMField(SceneObjectsFieldMask, _mfSceneObjects);


    _mfSceneObjects.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SceneObjectContainerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SceneObjectsFieldMask & whichField))
    {
        returnValue += _mfSceneObjects.getBinSize();
    }

    return returnValue;
}

void SceneObjectContainerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SceneObjectsFieldMask & whichField))
    {
        _mfSceneObjects.copyToBin(pMem);
    }
}

void SceneObjectContainerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SceneObjectsFieldMask & whichField))
    {
        _mfSceneObjects.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SceneObjectContainerTransitPtr SceneObjectContainerBase::createLocal(BitVector bFlags)
{
    SceneObjectContainerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SceneObjectContainer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SceneObjectContainerTransitPtr SceneObjectContainerBase::createDependent(BitVector bFlags)
{
    SceneObjectContainerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SceneObjectContainer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SceneObjectContainerTransitPtr SceneObjectContainerBase::create(void)
{
    SceneObjectContainerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SceneObjectContainer>(tmpPtr);
    }

    return fc;
}

SceneObjectContainer *SceneObjectContainerBase::createEmptyLocal(BitVector bFlags)
{
    SceneObjectContainer *returnValue;

    newPtr<SceneObjectContainer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SceneObjectContainer *SceneObjectContainerBase::createEmpty(void)
{
    SceneObjectContainer *returnValue;

    newPtr<SceneObjectContainer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SceneObjectContainerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SceneObjectContainer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SceneObjectContainer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SceneObjectContainerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SceneObjectContainer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SceneObjectContainer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SceneObjectContainerBase::shallowCopy(void) const
{
    SceneObjectContainer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SceneObjectContainer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SceneObjectContainerBase::SceneObjectContainerBase(void) :
    Inherited(),
    _mfSceneObjects           ()
{
}

SceneObjectContainerBase::SceneObjectContainerBase(const SceneObjectContainerBase &source) :
    Inherited(source),
    _mfSceneObjects           ()
{
}


/*-------------------------- destructors ----------------------------------*/

SceneObjectContainerBase::~SceneObjectContainerBase(void)
{
}

void SceneObjectContainerBase::onCreate(const SceneObjectContainer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SceneObjectContainer *pThis = static_cast<SceneObjectContainer *>(this);

        MFUnrecSceneObjectPtr::const_iterator SceneObjectsIt  =
            source->_mfSceneObjects.begin();
        MFUnrecSceneObjectPtr::const_iterator SceneObjectsEnd =
            source->_mfSceneObjects.end  ();

        while(SceneObjectsIt != SceneObjectsEnd)
        {
            pThis->pushToSceneObjects(*SceneObjectsIt);

            ++SceneObjectsIt;
        }
    }
}

GetFieldHandlePtr SceneObjectContainerBase::getHandleSceneObjects    (void) const
{
    MFUnrecSceneObjectPtr::GetHandlePtr returnValue(
        new  MFUnrecSceneObjectPtr::GetHandle(
             &_mfSceneObjects,
             this->getType().getFieldDesc(SceneObjectsFieldId),
             const_cast<SceneObjectContainerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SceneObjectContainerBase::editHandleSceneObjects   (void)
{
    MFUnrecSceneObjectPtr::EditHandlePtr returnValue(
        new  MFUnrecSceneObjectPtr::EditHandle(
             &_mfSceneObjects,
             this->getType().getFieldDesc(SceneObjectsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&SceneObjectContainer::pushToSceneObjects,
                    static_cast<SceneObjectContainer *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&SceneObjectContainer::removeFromSceneObjects,
                    static_cast<SceneObjectContainer *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&SceneObjectContainer::removeObjFromSceneObjects,
                    static_cast<SceneObjectContainer *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&SceneObjectContainer::clearSceneObjects,
                    static_cast<SceneObjectContainer *>(this)));

    editMField(SceneObjectsFieldMask, _mfSceneObjects);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SceneObjectContainerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SceneObjectContainer *pThis = static_cast<SceneObjectContainer *>(this);

    pThis->execSync(static_cast<SceneObjectContainer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SceneObjectContainerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SceneObjectContainer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SceneObjectContainer *>(pRefAspect),
                  dynamic_cast<const SceneObjectContainer *>(this));

    return returnValue;
}
#endif

void SceneObjectContainerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SceneObjectContainer *>(this)->clearSceneObjects();


}


OSG_END_NAMESPACE
