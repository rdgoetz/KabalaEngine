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

#ifndef _KEPROJECT_H_
#define _KEPROJECT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "KEProjectBase.h"

#include <OpenSG/Toolbox/OSGPathType.h>
#include <OpenSG/Input/OSGWindowEventProducerFields.h>
#include <OpenSG/Input/OSGUpdateListener.h>
#include <OpenSG/Input/OSGMouseAdapter.h>
#include <OpenSG/Input/OSGMouseMotionAdapter.h>
#include <OpenSG/Input/OSGKeyAdapter.h>
#include <OpenSG/Animation/OSGElapsedTimeAnimationAdvancer.h>
#include <OpenSG/OSGNavigator.h>

OSG_BEGIN_NAMESPACE

/*! \brief Project class. See \ref 
           PageKabalaEngineProject for a description.
*/

class KE_KABALAENGINELIB_DLLMAPPING Project : public ProjectBase
{
  private:

    typedef ProjectBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */

	void start(void);

	void stop(void);

	void setActiveScene(ScenePtr TheScene);
	ScenePtr getActiveScene(void) const;

	void setActiveBackground(BackgroundPtr TheBackground);

	void setActiveCamera(CameraPtr TheCamera);

	MFForegroundPtr &getActiveForegrounds(void);

	void setActiveNode(NodePtr TheNode);
    
	void addActiveAnimation(AnimationPtr TheAnimation);
	void removeActiveAnimation(AnimationPtr TheAnimation);
	void addActiveParticleSystem(ParticleSystemPtr TheParticleSystem);
	void removeActiveParticleSystem(ParticleSystemPtr TheParticleSystem);

	void save(const Path& ProjectFile);

	static ProjectPtr load(const Path& ProjectFile);

	static ProjectPtr create(const Path& ProjectFile);

	void save(void);

	void attachNames(void);

	WindowEventProducerPtr getEventProducer(void) const;

    void pauseActiveUpdates(void);
    void unpauseActiveUpdates(void);
    void togglePauseActiveUpdates(void);

    void attachFlyNavigation(void);
    void dettachFlyNavigation(void);
    void toggleFlyNavigation(void);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in ProjectBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    Project(void);
    Project(const Project &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Project(void); 

    /*! \}                                                                 */
    
    
	class ProjectUpdateListener : public UpdateListener,
                                  public MouseAdapter,
                                  public MouseMotionAdapter,
                                  public KeyAdapter
	{
	public:
		ProjectUpdateListener(ProjectPtr TheProject);

        virtual void update(const UpdateEventPtr e);
        virtual void mousePressed(const MouseEventPtr e);
        virtual void mouseReleased(const MouseEventPtr e);
        virtual void mouseMoved(const MouseEventPtr e);
        virtual void mouseDragged(const MouseEventPtr e);
        virtual void keyPressed(const KeyEventPtr e);
        virtual void keyReleased(const KeyEventPtr e);
	protected :
		ProjectPtr _Project;
	};

    friend class ProjectUpdateListener;

	ProjectUpdateListener _ProjectUpdateListener;

    void update(const UpdateEventPtr e);
    void mousePressed(const MouseEventPtr e);
    void mouseReleased(const MouseEventPtr e);
    void mouseMoved(const MouseEventPtr e);
    void mouseDragged(const MouseEventPtr e);
    void keyPressed(const KeyEventPtr e);
    void keyReleased(const KeyEventPtr e);

    ElapsedTimeAnimationAdvancerPtr _AnimationAdvancer;
    Real32 _TimeInScene;
    bool _PauseActiveUpdates;
    bool _NavigatorAttached;
    Navigator _navigator;
    Real32 _ScaledMotionFactor;
    Real32 _MotionFactor;
    Real32 _FastMotionFactor;
    Real32 _FastRotMotionFactor;
    Real32 _YRotMotionFactor;
    Real32 _XRotMotionFactor;
    
    bool _IsAKeyDown;
    bool _IsSKeyDown;
    bool _IsDKeyDown;
    bool _IsWKeyDown;
    bool _IsShiftKeyDown;

    void updateNavigatorSceneAttachment(void);
    void setCameraBeaconMatrix(const Matrix& m);
    ViewportPtr createDefaultViewport(void) const;
    
    /*==========================  PRIVATE  ================================*/
  private:
    void setDefaults(void);

    friend class FieldContainer;
    friend class ProjectBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const Project &source);
};

typedef Project *ProjectP;

OSG_END_NAMESPACE

#include "KEProjectBase.inl"
#include "KEProject.inl"

#endif /* _KEPROJECT_H_ */
