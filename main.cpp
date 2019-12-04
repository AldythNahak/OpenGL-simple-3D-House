#include <windows.h>
#include <GL/glut.h>
#include <math.h>
void initGL() {
   glClearColor(0.0f, 1.0f, 0.5f, 1.0f);
   glClearDepth(1.0f);
   glEnable(GL_DEPTH_TEST);
   glDepthFunc(GL_LEQUAL);
   glShadeModel(GL_SMOOTH);
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();}
void pagarvertical(float n, float z,float i, float j, float k)
{int l;
while ( n > z){
        glColor3f(0.198, 0.104, 0.0);
        glBegin(GL_QUADS);
          glVertex3f(i,j,n);glVertex3f(i,k,n);glVertex3f(i,k,n+0.5);glVertex3f(i,j,n+0.5);
          glEnd();n++;n -= 4;}
       glColor3f(0.198, 0.104, 0.0);
        glLineWidth(5.0);
        glBegin(GL_LINE_LOOP);
        glVertex3f(13.5,0.0,-0.2);glVertex3f(13.5,-10.0,-10.0);glVertex3f(13.5,0.0,-10.0);glVertex3f(13.5,-10.0,-0.2);
          glEnd();
        glBegin(GL_LINE_LOOP);
          glVertex3f(-18.5,0.0,-0.2);glVertex3f(-18.5,-10.0,-10.0);glVertex3f(-18.5,0.0,-10.0);glVertex3f(-18.5,-10.0,-0.2);
          glEnd();return;}
void pagarhorizontal2(float n, float z,float i,float j, float k)
{int l;
while ( n > z){
        glColor3f(0.198, 0.104, 0.0);
        glBegin(GL_QUADS);
          glVertex3f(i,n,j);glVertex3f(i,n-0.5,j);glVertex3f(i,n-0.5,k);glVertex3f(i,n,k);
          glEnd();n++;n -= 10;
}return;}
void pagarbelakang(float i, float z)
{float  j = 0.0, k = -10.0,n = -36.0;int l;
while ( i < z){
        glColor3f(0.198, 0.104, 0.0);
        glBegin(GL_QUADS);
          glVertex3f(i,j,n);glVertex3f(i+0.5,j,n);glVertex3f(i+0.5,k,n);glVertex3f(i,k,n);
          glEnd();i++;i += 2;
}return;}
void pagarhorizontal(float n, float z,float i,float j, float k)
{int l;
while ( n > z){
        glColor3f(0.198, 0.104, 0.0);
        glBegin(GL_QUADS);glVertex3f(i,n,j);glVertex3f(i,n-0.5,j);glVertex3f(k,n-0.5,j);glVertex3f(k,n,j);
          glEnd();n++;n -= 10;
}return;}
void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glColor3f(0.0f,0.0f,0.0f);
   glPointSize(4.0);
glBegin(GL_POINTS); //gagang pintu
glVertex3f(1.7f,  -3.5f, 10.2f);
glEnd();
   glBegin(GL_QUADS);
   glColor3f(0.5f, 0.5f, 0.5f);
     // Dasar
      glVertex3f( 10.0f, -10.0f,  10.0f);glVertex3f(-10.0f, -10.0f,  10.0f);glVertex3f(-10.0f, -10.0f, -20.0f);glVertex3f( 10.0f, -10.0f, -20.0f);
glColor3f(0.50, 0.50, 0.50);
 //tembok depan
          glVertex3f( 10.0f,  10.0f, 10.0f);glVertex3f(-10.0f,  10.0f, 10.0f);glVertex3f(-10.0f, -10.0f, 10.0f);glVertex3f( 10.0f, -10.0f, 10.0f);
glColor3f(0.50, 0.50, 0.50);
    // tembok belakang
      glVertex3f( 10.0f, -10.0f, -20.0f);glVertex3f(-10.0f, -10.0f, -20.0f);glVertex3f(-10.0f,  10.0f, -20.0f);glVertex3f( 10.0f,  10.0f, -20.0f);
glColor3f(1.0, 0.50, 0.0);
//tembok samping kanan
       glVertex3f(10.0f,  10.0f, -20.0f);glVertex3f(10.0f,  10.0f,  10.0f);glVertex3f(10.0f, -10.0f,  10.0f);glVertex3f(10.0f, -10.0f, -20.0f);
glColor3f(1.0, 0.50, 0.0);
//tembok samping kiri
      glVertex3f(-10.0f,  10.0f,  10.0f);glVertex3f(-10.0f,  10.0f, -20.0f);glVertex3f(-10.0f, -10.0f, -20.0f);glVertex3f(-10.0f, -10.0f,  10.0f);
glColor3f(1.0f,0.0f,1.0f);
//pintu
  glVertex3f( -3.0f,  1.5f, 10.1f);glVertex3f(3.0f,  1.5f, 10.1f);glVertex3f(3.0f, -9.9f, 10.1f);glVertex3f( -3.0f, -9.9f, 10.1f);
    glEnd();
  ////////////////////////////////                  ATAP                    ///////////////////////////////////////////////////////////
        glBegin(GL_TRIANGLES);
      glColor3f(0.58, 1.0, 0.0);
     //atap depan
      glVertex3f(-10.0f, 10.0f,  10.0f);glVertex3f( 0.0f, 18.0f,  5.0f);glVertex3f( 10.0f, 10.0f,  10.0f);glBegin(GL_TRIANGLES);
    glColor3f(0.58, 1.0, 0.0);
 //atap belakang
      glVertex3f(-10.0f, 10.0f,  -20.0f);glVertex3f( 0.0f, 18.0f,  -15.0f);glVertex3f(10.0f, 10.0f, -20.0f);
glEnd();
   glBegin(GL_QUADS);
      glColor3f(0.0, 0.128, 0.60);
 //atap samping kiri
      glVertex3f(-10.0f, 10.0f,  -20.0f);glVertex3f( 0.0f, 18.0f,  -15.0f);glVertex3f(0.0f, 18.0f, 5.0f);glVertex3f(-10.0f, 10.0f, 10.0f);
     glColor3f(0.0, 0.128, 0.60);
 //atap samping kanan
      glVertex3f(10.0f, 10.0f,  -20.0f);glVertex3f( 0.0f, 18.0f,  -15.0f);glVertex3f(0.0f, 18.0f, 5.0f);glVertex3f(10.0f, 10.0f, 10.0f);
    glEnd();
//////////////////////////////////////            Jendela                ///////////////////////////////////////////////////////
   glBegin(GL_QUADS);
   ////kanan
 // jendela kanan atas
 glColor3f(1.0, 0.0, 0.0);
       glVertex3f( 10.1f,  5.0f, -5.0f);glVertex3f(10.1f,  5.0f, -10.0f);glVertex3f(10.1f, 0.0f, -10.0f);glVertex3f( 10.1f, 0.0f, -5.0f);
       // jendela kanan bawah
       glColor3f(0.0, 1.0, 1.0);
       glVertex3f( 10.1f,  0.0f, -5.0f);glVertex3f(10.1f,  0.0f, -10.0f);glVertex3f(10.1f, -5.0f, -10.0f);glVertex3f( 10.1f, -5.0f, -5.0f);
       // jendela kiri atas
       glColor3f(1.0, 1.0, 0.0);
       glVertex3f( 10.1f,  5.0f, 0.0f);glVertex3f(10.1f,  5.0f, -5.0f);glVertex3f(10.1f, 0.0f, -5.0f);glVertex3f( 10.1f, 0.0f, 0.0f);
       // jendela kiri bawah
       glColor3f(0.0, 0.0, 1.0);
       glVertex3f( 10.1f,  0.0f, 0.0f);glVertex3f(10.1f,  0.0f, -5.0f);glVertex3f(10.1f, -5.0f, -5.0f);glVertex3f( 10.1f, -5.0f, 0.0f);
///KIRI
 // jendela kanan atas
 glColor3f(1.0, 0.0, 0.0);
       glVertex3f( -10.1f,  5.0f, -5.0f);glVertex3f(-10.1f,  5.0f, -10.0f);glVertex3f(-10.1f, 0.0f, -10.0f);glVertex3f( -10.1f, 0.0f, -5.0f);
       // jendela kanan bawah
       glColor3f(0.0, 1.0, 1.0);
      glVertex3f( -10.1f,  0.0f, -5.0f);glVertex3f(-10.1f,  0.0f, -10.0f);glVertex3f(-10.1f, -5.0f, -10.0f);glVertex3f( -10.1f, -5.0f, -5.0f);
       // jendela kiri atas
       glColor3f(1.0, 1.0, 0.0);
       glVertex3f(- 10.1f,  5.0f, 0.0f);glVertex3f(-10.1f,  5.0f, -5.0f);glVertex3f(-10.1f, 0.0f, -5.0f);glVertex3f( -10.1f, 0.0f, 0.0f);
       // jendela kiri bawah
       glColor3f(0.0, 0.0, 1.0);
       glVertex3f( -10.1f,  0.0f, 0.0f);glVertex3f(-10.1f,  0.0f, -5.0f);glVertex3f(-10.1f, -5.0f, -5.0f);glVertex3f( -10.1f, -5.0f, 0.0f);
glEnd();
////////////////////////////////////// Cerobong //////////////////////////////////////////////
     glBegin(GL_QUADS);
 glColor3f(0.198, 0.104, 0.0);
 //cerobong depan
      glVertex3f(5.0f, 22.0f,  -14.0f);glVertex3f( 8.0f, 22.0f,  -14.0f);glVertex3f(8.0f, 10.0f, -14.0f);glVertex3f(5.0f, 10.0f, -14.0f);
       //cerobong belakang
      glVertex3f(5.0f, 22.0f,  -17.0f);glVertex3f( 8.0f, 22.0f,  -17.0f);glVertex3f(8.0f, 10.0f, -17.0f);glVertex3f(5.0f, 10.0f, -17.0f);
       //cerobong kanan
      glVertex3f(8.0f, 22.0f,  -14.0f);glVertex3f( 8.0f, 22.0f,  -17.0f);glVertex3f(8.0f, 10.0f, -17.0f);glVertex3f(8.0f, 10.0f, -14.0f);
      //cerobong kiri
      glVertex3f(5.0f, 22.0f,  -14.0f);glVertex3f( 5.0f, 22.0f,  -17.0f);glVertex3f(5.0f, 10.0f, -17.0f);glVertex3f(5.0f, 10.0f, -14.0f);
         //cerobong atas
          glColor3f(0.0, 0.0, 0.0);
        glVertex3f(5.0f, 22.0f,  -14.0f);glVertex3f( 8.0f, 22.0f,  -14.0f);glVertex3f(8.0f, 22.0f, -17.0f);glVertex3f(5.0f, 22.0f, -17.0f);
    glEnd();
///////////////////////////////////////////    pagar     ///////////////////////////////////////////////////////////
    pagarvertical(32.0, 0.0,13.5,0.0,-10.0);pagarvertical(32.0, 0.0,-18.5,0.0,-10.0);
    pagarvertical(-13.0, -29.0,13.5,0.0,-10.0);pagarvertical(-13.0, -33.0,-18.5,0.0,-10.0);
    pagarhorizontal2(0.0, -10.1,13.5,35.0,-30.0);pagarhorizontal2(0.0, -10.1,-18.5,35.0,-35.0);
   pagarbelakang(-17.5,13.5);pagarhorizontal(0.0,-10.0,-19.5,-36.0,13.5);
   pagarhorizontal(0.0,-10.0,-19.5,37.0,-7.0);pagarhorizontal(0.0,-10.0,7.0,37.0,13.5);
  glBegin(GL_QUADS);
  ///gerbang
  glColor3f(0.150, 0.1, 0.45);
       glVertex3f( -7.0f,  0.0f, 37.0f);glVertex3f(-7.0f,  -10.0f, 37.0f);glVertex3f(0.0f, -10.0f, 37.0f);glVertex3f( 0.0f, -4.0f, 37.0f);
glVertex3f( 0.2f,  -4.0f, 37.0f);glVertex3f(0.2f,  -10.0f, 37.0f);glVertex3f(7.0f, -10.0f, 37.0f);glVertex3f( 7.0f, 0.0f, 37.0f);
//-3
glColor3f(0.0f,0.128f,0.0f);
glVertex3f( -12.5f,  -0.0f, 37.0f);glVertex3f(-12.5f,  -10.0f, 37.0f);glVertex3f(-19.5f, -10.0f, 37.0f);glVertex3f( -19.5f, 0.0f, 37.0f);
glVertex3f( -12.5f,  -0.0f, 35.0f);glVertex3f(-12.5f,  -10.0f, 35.0f);glVertex3f(-19.5f, -10.0f, 35.0f);glVertex3f( -19.5f, 0.0f, 35.0f);
glVertex3f( -12.5f,  -0.0f, 35.0f);glVertex3f(-12.5f,  -10.0f, 35.0f);glVertex3f(-12.5f, -10.0f, 37.0f);glVertex3f( -12.5f, 0.0f, 37.0f);
glVertex3f( -19.5f,  -0.0f, 35.0f);glVertex3f(-19.5f,  -10.0f, 35.0f);glVertex3f(-19.5f, -10.0f, 37.0f);glVertex3f( -19.5f, 0.0f, 37.0f);
glVertex3f( 12.5f,  -0.0f, -30.0f);glVertex3f(12.5f,  -10.0f, -30.0f);glVertex3f(14.5f, -10.0f, -30.0f);glVertex3f( 14.5f, 0.0f, -30.0f);
glVertex3f( 12.5f,  -0.0f, -37.0f);glVertex3f(12.5f,  -10.0f, -37.0f);glVertex3f(14.5f, -10.0f, -37.0f);glVertex3f( 14.5f, 0.0f, -37.0f);
glVertex3f( 12.5f,  -0.0f, -37.0f);glVertex3f(12.5f,  -10.0f, -37.0f);glVertex3f(12.5f, -10.0f, -30.0f);glVertex3f(12.5f, 0.0f, -30.0f);
glVertex3f( 14.5f,  -0.0f, -37.0f);glVertex3f(14.5f,  -10.0f, -37.0f);glVertex3f(14.5f, -10.0f, -30.0f);glVertex3f( 14.5f, 0.0f, -30.0f);
glColor3f(0.198, 0.104, 0.0);
//-1
glVertex3f( -8.0f,  -0.0f, 37.0f);glVertex3f(-8.0f,  -10.0f, 37.0f);glVertex3f(-8.5f, -10.0f, 37.0f);glVertex3f( -8.5f, 0.0f, 37.0f);
//-2
glVertex3f( -10.0f,  -0.0f, 37.0f);glVertex3f(-10.0f,  -10.0f, 37.0f);glVertex3f(-10.5f, -10.0f, 37.0f);glVertex3f( -10.5f, 0.0f, 37.0f);
//1
glVertex3f( 8.0f,  -0.0f, 37.0f);glVertex3f(8.0f,  -10.0f, 37.0f);glVertex3f(8.5f, -10.0f, 37.0f);glVertex3f( 8.5f, 0.0f, 37.0f);
//2
glVertex3f( 10.0f,  -0.0f, 37.0f);glVertex3f(10.0f,  -10.0f, 37.0f);glVertex3f(10.5f, -10.0f, 37.0f);glVertex3f( 10.5f, 0.0f, 37.0f);
//3
glVertex3f( 12.5f,  -0.0f, 37.0f);glVertex3f(12.5f,  -10.0f, 37.0f);glVertex3f(14.5f, -10.0f, 37.0f);glVertex3f( 14.5f, 0.0f, 37.0f);
glVertex3f( 12.5f,  -0.0f, 35.0f);glVertex3f(12.5f,  -10.0f, 35.0f);glVertex3f(14.5f, -10.0f, 35.0f);glVertex3f( 14.5f, 0.0f, 35.0f);
glVertex3f( 12.5f,  -0.0f, 35.0f);glVertex3f(12.5f,  -10.0f, 35.0f);glVertex3f(12.5f, -10.0f, 37.0f);glVertex3f( 12.5f, 0.0f, 37.0f);
glVertex3f( 14.5f,  -0.0f, 35.0f);glVertex3f(14.5f,  -10.0f, 35.0f);glVertex3f(14.5f, -10.0f, 37.0f);glVertex3f( 14.5f, 0.0f, 37.0f);
///////////////////////////////////
glVertex3f( -17.5f,  -0.0f, -35.0f);glVertex3f(-17.5f,  -10.0f, -35.0f);glVertex3f(-19.5f, -10.0f, -35.0f);glVertex3f( -19.5f, 0.0f, -35.0f);
glVertex3f( -17.5f,  -0.0f, -37.0f);glVertex3f(-17.5f,  -10.0f, -37.0f);glVertex3f(-19.5f, -10.0f, -37.0f);glVertex3f(-19.5f, 0.0f, -37.0f);
glVertex3f( -17.5f,  -0.0f, -37.0f);glVertex3f(-17.5f,  -10.0f, -37.0f);glVertex3f(-17.5f, -10.0f, -35.0f);glVertex3f( -17.5f, 0.0f, -35.0f);
glVertex3f( -19.5f,  -0.0f, -37.0f);glVertex3f(-19.5f,  -10.0f, -37.0f);glVertex3f(-19.5f, -10.0f, -35.0f);glVertex3f( -19.5f, 0.0f, -35.0f);
  ///////////////////////////////DASAR/////////////////////////////
glColor3f(0.0f,0.5f,0.0f);
//f
glVertex3f( -22.0f,  -10.0f, 40.0f);glVertex3f(-22.0f,  -12.0f, 40.0f);glVertex3f(17.0f, -12.0f, 40.0f);glVertex3f( 17.0f, -10.0f, 40.0f);
//b
glVertex3f( -22.0f,  -10.0f, -40.0f);glVertex3f(-22.0f,  -12.0f, -40.0f);glVertex3f(17.0f, -12.0f, -40.0f);glVertex3f( 17.0f, -10.0f, -40.0f);
//r
glVertex3f( 17.0f,  -10.0f, 40.0f);glVertex3f(17.0f,  -12.0f, 40.0f);glVertex3f(17.0f, -12.0f, -40.0f);glVertex3f( 17.0f, -10.0f, -40.0f);
//l
glVertex3f( -22.0f,  -10.0f, 40.0f);glVertex3f(-22.0f,  -12.0f, 40.0f);glVertex3f(-22.0f, -12.0f, -40.0f);glVertex3f( -22.0f, -10.0f, -40.0f);
//u
glVertex3f( -22.0f,  -10.0f, 40.0f);glVertex3f(17.0f,  -10.0f, 40.0f);glVertex3f(17.0f, -10.0f, -40.0f);glVertex3f( -22.0f, -10.0f, -40.0f);
//d
glVertex3f( -22.0f,  -12.0f, 40.0f);glVertex3f(17.0f,  -12.0f, 40.0f);glVertex3f(17.0f, -12.0f, -40.0f);glVertex3f( -22.0f, -12.0f, -40.0f);
glEnd();
glutSwapBuffers();}
void reshape(GLsizei width, GLsizei height) {
   if (height == 0) height = 1;
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
   glViewport(0, 0, width, height);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);}
void keyboard(unsigned char key, int x, int y) {
   switch (key) {
            //gerak ke kiri
		case 'a':case 'A':glTranslatef(-10.0, 0.0, 0.0);break;
			 //gerak ke kanan
		case 'd':case 'D':glTranslatef(10.0, 0.0, 0.0);break;
			 //gerak ke depan
		case 'w':case 'W':glTranslatef(0.0, 0.0, 10.0);break;
			 //gerak ke belakang
		case 's':case 'S':glTranslatef(0.0, 0.0, -10.0);break;
			 //gerak ke atas
		case 'q':case 'Q':glTranslatef(0.0, 10.0, 0.0);break;
			 //gerak ke bawah
		case 'e':case 'E':glTranslatef(0.0, -10.0, 0.0);break;
			 //rotate ke kiri
		case 'j':case 'J':glRotatef(10.0, 0.0, -50.0, 0.0);break;
			//rotate ke kanan
		case 'l':case 'L':glRotatef(10.0, 0.0, 50.0, 0.0);break;
			//rotate ke samping kanan
		case 'i':case 'I':glRotatef(10.0, 0.0, 0.0, -50.0);break;
			//rotate ke samping kiri
		case 'k':case 'K':glRotatef(10.0, 0.0, 0.0, 50.0);break;
			//rotate ke atas
		case 'o':case 'O':glRotatef(10.0, -50.0, 0.0, 0.0);break;
			//rotate ke bawah
		case 'u':case 'U':glRotatef(10.0, 50.0, 0.0, 0.0);break;
   }display();}
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("672017081");
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   initGL();
   glutMainLoop();return 0;}
