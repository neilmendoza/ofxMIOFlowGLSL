#include "ofMain.h"
#include "testApp.h"

//========================================================================
int main( ){
    ofGLFWWindowSettings settings;
    settings.setGLVersion(3, 3);
    settings.setSize(1280, 960);
    ofCreateWindow(settings);
    ofRunApp(new testApp());
}
