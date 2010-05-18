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
 **     class LuaGraphTreeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LuaGraphTreeModelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LuaGraphTreeModelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LuaGraphTreeModelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LuaGraphTreeModel::_sfInternalRoot field.

inline
BoostPath &LuaGraphTreeModelBase::editInternalRoot(void)
{
    editSField(InternalRootFieldMask);

    return _sfInternalRoot.getValue();
}

//! Get the value of the LuaGraphTreeModel::_sfInternalRoot field.
inline
const BoostPath &LuaGraphTreeModelBase::getInternalRoot(void) const
{
    return _sfInternalRoot.getValue();
}

//! Set the value of the LuaGraphTreeModel::_sfInternalRoot field.
inline
void LuaGraphTreeModelBase::setInternalRoot(const BoostPath &value)
{
    editSField(InternalRootFieldMask);

    _sfInternalRoot.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LuaGraphTreeModelBase::execSync (      LuaGraphTreeModelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (InternalRootFieldMask & whichField))
        _sfInternalRoot.syncWith(pFrom->_sfInternalRoot);
}
#endif


inline
const Char8 *LuaGraphTreeModelBase::getClassname(void)
{
    return "LuaGraphTreeModel";
}
OSG_GEN_CONTAINERPTR(LuaGraphTreeModel);

OSG_END_NAMESPACE

