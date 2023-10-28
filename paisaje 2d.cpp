#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
double r,x,y,t;
int from_x,to_x,to_y,from_y,x1,x2,y2;

void inicio() {
	glClearColor(0.21f, 0.96f, 0.86f, 1.0f); // Color blanco
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2500, 0, 2500); // Ventana de 800x600
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
 	
	// Dibujar el cielo
	glColor3f(0.02f, 0.02f, 0.2f); // Naranja medio
	glBegin(GL_QUADS);
	glVertex2i(0, 2500);
	glVertex2i(2500, 2500);
	glVertex2i(2500, 0);
	glVertex2i(0, 0);
	glEnd();
	
	// Dibujar el sol
	glColor3f(1.0f, 0.80f, 0.0f); // Color amarillo
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(100, 2300); // Centro del sol
	int numSegments = 100;
	for (int i = 0; i <= numSegments; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
		float x = 200 * cosf(theta);
		float y = 300 * sinf(theta);
		glVertex2f(x + 100, y + 2300);
	}
	glEnd();
	
	// Dibujar el suelo
	glColor3f(0.0f, 0.2f, 0.09); // Color Negro
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(2500, 0);
	glVertex2i(2500, 300);
	glVertex2i(0, 300);
	glEnd();
	
	
	
	//MONTAÑA 4
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.0, 0.2);
	// Color gris oscuro
	glVertex2i(294, 1390); //M
	glVertex2i(574, 1940); //A4
	glVertex2i(817, 1841); //B4
	glVertex2i(1098, 2345); //C4
	glVertex2i(1712, 1949); //V3
	glVertex2i(1758, 1274); //D4
	glVertex2i(483, 566); //R3
	glEnd();
	
	//sombre
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.01, 0.24);
	glVertex2i(817, 1841); //M
	glVertex2i(948, 1485); //A4
	glVertex2i(1281, 1780); //B4
	glVertex2i(1639, 1792); //C4
	glVertex2i(1545, 2060); //V3
	glEnd();
	
	//nieve
	glBegin(GL_POLYGON);
	glColor3f(0.87, 0.87, 0.87);
	glVertex2i(935, 2145); //N2
	glVertex2i(1016, 2036); //02
	glVertex2i(1103, 2113); //P2
	glVertex2i(1164, 2056); //Q2
	glVertex2i(1198, 2145); //E4
	glVertex2i(1281, 2093); //F4
	glVertex2i(1306, 2211); //G4
	glVertex2i(1098, 2345); //C4
	glEnd();
	// Color gris oscuro
	
	//MONTAÑA 3
	glBegin(GL_POLYGON);
	glColor3f(0.06f, 0.0116f, 0.061f); // Color gris oscuro
	glVertex2i(200, 1000); //R
	glVertex2i(948, 1485); //S3
	glVertex2i(1500, 1500); //N3
	glVertex2i(1712, 1949); //U3
	glVertex2i(2112, 1880); //V3
	glVertex2i(2272, 2202); //W3
	glVertex2i(2500, 2000); //R3
	glVertex2i(2500, 300); //O3
	glVertex2i(1069, 298); //A1
	glVertex2i(1042, 399); //Z
	glEnd();
	
	//sombra
	glBegin(GL_POLYGON);
	glColor3f(0.03f, 0.0100f, 0.059f); // Color gris oscuro
	glVertex2i(1712, 1949);
	glVertex2i(2153, 1607);
	glVertex2i(2500, 2000);
	glEnd();
	
	
	//primera montaña
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f); // Color gris oscuro
	glVertex2i(0, 1476);
	glVertex2i(85, 1460);
	glVertex2i(191, 1428); // L
	glVertex2i(294, 1390); //M
	glVertex2i(372, 1315); //N
	glVertex2i(412, 1227);//O
	glVertex2i(447, 1126);//p
	glVertex2i(512, 1061);//Q
	glVertex2i(600, 1000);//R
	glVertex2i(647, 839);//s
	glVertex2i(733, 730);//T
	glVertex2i(800, 600);//U
	glVertex2i(861, 496);//V
	glVertex2i(974, 508);//W
	glVertex2i(1080, 417);//Z
	glVertex2i(1118, 300);//A1
	glVertex2i(0, 300);//
	glVertex2i(0, 1476);//V
	glEnd();
	
	//sombra primera montaña
	glBegin(GL_POLYGON);
	glColor3f(0.099f, 0.07f, 0.11f); // Color gris oscuro
	glVertex2i(0, 1476);
	glVertex2i(85, 1460);
	glVertex2i(191, 1428); // L
	glVertex2i(294, 1390); //M
	glVertex2i(372, 1315); //N
	glVertex2i(412, 1227);//O
	glVertex2i(199, 1066);//O
	glVertex2i(0, 1080); //N
	glEnd();
	
	
	//montaña 2
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.09f, 0.0f); // Color gris oscuro
	glVertex2i(974, 508); //W
	glVertex2i(1207, 761); //M3
	glVertex2i(1417, 856); //N3
	glVertex2i(1638, 780); //O3
	glVertex2i(1924, 1100); //P3
	glVertex2i(2180, 1039); //Q3
	glVertex2i(2496, 1531); //R3
	glVertex2i(2500, 300); //O3
	glVertex2i(1069, 298); //A1
	glVertex2i(1042, 399); //Z
	glEnd();
	
	//sombra montaña 2
	glBegin(GL_POLYGON);
	glColor3f(0.25f, 0.015f, 0.0f); // Color gris oscuro
	glVertex2i(1207, 761); //m3
	glVertex2i(1671, 500);
	glVertex2i(1924, 1150);
	glVertex2i(1638, 780);
	glVertex2i(1417, 856);
	glEnd();
	
	//sombra montaña 22
	glBegin(GL_POLYGON);
	glColor3f(0.25f, 0.015f, 0.0f); // Color gris oscuro
	glVertex2i(2180, 1039); //m3
	glVertex2i(2296, 959);
	glVertex2i(2375, 1094);
	glVertex2i(2491, 963);
	glVertex2i(2496, 1531);
	glEnd();
	
	//casa
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f); // Color gris oscuro
	glVertex2i(1950, 600); //D2
	glVertex2i(2350, 600); //E2
	glVertex2i(2350, 299); //F2
	glVertex2i(1950, 299); //R2
	glEnd();
	
	//TECHO
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f); // Color gris oscuro
	glVertex2i(1900, 600); //S2
	glVertex2i(2400, 600); //E2
	glVertex2i(2150, 800); //U2
	glEnd();
	
	//Interior techo
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.549, 0.0);
	glVertex2i(2024, 639); //J3
	glVertex2i(2150, 750); //K3
	glVertex2i(2284, 638); //L3
	glEnd();
	
	//puerta
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.549, 0.0);
	glVertex2i(2100, 300); //V2
	glVertex2i(2100, 400); //W2
	glVertex2i(2200, 400); //Z2
	glVertex2i(2200, 300); //A3
	glEnd();
	
	//ventana 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.549, 0.0);
	glVertex2i(2200, 550); //B3
	glVertex2i(2300, 550); //C3
	glVertex2i(2300, 450); //D3
	glVertex2i(2200, 450); //E3
	glEnd();
	
	//ventana 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.549, 0.0);
	glVertex2i(2000, 550); //B3
	glVertex2i(2100, 550); //C3
	glVertex2i(2100, 450); //D3
	glVertex2i(2000, 450); //E3
	glEnd();
	
	//lago 
	glBegin(GL_POLYGON);
	glColor3f(0.02f, 0.02f, 0.37f);
	glVertex2i(1294, 248); //C1
	glVertex2i(1631, 263); //D1
	glVertex2i(1838, 242); //E1	
	glVertex2i(1939, 188); //F1
	glVertex2i(1960, 64); //G1
	glVertex2i(1602, 48); //H1
	glVertex2i(1462, 39); //I1
	glVertex2i(1342, 47); //J1
	glVertex2i(1145, 44); //K1
	glVertex2i(1099, 162); //L1
	glEnd();
	
	//sombra lago
	glBegin(GL_POLYGON);
	glColor3f(0.02f, 0.02f, 0.4f);
	glVertex2i(1631, 263); //D1
	glVertex2i(1838, 242); //E1	
	glVertex2i(1939, 188); //F1
	glVertex2i(1960, 64); //G1
	glVertex2i(1602, 48); //H1
	glVertex2i(1462, 39); //I1
	glVertex2i(1612, 133);
	glEnd();
	
	//estrella
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1600, 2400); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1700, 2300); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1800, 2200); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1900, 2100); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2000, 2400); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(600, 2400); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(690, 2269); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(828, 2213); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(953, 2386); //m1
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(753, 2138); //m1
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(623, 2143); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(544, 2209); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(483, 2325); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(400, 2000); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1982, 2260); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2033, 2395); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2275, 2409); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2089, 2218); 
	glEnd(); 
 
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2189, 2218); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2289, 2218); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2389, 2218); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(2489, 2418); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1089, 2418); 
	glEnd(); 
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1189, 2418); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1189, 2518); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1189, 2300); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(1389, 2300); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(200, 1800); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(300, 1900); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(400, 2000); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(620, 2000); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(530, 2000); 
	glEnd();
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(460, 2000); 
	glEnd();
	
	
	glBegin(GL_POINTS); // Inicia el modo de dibujo de puntos
	glColor3f(1.0f, 0.80f, 0.0f); // Establece el en amarillo
	glVertex2i(460, 2000); 
	glEnd();
	
	float nubePosX = 0.0;  // Variable para controlar la posición horizontal de las nubes
	
		// Dibuja una nube en la posición (x + nubePosX, y)
		glColor3f(1.0, 1.0, 1.0); // Color blanco para la nube
		int radio = 50; // Radio de la nube
		int numSegmentos = 10; // Número de segmentos para aproximar el círculo
		
		glBegin(GL_TRIANGLE_FAN);
		glVertex2i(x + nubePosX, y); // Centro de la nube
		
		for (int i = 0; i <= numSegmentos; ++i) {
			float angulo = 2.0f * 3.1415926f * float(i) / float(numSegmentos);
			float xNube = x + nubePosX + radio * cosf(angulo);
			float yNube = y + 40 * sinf(angulo); // Pequeñas variaciones en la altura para que parezca una nube irregular
			glVertex2f(xNube, yNube);
		}
		
		glEnd();
	
	
	glFlush();
}

void envoltura(void){
	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Paisaje Minimalista");
	glutDisplayFunc(display);
	inicio();
	glutMainLoop();
	return 0;
}
