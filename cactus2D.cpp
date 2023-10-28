#include <GL/glut.h>

void inicializa (void){
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,500,0,500);
}
	
	void dibujo2d(void){
		glClear(GL_COLOR_BUFFER_BIT);
		glLineWidth(6);
		glBegin(GL_TRIANGLE_FAN);
		//Maceta
		glColor3f(1,0.439,0.156);
		glVertex2i(165,153);//d
		glVertex2i(247.5,153);//e
		glVertex2i(220,90);//f
		glVertex2i(203.5,31.5);//g
		glColor3f(0.929,0.568,0.129);
		glVertex2i(253,31.5);//h
		glVertex2i(253,81);//i
		glVertex2i(231,58.5);//j
		glColor3f(0.929,0.568,0.101);
		glVertex2i(275,67.5);//k
		glVertex2i(308,31.5);//l
		glVertex2i(313.5,99);//m
		glColor3f(0.984,0.639,0.129);
		glVertex2i(330,153);//n
		glVertex2i(297,157.5);//o
		glVertex2i(192.5,157.5);//q
		glEnd();
		
		//cactus
		glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.298,0.733,0.09);//2
		glVertex2i(192.5,157.5);//q
		glVertex2i(192.5,216);//r
		glColor3f(0.678,1,0);//1
		glVertex2i(247.5,180);//p
		glColor3f(0,1,0);
		glVertex2i(302.5,216);//s
		glVertex2i(297,157.5);//o
		glColor3f(0.501,0.501,0);//olivo
		glVertex2i(247.5,247.5);//t
		glColor3f(0.298,0.733,0.09);//2
		glVertex2i(236.5,427.5);//d1
		
		glVertex2i(297,256.5);//w
		glColor3f(0.678,1,0);//1
		glVertex2i(165,153);//d
		glVertex2i(247.5,153);//e
		glColor3f(0.196,0.803,0.196);//yg
		glVertex2i(297,256.5);//w
		glVertex2i(286,432);//e1
		glColor3f(0.678,1,0);//1
		glVertex2i(258.5,463.5);//f1
		glColor3f(0.501,0.501,0);//olivo
		glVertex2i(220,468);//g1
		glVertex2i(187,441);//h1
		glVertex2i(181.5,405);//i1
		glColor3f(0.196,0.803,0.196);//yg
		glVertex2i(192.5,270);//j1
		glVertex2i(110,270);//k1
		glVertex2i(137.5,315);//l1
		glColor3f(0.678,1,0);//1
		
		glVertex2i(297,157.5);//o
		glVertex2i(247.5,180);//p
		glColor3f(0.501,0.501,0);//olivo
		glVertex2i(302.5,216);//s
		glVertex2i(297,157.5);//o
		glColor3f(0,1,0);
		glVertex2i(247.5,180);//p
		glVertex2i(297,256.5);//w
		glVertex2i(302.5,216);//s
		glColor3f(0.678,1,0);//1
		glVertex2i(247.5,247.5);//t
		glVertex2i(297,256.5);//w
		glEnd();
		
		glBegin(GL_TRIANGLE_FAN);
		//ramaIzquierda
		glColor3f(0,1,0);//
		/*glVertex2i(236.5,427.5);//d1
		glVertex2i(286,432);//e1
		glVertex2i(258.5,463.5);//f1
		glVertex2i(220,468);//g1
		glVertex2i(187,441);//h1
		glVertex2i(181.5,405);//i1
		glVertex2i(192.5,270);//j1
		glVertex2i(110,270);//k1
		glVertex2i(137.5,315);//l1*/
		glVertex2i(192.5,216);//r
		glVertex2i(110,328.5);//m1
		glVertex2i(165,360);//p1
		glVertex2i(137.5,315);//l1
		glVertex2i(192.5,216);//r
		glColor3f(0.196,0.803,0.196);//yg
		glVertex2i(110,328.5);//m1
		glVertex2i(165,328.5);//o1
		glVertex2i(165,283.5);//n1
		glVertex2i(165,360);//p1
		glVertex2i(132,369);//q1
		glEnd();
		
		glBegin(GL_TRIANGLE_FAN);
		//ramaDerecha
		glColor3f(0.298,0.733,0.09);
		glVertex2i(313.5,405);//a1
		glVertex2i(340,328.5);//b1
		glVertex2i(297,382.5);//c1
		glVertex2i(357.5,270);//u
		glColor3f(0.501,0.501,0);//olivo
		glVertex2i(330,297);//v
		glVertex2i(297,256.5);//w
		glVertex2i(341,351);//x
		glColor3f(0.678,1,0);
		glVertex2i(357.5,405);//y
		glVertex2i(297,382.5);//c1
		glVertex2i(330,297);//v
		glVertex2i(330,427.5);//z
		glVertex2i(297,256.5);//w
		glVertex2i(330,297);//v
		glColor3f(0,1,0);
		glVertex2i(357.5,270);//u
		glVertex2i(297,256.5);//w
		glVertex2i(302.5,216);//s
		glColor3f(0.196,0.803,0.196);
		glVertex2i(357.5,270);//u
		glVertex2i(357.5,270);//u
		glVertex2i(330,427.5);//z
		glVertex2i(313.5,405);//a1
		glEnd();
		
		
		glBegin(GL_TRIANGLES);
		//maceta
		glColor3f(1,0.643,0.125);
		glVertex2i(203.5,31.5);//g
		glVertex2i(253,81);//i
		glVertex2i(308,31.5);//l
		
		glColor3f(0.298,0.733,0.09);
		glVertex2i(110,328.5);//m1
		glVertex2i(165,328.5);//o1
		glVertex2i(165,283.5);//n1
		
		glEnd();
		glFlush();
	}
		int main (int argc, char **argv) {
			glutInitWindowSize(500,500);
			glutInit (&argc, argv);
			glutCreateWindow("Programa basico de programacion en 2D");
			inicializa();
			glutDisplayFunc(dibujo2d);
			glutMainLoop();
			return 0;
		}
		
		
