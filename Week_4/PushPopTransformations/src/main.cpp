#line 1 "PushPopTransformations"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "PushPopTransformations"
float angleDegrees;
float radius;

float scaleX;
float scaleY;

void setup()
{
    ofSetWindowShape(1024, 768);
    
    angleDegrees = 0;
    radius = 100;
    scaleX = 1;
    scaleY = 1;
}


void update()
{
    angleDegrees += 2;

    scaleX += ofRandom(-1,1);
    scaleY += ofRandom(-1,1);
}


void draw()
{
    ofBackground(0);

    float centerX = ofGetWidth() / 2;
    float centerY = ofGetHeight() / 2;

    ofPushMatrix();
    ofTranslate(centerX,centerY); // create a new origin @ centerX, centerY
    ofEllipse(0,0,10,10);

    ofRotateZ(angleDegrees);
    ofLine(0,0,radius,0);

    // this push matrix will inherit the existing transformations
    ofPushMatrix();
    ofTranslate(radius,0);
    ofEllipse(0,0,10,10);

    ofRotateZ(angleDegrees);
    ofLine(0,0,radius,0);

    ofPushMatrix();
    ofTranslate(radius,0);
    ofScale(scaleX,scaleY);
    ofEllipse(0,0,10,10);

    ofPopMatrix();

    ofPopMatrix();

    ofPopMatrix();
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

