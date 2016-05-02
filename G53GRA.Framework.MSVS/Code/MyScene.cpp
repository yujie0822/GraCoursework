#include "MyScene.h"

#include "Triangle.h"
#include "Triforce.h"
#include "Planet.h"
#include "Planet2.h"
#include "Lamp.h"
#include "Floor.h"
#include "Teapot.h"
#include "Light.h"
#include "MultiLight.h"
#include "Room.h"
#include "SpotLight.h"
#include "TexturedCube.h"
#include "Link.h"
#include "Water.h"
#include "SunLight.h"
#include "src/myStage.h"
#include "src/YfjBuilding.h"
#include "src/AmenBuilding.h"
#include "src/Road.h"
#include "src/Tree.h"
#include "src/Bird.h"
#include "src/mySunlight.h"
#include "src/StreetLight.h"

using namespace std;

MyScene::MyScene(int argc, char** argv, const char *title, const int& windowWidth, const int& windowHeight)
	: Scene(argc, argv, title, windowWidth, windowHeight)
{

}

void MyScene::Initialise()
{
	glClearColor(0.f, 0.f, 0.f, 1.f);

	// DEMO 1
	//Triangle *t = new Triangle();
    //AddObjectToScene(t);

	// DEMO 2 (Demos / Triforce)
    //Triforce *t = new Triforce();
    // AddObjectToScene(t);
    
	// DEMO 3 (Demos/Solar System)
    // create and add a new triangle to the scene
    //Planet *sun = new Planet(30.0f, 0.0f, 12.0f, 0.0f);
    //sun->SetColour(255, 255, 0); //yellow
    //
    //Planet *mars = new Planet(6.0f, 60.0f, 150.0f, 50.0f);
    //mars->SetColour(255, 0, 0); //red
    //
    //Planet2 *earth = new Planet2(15.0f, 135.0f, 100.0f, 20.0f, 6.0f, 30.0, 100.0f, 8.0f );
    //earth->SetColour(0, 0, 255); //earth blue, moon grey
    //
    //AddObjectToScene(sun);
    //AddObjectToScene(mars);
    //AddObjectToScene(earth);

	// DEMO 4 (Demos/Animated Lamp)
	// Create and add a new lamp to the scene
	//Lamp *l = new Lamp();
	//l->size(6.f);
	//AddObjectToScene(l);

	// DEMO 5
	// Show floor and triangle
	//Floor *f = new Floor();
	//Triangle *t = new Triangle();
	//f->size(100.f);
    //t->size(0.5f);
	//AddObjectToScene(f);
	//AddObjectToScene(t);
	
	// DEMO 6 (LIGHTING)
	// Show teapot and lighting
	//Floor *f = new Floor();
	//f->size(100.f);

	//Teapot *t = new Teapot();
	//t->size(100.f);

	//Light *l = new Light();
	//
	//AddObjectToScene(l);
	//AddObjectToScene(t);
	//AddObjectToScene(f);

	// DEMO 7 (Multilights)
	//Floor *f = new Floor();
	//f->size(100.f);

	//Teapot *t = new Teapot();
	//t->size(100.f);

	//MultiLight *l = new MultiLight();

	//AddObjectToScene(l);
	//AddObjectToScene(t);
	//AddObjectToScene(f);

	// DEMO 8 (Spotlight)
	//Room *r = new Room();
	//r->size(150.f);
	//AddObjectToScene(r);

	//SpotLight *s0 = new SpotLight(GL_LIGHT0, 1);
	//s0->position(0.f, 1.f, 0.f);
	//s0->SetAmbient(0.5f, 0.0f, 0.0f, 1.0f);
	//s0->SetDiffuse(0.9f, 0.0f, 0.0f, 1.0f);
	//s0->SetSpecular(1.0f, 0.5f, 0.5f, 1.0f);
	//s0->SetAttenuation(1.0f, 0.0f, 0.0f);
	//s0->SetSpotDirection(0.0f, 0.0f, -1.0f);
	//s0->SetSpotExponent(6.0f);
	//s0->SetSpotCutOff(80.0f);
	//AddObjectToScene(s0);

	//// add a green spotlight that rotates
	//SpotLight *s1 = new SpotLight(GL_LIGHT1, 2);
	//s1->position(0.0f, -10.0f, 0.f);
	//s1->SetAmbient(0.0f, 0.5f, 0.0f, 1.0f);
	//s1->SetDiffuse(0.0f, 0.9f, 0.0f, 1.0f);
	//s1->SetSpecular(0.5f, 1.0f, 0.5f, 1.0f);
	//s1->SetAttenuation(1.0f, 0.0f, 0.000004f);
	//s1->SetSpotDirection(-1.0f, 0.0f, 0.0f);
	//s1->SetSpotExponent(10.0f);
	//s1->SetSpotCutOff(60.0f);
	//AddObjectToScene(s1);

	//// add a blue spotlight that rotates
	//SpotLight *s2 = new SpotLight(GL_LIGHT2, 3);
	//s2->position(0.0f, -30.0f, 0.f);
	//s2->SetAmbient(0.0f, 0.0f, 0.5f, 1.0f);
	//s2->SetDiffuse(0.0f, 0.0f, 0.9f, 1.0f);
	//s2->SetSpecular(0.5f, 0.5f, 1.0f, 1.0f);
	//s2->SetAttenuation(0.5f, 0.0f, 0.0f);
	//s2->SetSpotDirection(1.0f, 0.0f, 0.0f);
	//s2->SetSpotExponent(80.0f);
	//s2->SetSpotCutOff(20.0f);
	//AddObjectToScene(s2);

	//// add a white spotlight that is stationary
	//SpotLight *s3 = new SpotLight(GL_LIGHT3, 0);
	//s3->position(0.0f, 0.0f, 0.f);
	//s3->SetAmbient(0.5f, 0.5f, 0.5f, 1.0f);
	//s3->SetDiffuse(0.9f, 0.9f, 0.9f, 1.0f);
	//s3->SetSpecular(1.0f, 1.0f, 1.0f, 1.0f);
	//s3->SetAttenuation(1.0f, 0.0f, 0.0f);
	//s3->SetSpotDirection(1.0f, 1.0f, -1.0f);
	//s3->SetSpotExponent(30.0f);
	//s3->SetSpotCutOff(75.0f);
	//AddObjectToScene(s3);

	//// add a light that starts yellow and slowly gets more and less green
	//SpotLight *s4 = new SpotLight(GL_LIGHT4, 4);
	//s4->position(0.0f, -20.0f, 0.f);
	//s4->SetAmbient(0.5f, 0.5f, 0.0f, 1.0f);
	//s4->SetDiffuse(0.4f, 0.4f, 0.0f, 1.0f);
	//s4->SetSpecular(1.0f, 1.0f, 1.0f, 1.0f);
	//s4->SetAttenuation(1.0f, 0.0f, 0.0f);
	//s4->SetSpotDirection(-1.0f, -1.0f, -1.0f);
	//s4->SetSpotExponent(30.0f);
	//s4->SetSpotCutOff(60.0f);
	//AddObjectToScene(s4);

	//// add a light that gets more and less blue and rotates on all axis
	//SpotLight *s5 = new SpotLight(GL_LIGHT5, 5);
	//s5->position(0.0f, -40.0f, 0.f);
	//s5->SetAmbient(0.1f, 0.5f, 0.1f, 1.0f);
	//s5->SetDiffuse(0.2f, 0.9f, 0.2f, 1.0f);
	//s5->SetSpecular(1.0f, 1.0f, 1.0f, 1.0f);
	//s5->SetAttenuation(1.0f, 0.0f, 0.0f);
	//s5->SetSpotDirection(1.0f, -1.0f, -1.0f);
	//s5->SetSpotExponent(20.0f);
	//s5->SetSpotCutOff(80.0f);
	//AddObjectToScene(s5);

	//// DEMO 9 (TEXTURED CUBE)
	//TexturedCube *txc = new TexturedCube("./Code/Demos/Texturing/batmanlogo.bmp");
	//txc->size(200.f);
	//AddObjectToScene(txc);

	//// DEMO 10 (Animated Texturing)

	//Link *link = new Link(10.f, 25.f, "./Code/Demos/Texturing/linkSpriteSheet.bmp");
	//link->position(0.f, -99.9f, -100.f);
	//link->size(10.f);


	//Water *water = new Water(20, 20, "./Code/Demos/Texturing/water.bmp");
 //   
	//water->position(0.f, -99.9f, 100.f);
	//water->size(400.f);

	//Floor *floor = new Floor();
	//floor->size(100);

	//SunLight *sl = new SunLight();
	//sl->direction(-1.f, 1.f, 1.f);

	//AddObjectToScene(floor);
	//AddObjectToScene(water);
	//AddObjectToScene(link);
	//AddObjectToScene(sl);

//skybox
	cameraRadius();
	myStage *stage = new myStage();
	GLuint* skybox = new GLuint[6];
	skybox[0] = Scene::GetTexture("./Code/src/skybox_left.bmp");
	skybox[1] = Scene::GetTexture("./Code/src/skybox_right.bmp");
	skybox[2] = Scene::GetTexture("./Code/src/skybox_front.bmp");
	skybox[3] = Scene::GetTexture("./Code/src/skybox_back.bmp");
	skybox[4] = Scene::GetTexture("./Code/src/skybox_down.bmp");
	skybox[5] = Scene::GetTexture("./Code/src/skybox_up.bmp");
	stage->setTextures(skybox);
	stage->size(2*camrad);
	stage->position(0.f, -100.f, 0.f);
	AddObjectToScene(stage);


//buildings
	YfjBuilding *yfjBuilding = new YfjBuilding();
	GLuint* yfjbd = new GLuint[6];
	yfjbd[0] = Scene::GetTexture("./Code/src/YFJ0.bmp");
	yfjbd[1] = Scene::GetTexture("./Code/src/YFJ1.bmp");
	yfjbd[2] = Scene::GetTexture("./Code/src/YFJ2.bmp");
	yfjbd[3] = Scene::GetTexture("./Code/src/AMEN3.bmp");
	yfjbd[4] = Scene::GetTexture("./Code/src/YFJ4.bmp");
	yfjbd[5] = Scene::GetTexture("./Code/src/YFJ5.bmp");
	yfjBuilding->setTextures(yfjbd);
	yfjBuilding->size(10);
	yfjBuilding->position(-200.f,-100.f,-200.f);
	AddObjectToScene(yfjBuilding);

	AmenBuilding *amenBuilding = new AmenBuilding();
	GLuint* amenbd = new GLuint[5];
	amenbd[0] = Scene::GetTexture("./Code/src/AMEN0.bmp");
	amenbd[1] = Scene::GetTexture("./Code/src/AMEN1.bmp");	
	amenbd[2] = Scene::GetTexture("./Code/src/AMEN2.bmp");
	amenbd[3] = Scene::GetTexture("./Code/Src/AMEN3.bmp");
	amenbd[4] = Scene::GetTexture("./Code/Src/AMEN4.bmp");
	amenBuilding->setTextures(amenbd);
	amenBuilding->size(10);
	amenBuilding->position(-200.f, -100.f, 0.0f);
	AddObjectToScene(amenBuilding);


//road
	Road *road1 = new Road("./Code/src/Road1.bmp");
	road1->size(10);
	road1->setLength(9);
	road1->position(50.0f, -99.f, -480.0f);
	AddObjectToScene(road1);

	Road *road2	= new Road("./Code/src/Road1.bmp");
	road2->size(10);
	road2->setLength(8);
	road2->position(-300.0f, -99.f, -480.0f);
	AddObjectToScene(road2);

	Road *road3 = new Road("./Code/src/Road2.bmp");
	road3->size(10);
	road3->setLength(5);
	road3->position(-280.0f, -99.f, 120.0f);
	road3->orientation(0.f, 77.f, 0.f);
	AddObjectToScene(road3);

//water
	Water *water = new Water(20, 20, "./Code/Demos/Texturing/water.bmp");
	water->size(400);
	water->position(-600.f, -98.f, -150.0f);
	AddObjectToScene(water);


//tree
	Tree *tree1 = new Tree("./Code/src/bark.bmp");
	Tree *tree2 = new Tree("./Code/src/bark.bmp");
	Tree *tree3 = new Tree("./Code/src/bark.bmp");
	Tree *tree4 = new Tree("./Code/src/bark.bmp");
	Tree *tree5 = new Tree("./Code/src/bark.bmp");
	Tree *tree6 = new Tree("./Code/src/bark.bmp");

	tree1->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");
	tree2->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");
	tree3->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");
	tree4->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");
	tree5->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");
	tree6->setReplaceString('f', "ff-[-& f + ff + < + f] + [+>f--f&-f]");

	tree1->size(5);
	tree2->size(5);
	tree3->size(5);
	tree4->size(5);
	tree5->size(5);
	tree6->size(5);

	tree1->position(-200.f, -98.f, 80.0f);
	tree2->position(-160.f, -98.f, 88.0f);
	tree3->position(-120.f, -98.f, 97.0f);
	tree4->position(-80.f, -98.f, 105.0f);
	tree5->position(-40.f, -98.f, 114.0f);
	tree6->position(0.f, -98.f, 123.0f);

	AddObjectToScene(tree1);
	AddObjectToScene(tree2);
	AddObjectToScene(tree3);
	AddObjectToScene(tree4);
	AddObjectToScene(tree5);
	AddObjectToScene(tree6);
//bird
	Bird *bird = new Bird(24.f, 31.4f, "./Code/src/bird.bmp");
	bird->position(0.f, -0.f, -300.f);
	bird->size(5.f);
	AddObjectToScene(bird);

//light

	mySunlight *sl = new mySunlight();
	sl->direction(-1.f, 1, 1.f);
	AddObjectToScene(sl);

	SpotLight *s0 = new SpotLight(GL_LIGHT1, 0);
	s0->size(0.1);
	s0->position(-198.f, -74.f, 132.f);
	s0->SetAmbient(0.8f, 0.8f, 0.8f, 1.0f);
	s0->SetDiffuse(0.9f, 0.9f, 0.9f, 1.0f);
	s0->SetSpecular(1.0f, 0.5f, 0.5f, 1.0f);
	s0->SetAttenuation(1.0f, 0.0f, 0.0f);
	s0->SetSpotDirection(0.0f, -1.0f, 0.0f);
	s0->SetSpotExponent(6.0f);
	s0->SetSpotCutOff(80.0f);
	AddObjectToScene(s0);

	StreetLight *stl = new StreetLight();
	stl->orientation(0.f, -13.f, 0.f);
	stl->position(-200.f, -98.f, 140.f);
	stl->size(5);
	AddObjectToScene(stl);

	SpotLight *s1 = new SpotLight(GL_LIGHT2, 0);
	s1->size(0.1);
	s1->position(-98.f, -74.f, 155.f);
	s1->SetAmbient(0.9f, 0.9f, 0.9f, 1.0f);
	s1->SetDiffuse(0.9f, 0.9f, 0.9f, 1.0f);
	s1->SetSpecular(1.0f, 0.5f, 0.5f, 1.0f);
	s1->SetAttenuation(1.0f, 0.0f, 0.0f);
	s1->SetSpotDirection(0.0f, -1.0f, 0.0f);
	s1->SetSpotExponent(6.0f);
	s1->SetSpotCutOff(80.0f);
	AddObjectToScene(s1);

	StreetLight *stl2 = new StreetLight();
	stl2->orientation(0.f, -13.f, 0.f);
	stl2->position(-100.f, -98.f, 163.f);
	stl2->size(5);
	AddObjectToScene(stl2);

	SpotLight *s2 = new SpotLight(GL_LIGHT3, 0);
	s2->size(0.1);
	s2->position(-8.f, -74.f, 175.f);
	s2->SetAmbient(0.8f, 0.8f, 0.8f, 1.0f);
	s2->SetDiffuse(0.9f, 0.9f, 0.9f, 1.0f);
	s2->SetSpecular(1.0f, 0.5f, 0.5f, 1.0f);
	s2->SetAttenuation(1.0f, 0.0f, 0.0f);
	s2->SetSpotDirection(0.0f, -1.0f, 0.0f);
	s2->SetSpotExponent(6.0f);
	s2->SetSpotCutOff(80.0f);
	AddObjectToScene(s2);
	StreetLight *stl3 = new StreetLight();
	stl3->orientation(0.f, -13.f, 0.f);
	stl3->position(-10.f, -98.f, 184.f);
	stl3->size(5);
	AddObjectToScene(stl3);
}

void MyScene::Projection()
{
	gluPerspective(60.0, (GLdouble)windowWidth / (GLdouble)windowHeight, 1.0, 20000.0);
}

void MyScene::cameraRadius() {
	camrad = (GetWindowHeight() / 2.f) / tan(M_PI / 8.f);      // calcualte camera radius based on height
}