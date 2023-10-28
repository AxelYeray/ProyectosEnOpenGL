#include <GL/glut.h>
#include <math.h>

int windowWidth = 500;
int windowHeight = 500;

int sides = 4;  // N�mero de lados del pol�gono
float angle = 0.0;  // �ngulo de rotaci�n del pol�gono
float rotationSpeed = 1.0;  // Velocidad de rotaci�n
float polygonSize = 50.0;  // Tama�o del pol�gono
float polygonX = 0;  // Posici�n inicial en el cuarto cuadrante
float polygonY = 0;

void drawAxes() {
	// Dibujar ejes (opcional)
	glColor3f(1.0, 0.0, 0.0); // Color rojo para el eje X
	glBegin(GL_LINES);
	glVertex2f(0, windowHeight / 2);
	glVertex2f(windowWidth, windowHeight / 2);
	glEnd();
	
	glColor3f(0.0, 1.0, 0.0); // Color verde para el eje Y
	glBegin(GL_LINES);
	glVertex2f(windowWidth / 2, 0);
	glVertex2f(windowWidth / 2, windowHeight);
	glEnd();
}

void drawPolygon() {
	// Dibujar un pol�gono
	glColor3f(1.0, 0.0, 1.0); // Color rosa
	glBegin(GL_POLYGON);
	
	for (int i = 0; i < sides; i++) {
		float x = polygonX + polygonSize * cos(2 * M_PI * i / sides + angle);
		float y = polygonY + polygonSize * sin(2 * M_PI * i / sides + angle);
		glVertex2f(x, y);
	}
	
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	drawAxes();
	drawPolygon();
	glFlush();
}

void timer(int) {
	// Actualizar el �ngulo de rotaci�n
	angle += rotationSpeed;
	
	// Mover el pol�gono en el cuarto cuadrante
	polygonX += rotationSpeed;
	
	// Limitar la posici�n del pol�gono dentro de la ventana
	if (polygonX > windowWidth)
		polygonX = 0;
	
	if (polygonY > windowHeight)
		polygonY = 0;
	
	// Volver a dibujar
	glutPostRedisplay();
	glutTimerFunc(16, timer, 0); // Llamar a la funci�n timer cada 16ms
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("Pol�gono en Cuarto Cuadrante en GLUT");
	
	glClearColor(0.0, 0.0, 0.0, 1.0); // Color de fondo negro
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, windowWidth, 0, windowHeight);
	
	// Ajustar la posici�n inicial en el cuarto cuadrante
	polygonX = windowWidth - polygonSize;
	polygonY = 0;
	
	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	
	glutMainLoop();
	
	return 0;
}
