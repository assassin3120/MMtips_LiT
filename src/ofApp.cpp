#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(0);
    ofSetFrameRate(15);
    ofTranslate(width, height,0);
    ofEnableAlphaBlending();
    sphere.set(100,15);
    
    img.loadImage("bg.png");
    sound.loadSound("bg.mp3");
    sound.setLoop(true);
    sound.setSpeed(1.3); //音楽のスピードを設定します
    sound.setVolume(1.0); //音楽の音量を設定します
    sound.play();
    
    light.enable();
    light.setSpotlight();
    light.setPosition(0, 100, 300);
//    light.setAmbientColor(ofFloatColor(0.5,0.2,0.2,1.0));
//    light.setDiffuseColor(ofFloatColor(0.5,0.5,1.0));
//    light.setSpecularColor(ofFloatColor(1.0,1.0,1.0));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    x =  ofRandom(20); //x = x + ofRandom(20);みたいに記述すると、動いていい感じにナルゾ
    y =  ofRandom(20);
    z =  ofRandom(20);
    i++;
    j++;
    n++;
    
    volume = ofSoundGetSpectrum(getWave);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    img.draw(0,0, ofGetWidth(), ofGetHeight());
    
    eCam.begin();
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),5);
    ofRotateX(i);
    ofRotateY(j);
    ofRotateZ(n);
    for (int s = 0; s < 50; s++) {
        sphere.draw();
        sphere.set(3000*volume[0], 30);
        sphere.setPosition(x,y,z);
    }
    eCam.end();
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    sound.setPaused(true); //マウスを押すと音楽が止まります
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    sound.setPaused(false); //マウスを話すと音楽が続きから再生されます
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
