#include <GL/glut.h>
#include <math.h>

int windowWidth = 500;
int windowHeight = 500;
int centerX = windowWidth / 2;
int centerY = windowHeight / 2;
float hexagonRotation = 0.0; // �ngulo de rotaci�n del hex�gono
float hexagonSideLength = 50.0; // Longitud de los lados del hex�gono
int numVertices = 6; // N�mero de v�rtices del hex�gono

float squareX = centerX - 25.0;
float squareY = windowHeight - 25.0;
float squareSize = 50.0;
bool squareDescending = true;
bool hexagonTouched = false;

void drawAxes() {
	glColor3f(0.0, 0.0, 0.0); // Color rojo para el eje X
	glBegin(GL_LINES);
	glVertex2f(0, centerY);
	glVertex2f(windowWidth, centerY);
	glEnd();
	
	glColor3f(0.0, 0.0, 0.0); // Color verde para el eje Y
	glBegin(GL_LINES);
	glVertex2f(centerX, 0);
	glVertex2f(centerX, windowHeight);
	glEnd();
}

void drawHexagon() {
	glPushMatrix();
	glTranslatef(centerX, centerY, 0.0);
	glRotatef(hexagonRotation, 0.0, 0.0, 1.0); // Rotaci�n del hex�gono
	
	// Color de relleno del hex�gono
	if (hexagonTouched) {
		glColor3f(0.0, 0.0, 0.0); // Rosa cuando se toca
	} else {
		glColor3f(1.0, 0.0, 0.0); // Azul
	}
	glBegin(GL_POLYGON);
	for (int i = 0; i < numVertices; i++) {
		float angle = 2.0 * M_PI * i / numVertices;
		float x = hexagonSideLength * cos(angle);
		float y = hexagonSideLength * sin(angle);
		glVertex2f(x, y);
	}
	glEnd();
	
	// Color del borde del hex�gono
	glColor3f(1.0, 1.0, 1.0); // Blanco
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < numVertices; i++) {
		float angle = 2.0 * M_PI * i / numVertices;
		float x = hexagonSideLength * cos(angle);
		float y = hexagonSideLength * sin(angle);
		glVertex2f(x, y);
	}
	glEnd();
	
	glPopMatrix();
}

void drawSquare() {
	glColor3f(0.0, 0.0, 0.0); // Rosa
	glRectf(squareX, squareY - squareSize, squareX + squareSize, squareY);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	drawAxes();
	drawSquare();
	drawHexagon();
	
	glFlush();
}

void timer(int) {
	hexagonRotation += 1.0; // Aumenta el �ngulo de rotaci�n
	if (hexagonRotation >= 360.0) {
		hexagonRotation -= 360.0;
	}
	
	if (squareDescending) {
		if (squareY >= centerY - squareSize / 2) {
			squareY -= 1.0;
		} else {
			squareDescending = false;
			hexagonTouched = true;
		}
	} else {
		if (squareY < windowHeight - squareSize) {
			squareY += 1.0;
		}
	}
	
	glutPostRedisplay();
	glutTimerFunc(16, timer, 0); // Llama a la funci�n timer cada 16ms
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("Hex�gono con Cuadrado en GLUT");
	
	glClearColor(1.0, 1.0,1.0 , 0); // Color de fondo negro
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, windowWidth, 0, windowHeight);
	
	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	
	glutMainLoop();
	
	return 0;
}
