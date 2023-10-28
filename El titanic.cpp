#include <GL/glut.h>

void initialize(void) {
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 500, 0, 500);
}

void drawBoat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3);
	
	// Dibuja el casco del barco con color café
	glColor3f(0.58, 0.29, 0.0); // Color café
	glBegin(GL_POLYGON); // Cambia GL_LINE_STRIP a GL_POLYGON
	glVertex2i(100, 100);
	glVertex2i(400, 100);
	glVertex2i(500, 200);
	glVertex2i(0, 200);
	glEnd();
	
	// Dibuja el hasta del barco con color verde
	glColor3f(0.0, 1.0, 0.0); // Color verde
	glBegin(GL_LINES);
	glVertex2i(250, 200);
	glVertex2i(250, 400);
	glEnd();
	
	// Dibuja las líneas del casco del barco con color azul
	glColor3f(0.0, 0.0, 1.0); // Color azul
	glBegin(GL_LINES);
	glVertex2i(30, 180);
	glVertex2i(480, 180);
	glVertex2i(50, 150);
	glVertex2i(450, 150);
	glVertex2i(80, 120);
	glVertex2i(420, 120);
	glEnd();
	
	// Dibuja la vela del barco con color blanco
	glColor3f(1.0, 1.0, 1.0); // Color blanco
	glBegin(GL_TRIANGLES);
	glVertex2i(250, 290);
	glVertex2i(70, 400);
	glVertex2i(250, 500);
	glEnd();
	
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Axel Yeray Lopez Sanchez");
	initialize();
	glutDisplayFunc(drawBoat);
	glutMainLoop();
	return 0;
}
