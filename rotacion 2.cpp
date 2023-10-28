#include <GL/glut.h>
#include <cmath>

double angle = 0.0;

void initialize(void) {
	glClearColor(0.25, 0.25, 0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-400, 400, -400, 400);
}

void drawAxes(void) {
	glColor3f(1.0, 1.0, 1.0);
	
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

void drawPolygon(void) {
	glColor3f(1.0, 0.0, 0.0); // Color azul para el polígono
	
	// Coordenadas del polígono
	double vertices[6] = {
		0.0, 50.0,
			30.0, -30.0,
			-30.0, -30.0
	};
	
	glBegin(GL_POLYGON);
	for (int i = 0; i < 6; i += 1) {
		glVertex2d(vertices[i], vertices[i + 1]);
	}
	glEnd();
}

void rotatePolygon(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	drawAxes(); // Dibuja los ejes X e Y
	
	glPushMatrix(); // Guarda la matriz actual
	glTranslatef(0.0, 0.0, 0.0); // Opcional: traslada el centro del polígono
	glRotatef(angle, 0.0, 0.0, 1.0); // Aplica la rotación al polígono
	drawPolygon(); // Dibuja el polígono
	glPopMatrix(); // Restaura la matriz original
	
	glFlush();
	
	angle += 1.0; // Incrementa el ángulo de rotación
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Polígono Rotante con Ejes");
	initialize();
	glutDisplayFunc(rotatePolygon);
	glutIdleFunc(rotatePolygon);
	glutMainLoop();
	
	return 0;
}
