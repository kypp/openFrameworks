#pragma once

//--------------------------
// utils
#include "ofConstants.h"
#include "ofFileUtils.h"
#include "ofLog.h"
#include "ofSystemUtils.h"
#include "ofThread.h"
#include "ofUtils.h"

//--------------------------
// types
#include "ofBaseTypes.h"
#include "ofTypes.h"
#include "ofColor.h"
#include "ofPoint.h"
#include "ofRectangle.h"
#include "ofXml.h"
#include "ofParameter.h"
#include "ofParameterGroup.h"

//--------------------------
// math
#include "ofMath.h"
#include "ofVectorMath.h"

//--------------------------
// communication
#if !defined( TARGET_OF_IOS ) & !defined(TARGET_ANDROID)
	#include "ofSerial.h"
#endif

//--------------------------
// gl
#include "ofFbo.h"
#include "ofGLRenderer.h"
#include "ofGLUtils.h"
#include "ofLight.h"
#include "ofMaterial.h"
#include "ofShader.h"
#include "ofTexture.h"
#include "ofVbo.h"
#include "ofVboMesh.h"
#include "ofGLProgrammableRenderer.h"
#include "ofGLRenderer.h"

//--------------------------
// graphics
#include "ofGraphics.h"
#include "ofImage.h"
#include "ofPath.h"
#include "ofPixels.h"
#include "ofPolyline.h"
#include "ofRendererCollection.h"
#include "ofTessellator.h"
#include "ofTrueTypeFont.h"

//--------------------------
// app
#include "ofBaseApp.h"
#include "ofAppRunner.h"

//--------------------------
// 3d
#include "of3dUtils.h"
#include "ofCamera.h"
#include "ofMesh.h"
#include "ofNode.h"

