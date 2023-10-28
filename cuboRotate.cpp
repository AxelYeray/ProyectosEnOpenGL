#include <GL/glut.h>
typedef int dim3[3];
dim3 vertices [8]={{-1,-1,-1},{-1,1,-1},{1,1,-1},{1,-1,-1},
{-1,-1,1},{-1,1,1},{1,1,1},{1,-1,1}};
void Init(void) {	
	glClearColor(0.5,0.5,0.5,0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(4,0,4,0,0,0,0,100,0);
	
	glMatrixMode(GL_PROJECTION);
	gluPerspective(90,1,1,12);
	//glMatrixMode(GL_PROJECTION);
	//glOurtho(-6.6,-6.6,1.8);
}

void dibujacara(int a, int b, int c, int d) {
	glBegin(GL_QUADS);
			glVertex3iv(vertices[a]);
			glVertex3iv(vertices[b]);
			glVertex3iv(vertices[c]);
			glVertex3iv(vertices[d]);
			glEnd();
}

void CuboQUADS(void){
	glMatrixMode(GL_MODELVIEW);
	glutInitDisplayMode(GL_DEPTH);//
	for(int i=0;i<=3600;i++){
		glRotated(i,1,1,0); glTranslated(1,-1,1);
		glClear(GL_DEPTH_BUFFER_BIT);//
		glEnable(GL_DEPTH_TEST);
		glClear(GL_COLOR_BUFFER_BIT);//
		glColor3f(1,0,0);
		dibujacara(0,1,2,3); //abajo
		glColor3f(0,1,0);
		dibujacara(0,3,7,4); //atrás
		glColor3f(0,0,1);
		dibujacara(0,4,5,1); //izquierda
		glColor3f(1,1,0);
		dibujacara(3,2,6,7); //Derecha
		glColor3f(1,0,1);
		dibujacara(4,5,6,7); //arriba
		glColor3f(0,1,1);
		dibujacara(1,2,6,5); //frente
		glFlush();
		glTranslated(-1,1,-1);    glRotated(-i,1,1,0);  Sleep(10);
		glDisable(GL_DEPTH_TEST);//
	}
}

int main (int argc, char **argv) {
	glutInitWindowSize(600,600);
	glutInit(&argc, argv);
	glutCreateWindow("Cubo 3D");
	Init();
	glutDisplayFunc(CuboQUADS);
	glutMainLoop();
	return 0;
}
