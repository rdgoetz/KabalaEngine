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


#ifndef _KEBEHAVIORFACTORYFIELDS_H_
#define _KEBEHAVIORFACTORYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGFieldContainerFields.h>
#include <OpenSG/OSGPointerSField.h>
#include <OpenSG/OSGPointerMField.h>


OSG_BEGIN_NAMESPACE

class BehaviorFactory;

OSG_GEN_CONTAINERPTR(BehaviorFactory);

/*! \ingroup GrpKabalaEngineFieldTraits
    \ingroup GrpLibOSGKabalaEngine
 */
template <>
struct FieldTraits<BehaviorFactory *> :
    public FieldTraitsFCPtrBase<BehaviorFactory *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BehaviorFactory *>  Self;

    enum                        { Convertible = NotConvertible };

    static KE_KABALAENGINE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBehaviorFactoryPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBehaviorFactoryPtr"; }
};

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBehaviorFactoryPtr"; 
}

template<> inline
const Char8 *FieldTraits<BehaviorFactory *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBehaviorFactoryPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<BehaviorFactory *,
                      RecordedRefCountPolicy  > SFRecBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<BehaviorFactory *,
                      UnrecordedRefCountPolicy> SFUnrecBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<BehaviorFactory *,
                      WeakRefCountPolicy      > SFWeakBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<BehaviorFactory *,
                      NoRefCountPolicy        > SFUncountedBehaviorFactoryPtr;


/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<BehaviorFactory *,
                      RecordedRefCountPolicy  > MFRecBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<BehaviorFactory *,
                      UnrecordedRefCountPolicy> MFUnrecBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<BehaviorFactory *,
                      WeakRefCountPolicy      > MFWeakBehaviorFactoryPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<BehaviorFactory *,
                      NoRefCountPolicy        > MFUncountedBehaviorFactoryPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFRecBehaviorFactoryPtr : 
    public PointerSField<BehaviorFactory *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUnrecBehaviorFactoryPtr : 
    public PointerSField<BehaviorFactory *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFWeakBehaviorFactoryPtr :
    public PointerSField<BehaviorFactory *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUncountedBehaviorFactoryPtr :
    public PointerSField<BehaviorFactory *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFRecBehaviorFactoryPtr :
    public PointerMField<BehaviorFactory *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUnrecBehaviorFactoryPtr :
    public PointerMField<BehaviorFactory *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFWeakBehaviorFactoryPtr :
    public PointerMField<BehaviorFactory *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUncountedBehaviorFactoryPtr :
    public PointerMField<BehaviorFactory *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _KEBEHAVIORFACTORYFIELDS_H_ */
