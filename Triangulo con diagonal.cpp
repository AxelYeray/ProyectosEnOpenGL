#include <GL/glut.h>
#include <cmath>

double posX = 0.0;
double posY = 0.0;
double stepSize = 1.0;

void initialize(void) {
	glClearColor(1.0, 1.0, 1.0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-400, 400, -400, 400);
}

void drawAxes(void) {
	glColor3f(0.0, 0.0, 0.0);
	
	// Eje X
	glBegin(GL_LINES);
	glVertex2d(-400, 0);
	glVertex2d(400, 0);
	glEnd();
	
	// Eje Y
	glBegin(GL_LINES);
	glVertex2d(0, -400);
	glVertex2d(0, 400);
	glEnd();
}

void moveDiagonal(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	drawAxes(); // Dibuja los ejes X e Y
	
	glBegin(GL_TRIANGLES);
	// Modifica las coordenadas del triángulo para que pase por el centro (0, 0)
	glVertex2d(-25 + posX, -25 + posY);
	glVertex2d(25 + posX, -25 + posY);
	glVertex2d(0 + posX, 25 + posY);
	glEnd();
	
	glFlush();
	
	posX += stepSize;
	posY += stepSize;
	
	if (posX >= 400) {
		stepSize = -1.0;
	} else if (posX <= -400) {
		stepSize = 1.0;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Triángulo en Diagonal con Ejes");
	initialize();
	glutDisplayFunc(moveDiagonal);
	glutIdleFunc(moveDiagonal);
	glutMainLoop();
	
	return 0;
}
