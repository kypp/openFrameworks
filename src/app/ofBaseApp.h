#pragma once

#include "ofPoint.h"
#include "ofBaseTypes.h"

class ofBaseApp {

	public:
		ofBaseApp(){}

		virtual ~ofBaseApp(){}

		virtual void setup(){}
		virtual void update(){}
		virtual void draw(){}
		virtual void exit(){}

		virtual void windowResized(int w, int h){}

		virtual void keyPressed(int keycode, int scancode, int action, int mods){}
		virtual void keyReleased(int keycode, int scancode, int action, int mods){}
		virtual void charInput(unsigned int codepoint){}

		virtual void mouseMoved(int x, int y, int button){}
		virtual void mouseDragged(int x, int y, int button){}
		virtual void mousePressed(int x, int y, int button){}
		virtual void mouseReleased(){}
		virtual void mouseReleased(int x, int y, int button){}
		virtual void mouseScrolled(double x, double y){}
		
		virtual void dragEvent(std::vector<std::wstring> files) = 0;
	
		// virtual void windowEntry(int state){}
		
		// int mouseX, mouseY;			// for processing heads

		// virtual void windowResized(ofResizeEventArgs & resize){
		// 	windowResized(resize.width,resize.height);
		// }

		// virtual void keyPressed( ofKeyEventArgs & key ){
		// 	keyPressed(key.key);
		// }
		// virtual void keyReleased( ofKeyEventArgs & key ){
		// 	keyReleased(key.key);
		// }
		// virtual void charInput( ofCharEventArgs & c ){
		// 	fprintf(stderr, "ofBaseApp: '%c'\n", c.codepoint);
		// 	charInput(c.codepoint);
		// }

		// virtual void mouseMoved( ofMouseEventArgs & mouse ){
		// 	mouseX=mouse.x;
		// 	mouseY=mouse.y;
		// 	mouseMoved(mouse.x,mouse.y);
		// }
		// virtual void mouseDragged( ofMouseEventArgs & mouse ){
		// 	mouseX=mouse.x;
		// 	mouseY=mouse.y;
		// 	mouseDragged(mouse.x,mouse.y,mouse.button);
		// }
		// virtual void mousePressed( ofMouseEventArgs & mouse ){
		// 	mouseX=mouse.x;
		// 	mouseY=mouse.y;
		// 	mousePressed(mouse.x,mouse.y,mouse.button);
		// }
		// virtual void mouseReleased(ofMouseEventArgs & mouse){
		// 	mouseX=mouse.x;
		// 	mouseY=mouse.y;
		// 	mouseReleased(mouse.x,mouse.y,mouse.button);
		// }
};



