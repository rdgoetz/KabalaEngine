/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com), Eric Langkamp             *
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
 **     class SceneObject
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KESCENEOBJECTBASE_H_
#define _KESCENEOBJECTBASE_H_
#ifdef __sgi
#pragma once
#endif



#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"
#include "KEConfig.h"

//#include "OpenSG/OSGBaseTypes.h"


#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGFieldContainerFields.h> // ParentScene type
#include "Project/SceneObject/KEBehaviorFields.h" // Behaviors type
#include "Project/Effect/KEEffectFields.h" // AttachedEffects type
#include <OpenSG/OSGNodeFields.h>       // Node type

#include "KESceneObjectFields.h"

OSG_BEGIN_NAMESPACE

class SceneObject;

//! \brief SceneObject Base Class.

class KE_KABALAENGINE_DLLMAPPING SceneObjectBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SceneObject);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentSceneFieldId = Inherited::NextFieldId,
        BehaviorsFieldId = ParentSceneFieldId + 1,
        AttachedEffectsFieldId = BehaviorsFieldId + 1,
        NodeFieldId = AttachedEffectsFieldId + 1,
        NextFieldId = NodeFieldId + 1
    };

    static const OSG::BitVector ParentSceneFieldMask =
        (TypeTraits<BitVector>::One << ParentSceneFieldId);
    static const OSG::BitVector BehaviorsFieldMask =
        (TypeTraits<BitVector>::One << BehaviorsFieldId);
    static const OSG::BitVector AttachedEffectsFieldMask =
        (TypeTraits<BitVector>::One << AttachedEffectsFieldId);
    static const OSG::BitVector NodeFieldMask =
        (TypeTraits<BitVector>::One << NodeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFParentFieldContainerPtr SFParentSceneType;
    typedef MFUnrecChildBehaviorPtr MFBehaviorsType;
    typedef MFUnrecChildEffectPtr MFAttachedEffectsType;
    typedef SFUnrecNodePtr    SFNodeType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecChildBehaviorPtr *getMFBehaviors      (void) const;
                  MFUnrecChildBehaviorPtr *editMFBehaviors      (void);
            const MFUnrecChildEffectPtr *getMFAttachedEffects(void) const;
                  MFUnrecChildEffectPtr *editMFAttachedEffects(void);
            const SFUnrecNodePtr      *getSFNode           (void) const;
                  SFUnrecNodePtr      *editSFNode           (void);


                  Behavior * getBehaviors      (const UInt32 index) const;

                  Effect * getAttachedEffects(const UInt32 index) const;

                  Node * getNode           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNode           (Node * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToBehaviors           (Behavior * const value   );
    void assignBehaviors          (const MFUnrecChildBehaviorPtr &value);
    void removeFromBehaviors (UInt32               uiIndex );
    void removeObjFromBehaviors(Behavior * const value   );
    void clearBehaviors             (void                         );

    void pushToAttachedEffects           (Effect * const value   );
    void assignAttachedEffects          (const MFUnrecChildEffectPtr &value);
    void removeFromAttachedEffects (UInt32               uiIndex );
    void removeObjFromAttachedEffects(Effect * const value   );
    void clearAttachedEffects            (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SceneObjectTransitPtr  create          (void);
    static  SceneObject           *createEmpty     (void);

    static  SceneObjectTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SceneObject            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SceneObjectTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFParentFieldContainerPtr _sfParentScene;
    MFUnrecChildBehaviorPtr _mfBehaviors;
    MFUnrecChildEffectPtr _mfAttachedEffects;
    SFUnrecNodePtr    _sfNode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SceneObjectBase(void);
    SceneObjectBase(const SceneObjectBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SceneObjectBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SceneObject *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleParentScene     (void) const;
    EditFieldHandlePtr editHandleParentScene    (void);
    GetFieldHandlePtr  getHandleBehaviors       (void) const;
    EditFieldHandlePtr editHandleBehaviors      (void);
    GetFieldHandlePtr  getHandleAttachedEffects (void) const;
    EditFieldHandlePtr editHandleAttachedEffects(void);
    GetFieldHandlePtr  getHandleNode            (void) const;
    EditFieldHandlePtr editHandleNode           (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SceneObjectBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SceneObjectBase &source);
};

typedef SceneObjectBase *SceneObjectBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSCENEOBJECTBASE_H_ */
