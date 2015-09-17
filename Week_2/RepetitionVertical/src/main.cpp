#line 1 "Repetition"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Repetition"
void setup() {
    ofSetWindowShape(512, 512); // Set the initial window size.
    ofBackground(0); // Set the background to 0 (black).
}

void draw() {
    // A sequence of lines can each drawn one by one.
    // ofLine(0, 0, 0, ofGetHeight());
    // ofLine(5, 0, 5, ofGetHeight());
    // ofLine(10, 0, 10, ofGetHeight());
    // ofLine(15, 0, 15, ofGetHeight());
    // ofLine(20, 0, 20, ofGetHeight());
    // ofLine(25, 0, 25, ofGetHeight());
    // ofLine(30, 0, 30, ofGetHeight());
    // ofLine(35, 0, 35, ofGetHeight());
    
    // ... and so on.
    
    // OR ... we can use a loop.

    ofSetColor(255);

    // Draw lines every 5 pixels while 'x' is less than the window width.
    for (int x = 0; x < ofGetWidth(); x += 5)
    {
	    ofLine(x, 0, x, ofGetHeight());
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

