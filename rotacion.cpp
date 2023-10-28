#include <GL/glut.h>
#include <math.h>

int windowWidth = 500;
int windowHeight = 500;

int sides = 4;  // Número de lados del polígono
float angle = 0.0;  // Ángulo de rotación del polígono
float rotationSpeed = 1.0;  // Velocidad de rotación
float polygonSize = 50.0;  // Tamaño del polígono
float polygonX = 0;  // Posición inicial en el cuarto cuadrante
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
	// Dibujar un polígono
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
	// Actualizar el ángulo de rotación
	angle += rotationSpeed;
	
	// Mover el polígono en el cuarto cuadrante
	polygonX += rotationSpeed;
	
	// Limitar la posición del polígono dentro de la ventana
	if (polygonX > windowWidth)
		polygonX = 0;
	
	if (polygonY > windowHeight)
		polygonY = 0;
	
	// Volver a dibujar
	glutPostRedisplay();
	glutTimerFunc(16, timer, 0); // Llamar a la función timer cada 16ms
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("Polígono en Cuarto Cuadrante en GLUT");
	
	glClearColor(0.0, 0.0, 0.0, 1.0); // Color de fondo negro
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, windowWidth, 0, windowHeight);
	
	// Ajustar la posición inicial en el cuarto cuadrante
	polygonX = windowWidth - polygonSize;
	polygonY = 0;
	
	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	
	glutMainLoop();
	
	return 0;
}
