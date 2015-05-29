#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofSpherePrimitive sphere;
    ofEasyCam eCam;
    ofLight light;
    
    ofImage img;
    ofSoundPlayer sound;
    
    int width = ofGetWidth()/2;
    int height = ofGetHeight()/2;
    int i, j, n, x, y, z, pos;
    int getWave = 1;
    float *volume;
};
