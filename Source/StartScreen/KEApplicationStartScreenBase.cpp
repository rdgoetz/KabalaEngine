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
 **     class ApplicationStartScreen!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>




#include "KEApplicationStartScreenBase.h"
#include "KEApplicationStartScreen.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ApplicationStartScreen
    The ApplicationStartScreen.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ApplicationStartScreen *>::_type("ApplicationStartScreenPtr", "ApplicationModePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ApplicationStartScreen *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ApplicationStartScreen *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ApplicationStartScreen *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ApplicationStartScreenBase::classDescInserter(TypeObject &oType)
{
}


ApplicationStartScreenBase::TypeObject ApplicationStartScreenBase::_type(
    ApplicationStartScreenBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ApplicationStartScreenBase::createEmptyLocal),
    ApplicationStartScreen::initMethod,
    ApplicationStartScreen::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ApplicationStartScreen::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ApplicationStartScreen\"\n"
    "\tparent=\"ApplicationMode\"\n"
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
    "The ApplicationStartScreen.\n"
    "</FieldContainer>\n",
    "The ApplicationStartScreen.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ApplicationStartScreenBase::getType(void)
{
    return _type;
}

const FieldContainerType &ApplicationStartScreenBase::getType(void) const
{
    return _type;
}

UInt32 ApplicationStartScreenBase::getContainerSize(void) const
{
    return sizeof(ApplicationStartScreen);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 ApplicationStartScreenBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ApplicationStartScreenBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ApplicationStartScreenBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
ApplicationStartScreenTransitPtr ApplicationStartScreenBase::createLocal(BitVector bFlags)
{
    ApplicationStartScreenTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ApplicationStartScreen>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ApplicationStartScreenTransitPtr ApplicationStartScreenBase::createDependent(BitVector bFlags)
{
    ApplicationStartScreenTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ApplicationStartScreen>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ApplicationStartScreenTransitPtr ApplicationStartScreenBase::create(void)
{
    ApplicationStartScreenTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ApplicationStartScreen>(tmpPtr);
    }

    return fc;
}

ApplicationStartScreen *ApplicationStartScreenBase::createEmptyLocal(BitVector bFlags)
{
    ApplicationStartScreen *returnValue;

    newPtr<ApplicationStartScreen>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ApplicationStartScreen *ApplicationStartScreenBase::createEmpty(void)
{
    ApplicationStartScreen *returnValue;

    newPtr<ApplicationStartScreen>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ApplicationStartScreenBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ApplicationStartScreen *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ApplicationStartScreen *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ApplicationStartScreenBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ApplicationStartScreen *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ApplicationStartScreen *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ApplicationStartScreenBase::shallowCopy(void) const
{
    ApplicationStartScreen *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ApplicationStartScreen *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ApplicationStartScreenBase::ApplicationStartScreenBase(void) :
    Inherited()
{
}

ApplicationStartScreenBase::ApplicationStartScreenBase(const ApplicationStartScreenBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

ApplicationStartScreenBase::~ApplicationStartScreenBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void ApplicationStartScreenBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ApplicationStartScreen *pThis = static_cast<ApplicationStartScreen *>(this);

    pThis->execSync(static_cast<ApplicationStartScreen *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ApplicationStartScreenBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ApplicationStartScreen *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ApplicationStartScreen *>(pRefAspect),
                  dynamic_cast<const ApplicationStartScreen *>(this));

    return returnValue;
}
#endif

void ApplicationStartScreenBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
