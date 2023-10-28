#include <GL/glut.h>

void inicio() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Color blanco
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2500, 0, 2500); // Ventana de 800x600
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//base del barco 
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(500, 1000);	
	glVertex2i(800, 1000);
	glVertex2i(850, 1400);
	glEnd();
	//PANZA
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(0.89F,0.56f,0.03f);
	glVertex2i(1200, 1000);	
	glVertex2i(800, 1000);
	glVertex2i(850, 1400);
	glEnd();
	//PANZA
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(0.89F,0.56f,0.03f);
	glVertex2i(850, 1400);	
	glVertex2i(1200, 1000);
	glVertex2i(1150, 1400);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(1200, 1000);	
	glVertex2i(1500, 1000);
	glVertex2i(1150, 1400);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(1000, 800);	
	glVertex2i(800, 1000);
	glVertex2i(1200, 1000);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.20f,0.2f);
	glVertex2i(800, 1000);	
	glVertex2i(700, 500);
	glVertex2i(1000,800);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.20f,0.2f);
	glVertex2i(1300, 500);	
	glVertex2i(1200, 1000);
	glVertex2i(1000,800);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(0.95,0.39f,0.74f);
	glVertex2i(1200, 1700);	
	glVertex2i(1150, 1400);
	glVertex2i(850, 1400);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(0.95,0.39f,0.74f);
	glVertex2i(800, 1700);	
	glVertex2i(850, 1400);
	glVertex2i(1200, 1700);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(0.95,0.39f,0.74f);
	glVertex2i(1000, 1900);	
	glVertex2i(1200, 1700);
	glVertex2i(800,1700);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(800, 1700);	
	glVertex2i(850, 1400);
	glVertex2i(1200, 1700);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(600, 2000);	
	glVertex2i(800, 1700);
	glVertex2i(900, 1800);
	
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(1400, 2000);	
	glVertex2i(1200, 1700);
	glVertex2i(1100, 1800);

	
	
	glEnd();
	
	
	glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 700);
	glutCreateWindow("Eduardo Garcia Hernandez ");
	glutDisplayFunc(display);
	inicio();
	glutMainLoop();
	return 0;
}

