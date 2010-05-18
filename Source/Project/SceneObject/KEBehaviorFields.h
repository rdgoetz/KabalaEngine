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
 *****************************************************************************
\*****************************************************************************/


#ifndef _KEBEHAVIORFIELDS_H_
#define _KEBEHAVIORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGFieldContainerFields.h>
#include <OpenSG/OSGPointerSField.h>
#include <OpenSG/OSGPointerMField.h>


OSG_BEGIN_NAMESPACE

class Behavior;

OSG_GEN_CONTAINERPTR(Behavior);

/*! \ingroup GrpKabalaEngineFieldTraits
    \ingroup GrpLibOSGKabalaEngine
 */
template <>
struct FieldTraits<Behavior *> :
    public FieldTraitsFCPtrBase<Behavior *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Behavior *>  Self;

    enum                        { Convertible = NotConvertible };

    static KE_KABALAENGINE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBehaviorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBehaviorPtr"; }
};

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBehaviorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Behavior *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBehaviorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<Behavior *,
                      RecordedRefCountPolicy  > SFRecBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<Behavior *,
                      UnrecordedRefCountPolicy> SFUnrecBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<Behavior *,
                      WeakRefCountPolicy      > SFWeakBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<Behavior *,
                      NoRefCountPolicy        > SFUncountedBehaviorPtr;


/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<Behavior *,
                      RecordedRefCountPolicy  > MFRecBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<Behavior *,
                      UnrecordedRefCountPolicy> MFUnrecBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<Behavior *,
                      WeakRefCountPolicy      > MFWeakBehaviorPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<Behavior *,
                      NoRefCountPolicy        > MFUncountedBehaviorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFRecBehaviorPtr : 
    public PointerSField<Behavior *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUnrecBehaviorPtr : 
    public PointerSField<Behavior *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFWeakBehaviorPtr :
    public PointerSField<Behavior *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUncountedBehaviorPtr :
    public PointerSField<Behavior *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFRecBehaviorPtr :
    public PointerMField<Behavior *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUnrecBehaviorPtr :
    public PointerMField<Behavior *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFWeakBehaviorPtr :
    public PointerMField<Behavior *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUncountedBehaviorPtr :
    public PointerMField<Behavior *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _KEBEHAVIORFIELDS_H_ */
