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
 **     class Scene
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KESCENEBASE_H_
#define _KESCENEBASE_H_
#ifdef __sgi
#pragma once
#endif



#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

//#include "OpenSG/OSGBaseTypes.h"

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include "Project/KEProjectFields.h"    // InternalParentProject type
#include <OpenSG/OSGViewportFields.h>   // Viewports type
#include <OpenSG/OSGBackgroundFields.h> // Backgrounds type
#include <OpenSG/OSGUIDrawingSurfaceFields.h> // UIDrawingSurfaces type
#include <OpenSG/OSGForegroundFields.h> // Foregrounds type
#include <OpenSG/OSGNodeFields.h>       // ModelNodes type
#include <OpenSG/OSGTransformFields.h>  // RootCore type
#include <OpenSG/OSGCameraFields.h>     // Cameras type
#include <OpenSG/OSGAnimationFields.h>  // Animations type
#include <OpenSG/OSGParticleSystemFields.h> // ParticleSystems type
#include <OpenSG/OSGBoostPathFields.h>  // LuaModule type
#include <OpenSG/OSGPhysicsHandlerFields.h> // PhysicsHandler type
#include <OpenSG/OSGPhysicsWorldFields.h> // PhysicsWorld type
#include <OpenSG/OSGSysFields.h>        // GenericMethodIDs type

#include "KESceneFields.h"

//Event Producer Headers
#include <OpenSG/OSGEventProducer.h>
#include <OpenSG/OSGEventProducerType.h>
#include <OpenSG/OSGMethodDescription.h>
#include <OpenSG/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class Scene;

//! \brief Scene Base Class.

class KE_KABALAENGINE_DLLMAPPING SceneBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Scene);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InternalParentProjectFieldId = Inherited::NextFieldId,
        ViewportsFieldId = InternalParentProjectFieldId + 1,
        BackgroundsFieldId = ViewportsFieldId + 1,
        UIDrawingSurfacesFieldId = BackgroundsFieldId + 1,
        InitialBackgroundFieldId = UIDrawingSurfacesFieldId + 1,
        ForegroundsFieldId = InitialBackgroundFieldId + 1,
        InitialForegroundsFieldId = ForegroundsFieldId + 1,
        ModelNodesFieldId = InitialForegroundsFieldId + 1,
        InitialModelNodesFieldId = ModelNodesFieldId + 1,
        RootFieldId = InitialModelNodesFieldId + 1,
        RootCoreFieldId = RootFieldId + 1,
        DefaultCameraBeaconFieldId = RootCoreFieldId + 1,
        DefaultCameraBeaconCoreFieldId = DefaultCameraBeaconFieldId + 1,
        CamerasFieldId = DefaultCameraBeaconCoreFieldId + 1,
        InitialCameraFieldId = CamerasFieldId + 1,
        AnimationsFieldId = InitialCameraFieldId + 1,
        InitialAnimationsFieldId = AnimationsFieldId + 1,
        ParticleSystemsFieldId = InitialAnimationsFieldId + 1,
        InitialParticleSystemsFieldId = ParticleSystemsFieldId + 1,
        LuaModuleFieldId = InitialParticleSystemsFieldId + 1,
        PhysicsHandlerFieldId = LuaModuleFieldId + 1,
        PhysicsWorldFieldId = PhysicsHandlerFieldId + 1,
        GenericMethodIDsFieldId = PhysicsWorldFieldId + 1,
        EventProducerFieldId = GenericMethodIDsFieldId + 1,
        NextFieldId = EventProducerFieldId + 1
    };

    static const OSG::BitVector InternalParentProjectFieldMask =
        (TypeTraits<BitVector>::One << InternalParentProjectFieldId);
    static const OSG::BitVector ViewportsFieldMask =
        (TypeTraits<BitVector>::One << ViewportsFieldId);
    static const OSG::BitVector BackgroundsFieldMask =
        (TypeTraits<BitVector>::One << BackgroundsFieldId);
    static const OSG::BitVector UIDrawingSurfacesFieldMask =
        (TypeTraits<BitVector>::One << UIDrawingSurfacesFieldId);
    static const OSG::BitVector InitialBackgroundFieldMask =
        (TypeTraits<BitVector>::One << InitialBackgroundFieldId);
    static const OSG::BitVector ForegroundsFieldMask =
        (TypeTraits<BitVector>::One << ForegroundsFieldId);
    static const OSG::BitVector InitialForegroundsFieldMask =
        (TypeTraits<BitVector>::One << InitialForegroundsFieldId);
    static const OSG::BitVector ModelNodesFieldMask =
        (TypeTraits<BitVector>::One << ModelNodesFieldId);
    static const OSG::BitVector InitialModelNodesFieldMask =
        (TypeTraits<BitVector>::One << InitialModelNodesFieldId);
    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector RootCoreFieldMask =
        (TypeTraits<BitVector>::One << RootCoreFieldId);
    static const OSG::BitVector DefaultCameraBeaconFieldMask =
        (TypeTraits<BitVector>::One << DefaultCameraBeaconFieldId);
    static const OSG::BitVector DefaultCameraBeaconCoreFieldMask =
        (TypeTraits<BitVector>::One << DefaultCameraBeaconCoreFieldId);
    static const OSG::BitVector CamerasFieldMask =
        (TypeTraits<BitVector>::One << CamerasFieldId);
    static const OSG::BitVector InitialCameraFieldMask =
        (TypeTraits<BitVector>::One << InitialCameraFieldId);
    static const OSG::BitVector AnimationsFieldMask =
        (TypeTraits<BitVector>::One << AnimationsFieldId);
    static const OSG::BitVector InitialAnimationsFieldMask =
        (TypeTraits<BitVector>::One << InitialAnimationsFieldId);
    static const OSG::BitVector ParticleSystemsFieldMask =
        (TypeTraits<BitVector>::One << ParticleSystemsFieldId);
    static const OSG::BitVector InitialParticleSystemsFieldMask =
        (TypeTraits<BitVector>::One << InitialParticleSystemsFieldId);
    static const OSG::BitVector LuaModuleFieldMask =
        (TypeTraits<BitVector>::One << LuaModuleFieldId);
    static const OSG::BitVector PhysicsHandlerFieldMask =
        (TypeTraits<BitVector>::One << PhysicsHandlerFieldId);
    static const OSG::BitVector PhysicsWorldFieldMask =
        (TypeTraits<BitVector>::One << PhysicsWorldFieldId);
    static const OSG::BitVector GenericMethodIDsFieldMask =
        (TypeTraits<BitVector>::One << GenericMethodIDsFieldId);
    static const OSG::BitVector EventProducerFieldMask =
        (TypeTraits<BitVector>::One << EventProducerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecProjectPtr SFInternalParentProjectType;
    typedef MFUnrecViewportPtr MFViewportsType;
    typedef MFUnrecBackgroundPtr MFBackgroundsType;
    typedef MFUnrecUIDrawingSurfacePtr MFUIDrawingSurfacesType;
    typedef SFUnrecBackgroundPtr SFInitialBackgroundType;
    typedef MFUnrecForegroundPtr MFForegroundsType;
    typedef MFUnrecForegroundPtr MFInitialForegroundsType;
    typedef MFUnrecNodePtr    MFModelNodesType;
    typedef MFUnrecNodePtr    MFInitialModelNodesType;
    typedef SFUnrecNodePtr    SFRootType;
    typedef SFUnrecTransformPtr SFRootCoreType;
    typedef SFUnrecNodePtr    SFDefaultCameraBeaconType;
    typedef SFUnrecTransformPtr SFDefaultCameraBeaconCoreType;
    typedef MFUnrecCameraPtr  MFCamerasType;
    typedef SFUnrecCameraPtr  SFInitialCameraType;
    typedef MFUnrecAnimationPtr MFAnimationsType;
    typedef MFUnrecAnimationPtr MFInitialAnimationsType;
    typedef MFUnrecParticleSystemPtr MFParticleSystemsType;
    typedef MFUnrecParticleSystemPtr MFInitialParticleSystemsType;
    typedef SFBoostPath       SFLuaModuleType;
    typedef SFUnrecPhysicsHandlerPtr SFPhysicsHandlerType;
    typedef SFUnrecPhysicsWorldPtr SFPhysicsWorldType;
    typedef SFUInt32          SFGenericMethodIDsType;
    typedef SFEventProducerPtr          SFEventProducerType;

    enum
    {
        SceneEnteredMethodId = 1,
        SceneExitedMethodId = SceneEnteredMethodId + 1,
        SceneStartedMethodId = SceneExitedMethodId + 1,
        SceneEndedMethodId = SceneStartedMethodId + 1,
        SceneResetMethodId = SceneEndedMethodId + 1,
        WindowOpenedMethodId = SceneResetMethodId + 1,
        WindowClosingMethodId = WindowOpenedMethodId + 1,
        WindowClosedMethodId = WindowClosingMethodId + 1,
        WindowIconifiedMethodId = WindowClosedMethodId + 1,
        WindowDeiconifiedMethodId = WindowIconifiedMethodId + 1,
        WindowActivatedMethodId = WindowDeiconifiedMethodId + 1,
        WindowDeactivatedMethodId = WindowActivatedMethodId + 1,
        WindowEnteredMethodId = WindowDeactivatedMethodId + 1,
        WindowExitedMethodId = WindowEnteredMethodId + 1,
        MouseClickedMethodId = WindowExitedMethodId + 1,
        MouseEnteredMethodId = MouseClickedMethodId + 1,
        MouseExitedMethodId = MouseEnteredMethodId + 1,
        MousePressedMethodId = MouseExitedMethodId + 1,
        MouseReleasedMethodId = MousePressedMethodId + 1,
        MouseMovedMethodId = MouseReleasedMethodId + 1,
        MouseDraggedMethodId = MouseMovedMethodId + 1,
        MouseWheelMovedMethodId = MouseDraggedMethodId + 1,
        KeyPressedMethodId = MouseWheelMovedMethodId + 1,
        KeyReleasedMethodId = KeyPressedMethodId + 1,
        KeyTypedMethodId = KeyReleasedMethodId + 1,
        UpdateMethodId = KeyTypedMethodId + 1,
        NextProducedMethodId = UpdateMethodId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

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

            const MFUnrecViewportPtr  *getMFViewports      (void) const;
                  MFUnrecViewportPtr  *editMFViewports      (void);
            const MFUnrecBackgroundPtr *getMFBackgrounds    (void) const;
                  MFUnrecBackgroundPtr *editMFBackgrounds    (void);
            const MFUnrecUIDrawingSurfacePtr *getMFUIDrawingSurfaces(void) const;
                  MFUnrecUIDrawingSurfacePtr *editMFUIDrawingSurfaces(void);
            const SFUnrecBackgroundPtr *getSFInitialBackground(void) const;
                  SFUnrecBackgroundPtr *editSFInitialBackground(void);
            const MFUnrecForegroundPtr *getMFForegrounds    (void) const;
                  MFUnrecForegroundPtr *editMFForegrounds    (void);
            const MFUnrecForegroundPtr *getMFInitialForegrounds(void) const;
                  MFUnrecForegroundPtr *editMFInitialForegrounds(void);
            const MFUnrecNodePtr      *getMFModelNodes     (void) const;
                  MFUnrecNodePtr      *editMFModelNodes     (void);
            const MFUnrecNodePtr      *getMFInitialModelNodes(void) const;
                  MFUnrecNodePtr      *editMFInitialModelNodes(void);
            const MFUnrecCameraPtr    *getMFCameras        (void) const;
                  MFUnrecCameraPtr    *editMFCameras        (void);
            const SFUnrecCameraPtr    *getSFInitialCamera  (void) const;
                  SFUnrecCameraPtr    *editSFInitialCamera  (void);
            const MFUnrecAnimationPtr *getMFAnimations     (void) const;
                  MFUnrecAnimationPtr *editMFAnimations     (void);
            const MFUnrecAnimationPtr *getMFInitialAnimations(void) const;
                  MFUnrecAnimationPtr *editMFInitialAnimations(void);
            const MFUnrecParticleSystemPtr *getMFParticleSystems(void) const;
                  MFUnrecParticleSystemPtr *editMFParticleSystems(void);
            const MFUnrecParticleSystemPtr *getMFInitialParticleSystems(void) const;
                  MFUnrecParticleSystemPtr *editMFInitialParticleSystems(void);

                  SFBoostPath         *editSFLuaModule      (void);
            const SFBoostPath         *getSFLuaModule       (void) const;
            const SFUnrecPhysicsHandlerPtr *getSFPhysicsHandler (void) const;
                  SFUnrecPhysicsHandlerPtr *editSFPhysicsHandler (void);
            const SFUnrecPhysicsWorldPtr *getSFPhysicsWorld   (void) const;
                  SFUnrecPhysicsWorldPtr *editSFPhysicsWorld   (void);


                  Viewport * getViewports      (const UInt32 index) const;

                  Background * getBackgrounds    (const UInt32 index) const;

                  UIDrawingSurface * getUIDrawingSurfaces(const UInt32 index) const;

                  Background * getInitialBackground(void) const;

                  Foreground * getForegrounds    (const UInt32 index) const;

                  Foreground * getInitialForegrounds(const UInt32 index) const;

                  Node * getModelNodes     (const UInt32 index) const;

                  Node * getInitialModelNodes(const UInt32 index) const;

                  Camera * getCameras        (const UInt32 index) const;

                  Camera * getInitialCamera  (void) const;

                  Animation * getAnimations     (const UInt32 index) const;

                  Animation * getInitialAnimations(const UInt32 index) const;

                  ParticleSystem * getParticleSystems(const UInt32 index) const;

                  ParticleSystem * getInitialParticleSystems(const UInt32 index) const;

                  BoostPath           &editLuaModule      (void);
            const BoostPath           &getLuaModule       (void) const;

                  PhysicsHandler * getPhysicsHandler (void) const;

                  PhysicsWorld * getPhysicsWorld   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInitialBackground(Background * const value);
            void setInitialCamera  (Camera * const value);
            void setLuaModule      (const BoostPath &value);
            void setPhysicsHandler (PhysicsHandler * const value);
            void setPhysicsWorld   (PhysicsWorld * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToViewports           (Viewport * const value   );
    void assignViewports          (const MFUnrecViewportPtr &value);
    void removeFromViewports (UInt32               uiIndex );
    void removeObjFromViewports(Viewport * const value   );
    void clearViewports             (void                         );

    void pushToBackgrounds           (Background * const value   );
    void assignBackgrounds          (const MFUnrecBackgroundPtr &value);
    void removeFromBackgrounds (UInt32               uiIndex );
    void removeObjFromBackgrounds(Background * const value   );
    void clearBackgrounds            (void                         );

    void pushToUIDrawingSurfaces           (UIDrawingSurface * const value   );
    void assignUIDrawingSurfaces          (const MFUnrecUIDrawingSurfacePtr &value);
    void removeFromUIDrawingSurfaces (UInt32               uiIndex );
    void removeObjFromUIDrawingSurfaces(UIDrawingSurface * const value   );
    void clearUIDrawingSurfaces            (void                         );

    void pushToForegrounds           (Foreground * const value   );
    void assignForegrounds          (const MFUnrecForegroundPtr &value);
    void removeFromForegrounds (UInt32               uiIndex );
    void removeObjFromForegrounds(Foreground * const value   );
    void clearForegrounds            (void                         );

    void pushToInitialForegrounds           (Foreground * const value   );
    void assignInitialForegrounds          (const MFUnrecForegroundPtr &value);
    void removeFromInitialForegrounds (UInt32               uiIndex );
    void removeObjFromInitialForegrounds(Foreground * const value   );
    void clearInitialForegrounds            (void                         );

    void pushToModelNodes           (Node * const value   );
    void assignModelNodes          (const MFUnrecNodePtr    &value);
    void removeFromModelNodes (UInt32               uiIndex );
    void removeObjFromModelNodes(Node * const value   );
    void clearModelNodes            (void                         );

    void pushToInitialModelNodes           (Node * const value   );
    void assignInitialModelNodes          (const MFUnrecNodePtr    &value);
    void removeFromInitialModelNodes (UInt32               uiIndex );
    void removeObjFromInitialModelNodes(Node * const value   );
    void clearInitialModelNodes            (void                         );

    void pushToCameras             (Camera * const value   );
    void assignCameras            (const MFUnrecCameraPtr  &value);
    void removeFromCameras (UInt32               uiIndex );
    void removeObjFromCameras(Camera * const value   );
    void clearCameras               (void                         );

    void pushToAnimations           (Animation * const value   );
    void assignAnimations          (const MFUnrecAnimationPtr &value);
    void removeFromAnimations (UInt32               uiIndex );
    void removeObjFromAnimations(Animation * const value   );
    void clearAnimations            (void                         );

    void pushToInitialAnimations           (Animation * const value   );
    void assignInitialAnimations          (const MFUnrecAnimationPtr &value);
    void removeFromInitialAnimations (UInt32               uiIndex );
    void removeObjFromInitialAnimations(Animation * const value   );
    void clearInitialAnimations            (void                         );

    void pushToParticleSystems           (ParticleSystem * const value   );
    void assignParticleSystems          (const MFUnrecParticleSystemPtr &value);
    void removeFromParticleSystems (UInt32               uiIndex );
    void removeObjFromParticleSystems(ParticleSystem * const value   );
    void clearParticleSystems            (void                         );

    void pushToInitialParticleSystems           (ParticleSystem * const value   );
    void assignInitialParticleSystems          (const MFUnrecParticleSystemPtr &value);
    void removeFromInitialParticleSystems (UInt32               uiIndex );
    void removeObjFromInitialParticleSystems(ParticleSystem * const value   );
    void clearInitialParticleSystems            (void                         );

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
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    EventConnection          attachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    bool                     isActivityAttached         (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId) const;
    UInt32                   getNumActivitiesAttached   (UInt32 ProducedEventId) const;
    ActivityRefPtr           getAttachedActivity        (UInt32 ProducedEventId,
                                                         UInt32 ActivityIndex) const;
    void                     detachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    UInt32                   getNumProducedEvents       (void) const;
    const MethodDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr   &editEventProducer  (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SceneTransitPtr  create          (void);
    static  Scene           *createEmpty     (void);

    static  SceneTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Scene            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SceneTransitPtr  createDependent  (BitVector bFlags);

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
    /*---------------------------------------------------------------------*/
    /*! \name                    Event Producer                            */
    /*! \{                                                                 */
    EventProducer _Producer;

    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecProjectPtr _sfInternalParentProject;
    MFUnrecViewportPtr _mfViewports;
    MFUnrecBackgroundPtr _mfBackgrounds;
    MFUnrecUIDrawingSurfacePtr _mfUIDrawingSurfaces;
    SFUnrecBackgroundPtr _sfInitialBackground;
    MFUnrecForegroundPtr _mfForegrounds;
    MFUnrecForegroundPtr _mfInitialForegrounds;
    MFUnrecNodePtr    _mfModelNodes;
    MFUnrecNodePtr    _mfInitialModelNodes;
    SFUnrecNodePtr    _sfRoot;
    SFUnrecTransformPtr _sfRootCore;
    SFUnrecNodePtr    _sfDefaultCameraBeacon;
    SFUnrecTransformPtr _sfDefaultCameraBeaconCore;
    MFUnrecCameraPtr  _mfCameras;
    SFUnrecCameraPtr  _sfInitialCamera;
    MFUnrecAnimationPtr _mfAnimations;
    MFUnrecAnimationPtr _mfInitialAnimations;
    MFUnrecParticleSystemPtr _mfParticleSystems;
    MFUnrecParticleSystemPtr _mfInitialParticleSystems;
    SFBoostPath       _sfLuaModule;
    SFUnrecPhysicsHandlerPtr _sfPhysicsHandler;
    SFUnrecPhysicsWorldPtr _sfPhysicsWorld;
    SFUInt32          _sfGenericMethodIDs;
    SFEventProducerPtr _sfEventProducer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SceneBase(void);
    SceneBase(const SceneBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SceneBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Scene *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleInternalParentProject (void) const;
    EditFieldHandlePtr editHandleInternalParentProject(void);
    GetFieldHandlePtr  getHandleViewports       (void) const;
    EditFieldHandlePtr editHandleViewports      (void);
    GetFieldHandlePtr  getHandleBackgrounds     (void) const;
    EditFieldHandlePtr editHandleBackgrounds    (void);
    GetFieldHandlePtr  getHandleUIDrawingSurfaces (void) const;
    EditFieldHandlePtr editHandleUIDrawingSurfaces(void);
    GetFieldHandlePtr  getHandleInitialBackground (void) const;
    EditFieldHandlePtr editHandleInitialBackground(void);
    GetFieldHandlePtr  getHandleForegrounds     (void) const;
    EditFieldHandlePtr editHandleForegrounds    (void);
    GetFieldHandlePtr  getHandleInitialForegrounds (void) const;
    EditFieldHandlePtr editHandleInitialForegrounds(void);
    GetFieldHandlePtr  getHandleModelNodes      (void) const;
    EditFieldHandlePtr editHandleModelNodes     (void);
    GetFieldHandlePtr  getHandleInitialModelNodes (void) const;
    EditFieldHandlePtr editHandleInitialModelNodes(void);
    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleRootCore        (void) const;
    EditFieldHandlePtr editHandleRootCore       (void);
    GetFieldHandlePtr  getHandleDefaultCameraBeacon (void) const;
    EditFieldHandlePtr editHandleDefaultCameraBeacon(void);
    GetFieldHandlePtr  getHandleDefaultCameraBeaconCore (void) const;
    EditFieldHandlePtr editHandleDefaultCameraBeaconCore(void);
    GetFieldHandlePtr  getHandleCameras         (void) const;
    EditFieldHandlePtr editHandleCameras        (void);
    GetFieldHandlePtr  getHandleInitialCamera   (void) const;
    EditFieldHandlePtr editHandleInitialCamera  (void);
    GetFieldHandlePtr  getHandleAnimations      (void) const;
    EditFieldHandlePtr editHandleAnimations     (void);
    GetFieldHandlePtr  getHandleInitialAnimations (void) const;
    EditFieldHandlePtr editHandleInitialAnimations(void);
    GetFieldHandlePtr  getHandleParticleSystems (void) const;
    EditFieldHandlePtr editHandleParticleSystems(void);
    GetFieldHandlePtr  getHandleInitialParticleSystems (void) const;
    EditFieldHandlePtr editHandleInitialParticleSystems(void);
    GetFieldHandlePtr  getHandleLuaModule       (void) const;
    EditFieldHandlePtr editHandleLuaModule      (void);
    GetFieldHandlePtr  getHandlePhysicsHandler  (void) const;
    EditFieldHandlePtr editHandlePhysicsHandler (void);
    GetFieldHandlePtr  getHandlePhysicsWorld    (void) const;
    EditFieldHandlePtr editHandlePhysicsWorld   (void);
    GetFieldHandlePtr  getHandleGenericMethodIDs (void) const;
    EditFieldHandlePtr editHandleGenericMethodIDs(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecProjectPtr   *getSFInternalParentProject (void) const;
                  SFUnrecProjectPtr   *editSFInternalParentProject(void);
            const SFUnrecNodePtr      *getSFRoot            (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const SFUnrecTransformPtr *getSFRootCore        (void) const;
                  SFUnrecTransformPtr *editSFRootCore       (void);
            const SFUnrecNodePtr      *getSFDefaultCameraBeacon (void) const;
                  SFUnrecNodePtr      *editSFDefaultCameraBeacon(void);
            const SFUnrecTransformPtr *getSFDefaultCameraBeaconCore (void) const;
                  SFUnrecTransformPtr *editSFDefaultCameraBeaconCore(void);

                  SFUInt32            *editSFGenericMethodIDs(void);
            const SFUInt32            *getSFGenericMethodIDs (void) const;


                  Project * getInternalParentProject(void) const;

                  Node * getRoot           (void) const;

                  Transform * getRootCore       (void) const;

                  Node * getDefaultCameraBeacon(void) const;

                  Transform * getDefaultCameraBeaconCore(void) const;

                  UInt32              &editGenericMethodIDs(void);
                  UInt32               getGenericMethodIDs (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalParentProject(Project * const value);
            void setRoot           (Node * const value);
            void setRootCore       (Transform * const value);
            void setDefaultCameraBeacon(Node * const value);
            void setDefaultCameraBeaconCore(Transform * const value);
            void setGenericMethodIDs(const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      SceneBase *pFrom,
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
    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SceneBase &source);
};

typedef SceneBase *SceneBaseP;

OSG_END_NAMESPACE

#endif /* _KESCENEBASE_H_ */
