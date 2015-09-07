#include "ofBaseTypes.h"
#include "ofUtils.h"


ofMatrix4x4 ofBaseRenderer::getCurrentOrientationMatrix() const {
	ofLogWarning() << "getCurrentOrientationMatrix() Not implemented for this renderer. Returning Identity matrix.";
	return ofMatrix4x4();
}
