#include <GL/glut.h>

void inicio() {
	glClearColor(0.21f, 0.96f, 0.86f, 1.0f); // Color blanco
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2500, 0, 2500); // Ventana de 800x600
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Arena lado izquierdo
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.75f,0.2f);
	glVertex2i(0, 300);	
	glVertex2i(0, 0);
	glVertex2i(1500, 0);
	glEnd();
	
	//Arena lado derecho
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.69f,0.3f);
	glVertex2i(3000, 300);	
	glVertex2i(3000, 0);
	glVertex2i(1500, 0);
	glEnd();
	
	//Arena del centro
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.87f,0.3f);
	glVertex2i(1500, 0);	
	glVertex2i(3000, 300);
	glVertex2i(0, 300);
	glEnd();
	
	//triangulo uno pez
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0,0.3f);
	glVertex2i(800, 800);	
	glVertex2i(900, 700);
	glVertex2i(900, 900);
	glEnd();
	
	//franja blanca
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,0.3f);
	glVertex2i(900, 700);	
	glVertex2i(1000, 800);
	glVertex2i(900, 900);
	glEnd();
	
	//franja blanca abajo
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
	glVertex2i(900, 700);	
	glVertex2i(1000, 800);
	glVertex2i(1000, 600);
	glEnd();
	
	//franja blanca arriba 
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
	glVertex2i(900, 900);	
	glVertex2i(1000, 800);
	glVertex2i(1000, 1000);
	glEnd();
	
	//franja naranja en medio
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.67f,0.3f);
	glVertex2i(1000, 800);	
	glVertex2i(1100, 700);
	glVertex2i(1100, 900);
	glEnd();
	
	//franja naranja uno arriba
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.90f,0.3f);
	glVertex2i(1000, 800);	
	glVertex2i(1100, 900);
	glVertex2i(1000, 1000);
	glEnd();
	
	//franja naranja uno abajo
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.90f,0.3f);
	glVertex2i(1000, 800);	
	glVertex2i(1100, 700);
	glVertex2i(1000, 600);
	glEnd();
	
	//franja naranja segundo arriba
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.67f,0.3f);
	glVertex2i(1000, 1000);	
	glVertex2i(1100, 1100);
	glVertex2i(1100, 900);
	glEnd();
	
	//franja naranja segundo abajo
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.67f,0.3f);
	glVertex2i(1100, 700);	
	glVertex2i(1000, 600);
	glVertex2i(1100, 500);
	glEnd();
	
	//cola pez arriba
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0.67f,0.3f);
	glVertex2i(1100, 800);	
	glVertex2i(1200, 800);
	glVertex2i(1200, 1000);
	glEnd();
	
	//cola pez abajo
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glColor3f(1,0,0.3f);
	glVertex2i(1200, 650);	
	glVertex2i(1200, 800);
	glVertex2i(1100, 800);
	glEnd();
	
	
	glFlush();
	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 300);
	glutCreateWindow("Axel yeray lopez sanchez ");
	glutDisplayFunc(display);
	inicio();
	glutMainLoop();
	return 0;
}

