#include <GL/glut.h>

void Init(void) {	
	glClearColor(0.5,0.5,0.5,0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,10,0,0,0,0,100,0);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(120,1,1,20);
	//glOurtho(-6.6,-6.6,1.8);
}


void iluminacion(void){
	glMatrixMode(GL_MODELVIEW);
	glutInitDisplayMode(GL_DEPTH);//
	glutInitDisplayMode(GLUT_DEPTH);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);//se puede cambiar el color
	for(int i=0;i<=360;i++){
		glEnable(GL_DEPTH_TEST);
		glClear(GL_DEPTH_BUFFER_BIT);//
		glClear(GL_COLOR_BUFFER_BIT);//
		glColor3f(1,1,0);
		glRotated(i,0,0,1); glTranslated(2,0,0);
		glutSolidSphere(4,20,16);
		glTranslated(-2,0,0);    glRotated(-i,0,0,1); 
		glFlush();
		Sleep(10);
		glDisable(GL_DEPTH_TEST);//
	}
}
	
	int main (int argc, char **argv) {
		glutInitWindowSize(600,600);
		glutInit(&argc, argv);
		glutCreateWindow("Cubo 3D");
		Init();
		glutDisplayFunc(iluminacion);
		glutMainLoop();
		return 0;
	}
	
