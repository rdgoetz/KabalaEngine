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
 **     class ApplicationSettings
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KEAPPLICATIONSETTINGSBASE_H_
#define _KEAPPLICATIONSETTINGSBASE_H_
#ifdef __sgi
#pragma once
#endif



#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

//#include "OpenSG/OSGBaseTypes.h"

#include <OpenSG/OSGFieldContainer.h> // Parent

#include <OpenSG/OSGBoostPathFields.h>  // DataDirectory type
#include <OpenSG/OSGVecFields.h>        // DefaultWindowPosition type
#include <OpenSG/OSGSysFields.h>        // Fullscreen type

#include "KEApplicationSettingsFields.h"

OSG_BEGIN_NAMESPACE

class ApplicationSettings;

//! \brief ApplicationSettings Base Class.

class KE_KABALAENGINE_DLLMAPPING ApplicationSettingsBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ApplicationSettings);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DataDirectoryFieldId = Inherited::NextFieldId,
        LastOpenedProjectFileFieldId = DataDirectoryFieldId + 1,
        RecentProjectFilesFieldId = LastOpenedProjectFileFieldId + 1,
        DefaultWindowPositionFieldId = RecentProjectFilesFieldId + 1,
        DefaultWindowSizeFieldId = DefaultWindowPositionFieldId + 1,
        FullscreenFieldId = DefaultWindowSizeFieldId + 1,
        HideAdvancedFieldsFieldId = FullscreenFieldId + 1,
        NextFieldId = HideAdvancedFieldsFieldId + 1
    };

    static const OSG::BitVector DataDirectoryFieldMask =
        (TypeTraits<BitVector>::One << DataDirectoryFieldId);
    static const OSG::BitVector LastOpenedProjectFileFieldMask =
        (TypeTraits<BitVector>::One << LastOpenedProjectFileFieldId);
    static const OSG::BitVector RecentProjectFilesFieldMask =
        (TypeTraits<BitVector>::One << RecentProjectFilesFieldId);
    static const OSG::BitVector DefaultWindowPositionFieldMask =
        (TypeTraits<BitVector>::One << DefaultWindowPositionFieldId);
    static const OSG::BitVector DefaultWindowSizeFieldMask =
        (TypeTraits<BitVector>::One << DefaultWindowSizeFieldId);
    static const OSG::BitVector FullscreenFieldMask =
        (TypeTraits<BitVector>::One << FullscreenFieldId);
    static const OSG::BitVector HideAdvancedFieldsFieldMask =
        (TypeTraits<BitVector>::One << HideAdvancedFieldsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBoostPath       SFDataDirectoryType;
    typedef SFBoostPath       SFLastOpenedProjectFileType;
    typedef MFBoostPath       MFRecentProjectFilesType;
    typedef SFPnt2f           SFDefaultWindowPositionType;
    typedef SFVec2f           SFDefaultWindowSizeType;
    typedef SFBool            SFFullscreenType;
    typedef SFBool            SFHideAdvancedFieldsType;

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


                  SFBoostPath         *editSFDataDirectory  (void);
            const SFBoostPath         *getSFDataDirectory   (void) const;

                  SFBoostPath         *editSFLastOpenedProjectFile(void);
            const SFBoostPath         *getSFLastOpenedProjectFile (void) const;

                  MFBoostPath         *editMFRecentProjectFiles(void);
            const MFBoostPath         *getMFRecentProjectFiles (void) const;

                  SFPnt2f             *editSFDefaultWindowPosition(void);
            const SFPnt2f             *getSFDefaultWindowPosition (void) const;

                  SFVec2f             *editSFDefaultWindowSize(void);
            const SFVec2f             *getSFDefaultWindowSize (void) const;

                  SFBool              *editSFFullscreen     (void);
            const SFBool              *getSFFullscreen      (void) const;

                  SFBool              *editSFHideAdvancedFields(void);
            const SFBool              *getSFHideAdvancedFields (void) const;


                  BoostPath           &editDataDirectory  (void);
            const BoostPath           &getDataDirectory   (void) const;

                  BoostPath           &editLastOpenedProjectFile(void);
            const BoostPath           &getLastOpenedProjectFile (void) const;

                  BoostPath           &editRecentProjectFiles(const UInt32 index);
            const BoostPath           &getRecentProjectFiles (const UInt32 index) const;

                  Pnt2f               &editDefaultWindowPosition(void);
            const Pnt2f               &getDefaultWindowPosition (void) const;

                  Vec2f               &editDefaultWindowSize(void);
            const Vec2f               &getDefaultWindowSize (void) const;

                  bool                &editFullscreen     (void);
                  bool                 getFullscreen      (void) const;

                  bool                &editHideAdvancedFields(void);
                  bool                 getHideAdvancedFields (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDataDirectory  (const BoostPath &value);
            void setLastOpenedProjectFile(const BoostPath &value);
            void setDefaultWindowPosition(const Pnt2f &value);
            void setDefaultWindowSize(const Vec2f &value);
            void setFullscreen     (const bool value);
            void setHideAdvancedFields(const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  ApplicationSettingsTransitPtr  create          (void);
    static  ApplicationSettings           *createEmpty     (void);

    static  ApplicationSettingsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ApplicationSettings            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ApplicationSettingsTransitPtr  createDependent  (BitVector bFlags);

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

    SFBoostPath       _sfDataDirectory;
    SFBoostPath       _sfLastOpenedProjectFile;
    MFBoostPath       _mfRecentProjectFiles;
    SFPnt2f           _sfDefaultWindowPosition;
    SFVec2f           _sfDefaultWindowSize;
    SFBool            _sfFullscreen;
    SFBool            _sfHideAdvancedFields;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ApplicationSettingsBase(void);
    ApplicationSettingsBase(const ApplicationSettingsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ApplicationSettingsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDataDirectory   (void) const;
    EditFieldHandlePtr editHandleDataDirectory  (void);
    GetFieldHandlePtr  getHandleLastOpenedProjectFile (void) const;
    EditFieldHandlePtr editHandleLastOpenedProjectFile(void);
    GetFieldHandlePtr  getHandleRecentProjectFiles (void) const;
    EditFieldHandlePtr editHandleRecentProjectFiles(void);
    GetFieldHandlePtr  getHandleDefaultWindowPosition (void) const;
    EditFieldHandlePtr editHandleDefaultWindowPosition(void);
    GetFieldHandlePtr  getHandleDefaultWindowSize (void) const;
    EditFieldHandlePtr editHandleDefaultWindowSize(void);
    GetFieldHandlePtr  getHandleFullscreen      (void) const;
    EditFieldHandlePtr editHandleFullscreen     (void);
    GetFieldHandlePtr  getHandleHideAdvancedFields (void) const;
    EditFieldHandlePtr editHandleHideAdvancedFields(void);

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

            void execSync (      ApplicationSettingsBase *pFrom,
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
    void operator =(const ApplicationSettingsBase &source);
};

typedef ApplicationSettingsBase *ApplicationSettingsBaseP;

OSG_END_NAMESPACE

#endif /* _KEAPPLICATIONSETTINGSBASE_H_ */
