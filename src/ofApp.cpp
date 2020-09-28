#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int y = 0; y < 7; y++) {
		int modVal = y % 4+3 ;

		for (int x = 0; x < 12;x++) {

			int m = mouseX % 3;
			int n = mouseY % 3;

			if ((x+6+m) % modVal==0 & (x+y) % 3 == 1) {
				ofSetColor(249, 244, 88);//yellow
				ofDrawRectangle(x * 30, y * 90, 30, 90);
			}
			else if ((x + 6+n) % (modVal+1) == 1 &(x + y) % 3 == 0) {
				ofSetColor(249, 238,210);//beige
				ofDrawRectangle(x * 30, y * 90, 30, 90);

			}
			else {
				ofSetColor(126,131,134);// grey
				ofDrawRectangle(x * 30, y * 90, 30, 90);


				//color small rectangles.

				if ((x + 6+m) % modVal == 1 | (x+n) % modVal == 2) {
					ofSetColor(0, 0, 0);//black
				}
				else if ((x+6+n) % (modVal+2) == 2 | x % modVal != 3) {
					ofSetColor(139, 135, 46);//dark yellow

				}
				else {
					ofSetColor(96, 104, 106);// dark grey
					ofDrawRectangle(x * 30, y * 90, 30, 90);
				}


				 for(int k=0;k<3;k++){
					if (x % 2 == 0 |(x+y)%2==1) {
						ofDrawRectangle(x * 30, y * 90+30*k, 30, 15);
					}
					else{
						ofDrawRectangle(x * 30, y * 90 + 30*(k+0.5), 30, 15);
					}
				 }


				//corlor other small rectangles again.

				if ((x + 6 + m) % modVal == 1 | (x + n) % modVal == 2) {
					ofSetColor(139, 135, 46);//dark yellow

					if((x+y)%3==1){
						for (int k = 0; k < 3; k++) {
							if (x % 2 == 0 | (x + y) % 2 == 1) {
								ofDrawRectangle(x * 30, y * 90 + 30 * (k + 0.5), 30, 15);
							}
							else {
								ofDrawRectangle(x * 30, y * 90 + 30 * (k + 0), 30, 15);
							}
						}
					}
				}
				else if ((x + 6 + n) % (modVal + 2) == 2 | x % modVal != 3) {
					ofSetColor(0);//dark yellow
									
					if ((x + y) % 3 == 2) {
						for (int k = 0; k < 3; k++) {
							if (x % 2 == 0 | (x + y) % 2 == 1) {
								ofDrawRectangle(x * 30, y * 90 + 30 * (k + 0.5), 30, 15);
							}
							else {
								ofDrawRectangle(x * 30, y * 90 + 30 * (k + 0), 30, 15);
							}
						}
					}
								   				
				}
				
			




			}
			
			
		}
	}	
	/*
	for (int y = 0; y < 7; y++) {

		int modVal = y % 5 + 2;

		for (int x = 0; x < 12; x++) {
			
			if ((x + 1) % modVal == 2) {
				ofSetColor(0, 0,0);//black
			}
			else if (x % modVal == 2| x % modVal == 3) {
				ofSetColor(139,	135, 46);//dark yellow

			}
			else {
				ofSetColor(126, 131, 134);//grey
			}

			ofDrawRectangle(x * 30, y * 90, 30,15);
			ofDrawRectangle(x * 30, y * 90+30, 30,15);
			ofDrawRectangle(x * 30, y * 90 + 60, 30, 15);
		
		}

	}
	*/
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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
