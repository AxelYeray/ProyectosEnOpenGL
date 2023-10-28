#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
double r,x,y,t;
int from_x,to_x,to_y,from_y,x1,x2,y2;
void ini(void) {
	glClearColor(0.19,0.70,0.84,0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,1000,0,1200);//tam de ventana
}		

void superficie(void){
	glColor3f(0.27,0.32,0.101);
	glBegin(GL_POLYGON);
	
	
	//superficie
	glVertex2i(0,455);//c
	glVertex2i(240,491.4);//d
	glVertex2i(235,418.6);//i
	glVertex2i(500,418.6);//e
	glVertex2i(610,409.5);	//F
	glVertex2i(600,0);	//L
	glVertex2i(610,409.5);	//f
	glVertex2i(865,418.6);	//g
	glVertex2i(1000,455);	//h
	glVertex2i(1000,391.3);	//j
	glVertex2i(1000,0);	//b
	glVertex2i(230,0);	//k
	glVertex2i(0,0); //a
	glEnd();}
	void sol(void){
		glColor3f(1.0f, 0.80f, 0.0f); // Color amarillo
		glBegin(GL_TRIANGLE_FAN);
		glVertex2i(3, 1600); // Centro del sol
		int numSegments = 100;
		for (int i = 0; i <= numSegments; i++) {
			float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
			float x = 120 * cosf(theta);
			float y = 300 * sinf(theta);
			glVertex2f(x + 3, y + 1200);
		}
		glEnd();
	}
		void nube(void){
			//nube
			glColor3f(1,1,1);
			glBegin(GL_POLYGON);
			glVertex2i(120,837.2); //	j14
			glVertex2i(	180,837.2); //	k14
			glVertex2i(	200,846.3); //	l14
			glVertex2i(	200,891.8); //	m14
			glVertex2i(	185,919.1); //	n14
			glVertex2i(	150,919.1); //	o14
			glVertex2i(	135,891.8); //	p14
			glVertex2i(	115,900.9); //	q14
			glVertex2i(	100,882.7); //	r14
			glVertex2i(	105,855.4); //	s14
			glEnd();
		
		}
			//mountains
			void mountains(void){
				glColor3f(0.74,0.69,0.015);
				glBegin(GL_POLYGON);
				glVertex2i(0,455);//c
				glVertex2i(0,655.2);//	z1
				glVertex2i(55,646.1);//	a2
				glVertex2i(60,591.5);//	b2
				glVertex2i(85,582.4);//	c2
				glVertex2i(90,455);//	d2
				glEnd();
				
				glColor3f(0.74,0.69,0.015);
				glBegin(GL_POLYGON);
				glVertex2i(125,473.2);//	e2
				glVertex2i(130,691.6);//	f2
				glVertex2i(150,746.2);//	g2
				glVertex2i(220,728);//	h2
				glVertex2i(240,491.4);//d 
				glEnd();
				
				glColor3f(0.74,0.69,0.015);
				glBegin(GL_POLYGON);
				glVertex2i(920,427.7);//	i2
				glVertex2i(925,637);//	j2
				glVertex2i(965,637);//	k2
				glVertex2i(965,582.4);//	l2
				glVertex2i(1000,582.4);//	m2
				glVertex2i(1000,455);	//h
				glEnd();}
				void piedra (void){
					//lagp
					glColor3f(0.074,0.41,0.63);
					glBegin(GL_POLYGON);
					glVertex2i(	790,0);//	m16
					glVertex2i(	795,54.6);//	l16
					glVertex2i(820,450);//	g16
					glVertex2i(	840,450.2);//	j16
					//glVertex2i(	840,54.6);//	h16
					glVertex2i(	1030,100.1);//	k16
					glVertex2i(	1040,45.5);//	i16
					glVertex2i(	1060,0);//	n16
					glEnd();}
					void cactus (void){
						//cactus 
						//bajo el sol
						glColor3f(0.298,0.733,0.090);
						glBegin(GL_POLYGON);
						glVertex2i(530,373.1);//	m
						glVertex2i(525,691.6);//	n
						glVertex2i(510,773.5);//	o
						glVertex2i(515,873.6);//	p
						glVertex2i(525,864.5);//	q
						glVertex2i(520,791.7);//	r
						glVertex2i(530,764.4);//	s
						glVertex2i(550,819);//	t
						glVertex2i(565,819);//	u
						glVertex2i(575,773.5);//	v
						glVertex2i(575,582.4);//	w
						glVertex2i(600,637);//	z
						glVertex2i(600,782.6);//	a1
						glVertex2i(615,791.7);//	b1
						glVertex2i(625,709.8);//	c1
						glVertex2i(625,637);//	d1
						glVertex2i(580,500.5);//	e1
						glVertex2i(575,382.2);//	f1
						glEnd();
						//esq. inferior izquierda
						glColor3f(0.298,0.733,0.090);
						glBegin(GL_POLYGON);
						glVertex2i(30,9.1);//	n2
						glVertex2i(30,54.6);//	o2
						glVertex2i(0,127.4);//	p2
						glVertex2i(0,318.5);//	q2
						glVertex2i(15,300.3);//	r2
						glVertex2i(20,154.7);//	s2
						glVertex2i(30,136.5);//	t2
						glVertex2i(35,345.8);//	u2
						glVertex2i(50,391.3);//	v2
						glVertex2i(65,345.8);//	w2
						glVertex2i(65,182);//	z2
						glVertex2i(100,273);//	a3
						glVertex2i(100,400.4);//	b3
						glVertex2i(100,436.8);//	c3
						glVertex2i(120,400.4);//	d3
						glVertex2i(115,245.7);//	e3
						glVertex2i(70,109.2);//	f3
						glVertex2i(65,0);//	g3
						glEnd();
						//c. posterior del anterior
						glColor3f(0.298,0.833,0.090);
						glBegin(GL_POLYGON);
						glVertex2i(130,0);//	s3
						glVertex2i(180,0);//	t3
						glVertex2i(180,182);//	u3
						glVertex2i(235,327.6);//	v3
						glVertex2i(235,546);//	w3
						glVertex2i(215,546);//	z3
						glVertex2i(210,391.3);//	a4
						glVertex2i(185,273);//	b4
						glVertex2i(180,546);//	c4
						glVertex2i(160,591.5);//	d4
						glVertex2i(130,546);//	e4
						glEnd();
					
						//catus a la izqda. del principal
						glColor3f(0.298,0.733,0.090);
						glBegin(GL_POLYGON);
						glVertex2i(400,336.7);//	e8
						glVertex2i(400,382.2);//	f8
						glVertex2i(380,427.7);//	g8
						glVertex2i(370,464.1);//	h8
						glVertex2i(340,509.6);//	i8
						glVertex2i(325,591.5);//	j8
						glVertex2i(350,591.5);//	k8
						glVertex2i(365,527.8);//	l8
						glVertex2i(365,591.5);//	m8
						glVertex2i(385,618.8);//	n8
						glVertex2i(385,527.8);//	o8
						glVertex2i(400,464.1);//	p8
						glVertex2i(400,637);//	q8
						glVertex2i(415,655.2);//	r8
						glVertex2i(430,627.9);//	s8
						glVertex2i(430,500.5);//	t8
						glVertex2i(450,582.4);//	u8
						glVertex2i(455,673.4);//	v8
						glVertex2i(470,646.1);//	w8
						glVertex2i(470,564.2);//	z8
						glVertex2i(455,491.4);//	a9
						glVertex2i(435,436.8);//	b9
						glVertex2i(430,345.8);//	c9
						glEnd();
						//C. cerca de iguana
						glColor3f(0.298,0.733,0.090);
						glBegin(GL_POLYGON);
						glVertex2i(725,0);//	s13
						glVertex2i(700,236.6);//	r13
						glVertex2i(710,263.9);//	t13
						glVertex2i(735,245.7);//	u13
						glVertex2i(745,136.5);//	v13
						glVertex2i(770,172.9);//	w13
						glVertex2i(765,236.6);//	z13
						glVertex2i(775,263.9);//	a14
						glVertex2i(790,236.6);//	b14
						glVertex2i(800,145.6);//	c14
						glVertex2i(760,100.1);//	d14
						glVertex2i(780,0);//	e14
						glEnd();}
						
						void molinoHelices(void){
							//molino de viento
							glColor3f(0.607,0.607,0.607);
							glBegin(GL_POLYGON);//hélices
							glVertex2i(300,600.6);//	k13
							glVertex2i(285,655.2);//	m13
							glVertex2i(290,664.3);//	n13
							glVertex2i(310,618.8);//	o13
							glEnd();
							glBegin(GL_POLYGON);
							glVertex2i(235,655.2);//	g13
							glVertex2i(240,618.8);//	h13
							glVertex2i(265,655.2);//	i13
							glVertex2i(260,673.4);//	j13
							glEnd();
							glBegin(GL_POLYGON);
							glVertex2i(285,718.9);//	a13
							glVertex2i(295,700.7);//	q13
							glVertex2i(320,728);//	w12
							glVertex2i(315,755.3);//	z12
							glEnd();
							glBegin(GL_POLYGON);
							glVertex2i(260,755.3);//	b13
							glVertex2i(245,755.3);//	d13
							glVertex2i(260,700.7);//	e13
							glVertex2i(270,709.8);//	f13
							glEnd();
						}
							
							
							void mbase (void){
								
								
								//base
								glColor3f(0,0,0);
								glLineWidth(2);
								glBegin(GL_LINES);
								glVertex2i(275,664.3);//	k12
								glVertex2i(285,691.6);//	t12
								glVertex2i(250,464.1);//	j12
								glVertex2i(275,664.3);//	k12
								glVertex2i(270,455);//	l12
								glVertex2i(275,664.3);//	k12
								glVertex2i(290,455);//	m12
								glVertex2i(275,664.3);//	k12
								glVertex2i(250,455);//	j12
								glVertex2i(285,546);//	n12
								glVertex2i(290,455);//	m12
								glVertex2i(260,555.1);//	o12
								glVertex2i(260,555.1);//	o12
								glVertex2i(280,609.7);//	p12
								glVertex2i(285,546);//	n12
								glVertex2i(270,609.7);//	q12
								glEnd();
								glPointSize(7);
								glColor3f(0,0,0);
								glBegin(GL_POINTS);
								glVertex2i(275,682.5);//	p13
								glEnd();
							}
								void eagle1(void){
									//eagle
									glColor3f(0,0,0);
									glBegin(GL_POLYGON);
									glVertex2i(820,882.7);//	g1
									glVertex2i(825,873.6);//	h1
									glVertex2i(835,891.8);//	i1
									glVertex2i(830,928.2);//	j1
									glVertex2i(810,910);//k1
									glVertex2i(800,946.4);//	l1
									glVertex2i(790,973.7);//	m1
									glVertex2i(785,964.6);//	n1
									glVertex2i(780,946.4);//	o1
									glVertex2i(785,910);//	p1
									glVertex2i(775,910);//	q1
									glVertex2i(765,891.8);//	r1
									glVertex2i(775,891.8);//	s1
									glVertex2i(785,882.7);//	t1
									glVertex2i(770,846.3);//	u1
									glVertex2i(775,819);//	v1
									glVertex2i(800,837.2);//	w1
									glEnd();
								}
									
									void eagle2(void){
										//eagle2
										glColor3f(0,0,0);
										glBegin(GL_POLYGON);
										glVertex2i(920,882.7);//	g1
										glVertex2i(925,873.6);//	h1
										glVertex2i(935,891.8);//	i1
										glVertex2i(930,928.2);//	j1
										glVertex2i(910,910);//k1
										glVertex2i(900,946.4);//	l1
										glVertex2i(890,973.7);//	m1
										glVertex2i(885,964.6);//	n1
										glVertex2i(880,946.4);//	o1
										glVertex2i(885,910);//	p1
										glVertex2i(875,910);//	q1
										glVertex2i(865,891.8);//	r1
										glVertex2i(875,891.8);//	s1
										glVertex2i(885,882.7);//	t1
										glVertex2i(870,846.3);//	u1
										glVertex2i(875,819);//	v1
										glVertex2i(900,837.2);//	w1
										glEnd();}
										void ave(void){
											//Ave
											glColor3f(0,0,0);
											glBegin(GL_POLYGON);
											glVertex2i(540,891.8);//	t14
											glVertex2i(	525,900.9);//	v14
											glVertex2i(	535,900.9);//	u14
											glVertex2i(	550,910);//	w14
											glVertex2i(	565,882.7);//	c15
											glVertex2i(	590,910);//	e15
											glVertex2i(	575,855.4);//	f15
											glVertex2i(	580,837.2);//	g15
											glVertex2i(	570,837.2);//	d15
											glVertex2i(	565,828.1);//	i15
											glVertex2i(	555,819);//	j15
											glVertex2i(	560,837.2);//	h15
											glVertex2i(	545,855.4);//	b15
											//glVertex2i(	550,891.8);//	z14
											glVertex2i(	545,882.7);//	a15
											glColor3f(1,1,0);
											glVertex2i(540,891.8);//	t14
											glVertex2i(	525,900.9);//	v14
											glVertex2i(	535,900.9);//	u14
											glEnd(); }
											void cobra(void){
												//Cobra
												glColor3f(1,0,0);
												glBegin(GL_POLYGON);
												glVertex2i(890,282.1);//	m15
												glVertex2i(	905,300.3);//	n15
												glVertex2i(	920,282.1);//	p15
												glVertex2i(	905,273);//	o15
												glEnd();
												glBegin(GL_POLYGON);
												glVertex2i(	905,273);//	o15
												glVertex2i(	900,236.6);//	q15
												glVertex2i(	905,218.4);//	r15
												glVertex2i(	920,227.5);//	t15
												glVertex2i(	910,254.8);//	s15
												glEnd();
												glBegin(GL_POLYGON);
												glVertex2i(	920,282.1);//	p15
												glVertex2i(	940,282.1);//	u15
												glVertex2i(	945,263.9);//	c16
												glVertex2i(	950,273);//	b16
												glVertex2i(	955,263.9);//	a16
												glVertex2i(	965,254.8);//	d16
												glVertex2i(	955,263.9);//	e16
												glVertex2i(	945,245.7);//	z15
												glVertex2i(	935,245.7);//	w15
												glVertex2i(	930,254.8);//	v15
												glVertex2i(	920,227.5);//	t15
												glEnd();}
												
												// Variables para controlar la escala de la figura
												float escala = 1.0;
												float reduccion = 0.005;
												void coyote(void){
													//perro	
													glColor3f(0.380,0.376,0.392);
													glBegin(GL_POLYGON);
													glVertex2i(640,464.1);//	k9
													glVertex2i(	635,445.9);//	l9
													glVertex2i(	640,436.8);//	m9
													glVertex2i(	645,418.6);//	n9
													glVertex2i(	650,409.5);//	o9
													glVertex2i(	650,382.2);//	p9
													glVertex2i(	660,373.1);//	q9
													glVertex2i(	660,327.6);//	r9
													glVertex2i(	655,318.5);//	s9
													glVertex2i(	650,309.4);//	t9
													glVertex2i(	665,309.4);//	u9
													glVertex2i(	670,309.4);//	v9
													glVertex2i(	670,354.9);//	w9
													glVertex2i(	680,364);//	z9
													glVertex2i(	690,373.1);//	a10
													glVertex2i(	700,373.1);//	b10
													glVertex2i(	705,354.9);//	c10
													glVertex2i(	710,354.9);//	d10
													glVertex2i(	710,327.6);//	e10
													glVertex2i(	700,318.5);//	f10
													glVertex2i(	700,309.4);//	g10
													glVertex2i(	710,309.4);//	h10
													glVertex2i(	715,336.7);//	i10
													glVertex2i(	725,318.5);//	j10
													glVertex2i(	720,318.5);//	k10
													glVertex2i(	720,309.4);//	l10
													glVertex2i(	730,309.4);//	m10
													glVertex2i(	730,318.5);//	n10
													glVertex2i(	725,345.8);//	o10
													glVertex2i(	720,391.3);//	p10
													glVertex2i(	730,364);//	q10
													glVertex2i(	735,345.8);//	r10
													glVertex2i(	750,327.6);//	s10
													glVertex2i(	755,345.8);//	t10
													glVertex2i(	750,373.1);//	u10
													glVertex2i(	745,391.3);//	v10
													glVertex2i(	730,418.6);//	w10
													glVertex2i(	715,427.7);//	z10
													glVertex2i(	710,436.8);//	a11
													glVertex2i(	695,436.8);//	b11
													glVertex2i(	680,436.8);//	c11
													glVertex2i(	670,445.9);//	d11
													glVertex2i(	665,464.1);//	e11
													glVertex2i(	670,482.3);//	f11
													glVertex2i(	665,500.5);//	g11
													glVertex2i(	660,491.4);//	h11
													glVertex2i(	655,473.2);//	i11
													glVertex2i(	650,473.2);//	j11
													glVertex2i(645,491.4);//	k11
													glVertex2i(645,509.6);//	l11
													glVertex2i(640,482.3);//	m11
													glEnd();
													glBegin(GL_POLYGON);
													glColor3f(0,0,0);
													glVertex2i(	735,345.8);//	r10
													glVertex2i(	755,354.9);//	f20
													glVertex2i(	755,345.8);//	t10
													glVertex2i(	750,327.6);//	s10
													glEnd();
													glColor3f(0.949,0.878,0.827);
													glBegin(GL_POLYGON);
													glVertex2i(	680,364);//	z9
													glVertex2i(	690,373.1);//	a10
													glVertex2i(	700,373.1);//	b10
													glVertex2i(700,382.2);//	e20
													glVertex2i(	675,382.2);//	d20
													glEnd();
													glBegin(GL_POLYGON);		
													glVertex2i(	640,445.9);//	i20
													glVertex2i(	645,455);//	j20
													glVertex2i(	640,464.1);//	k20
													glVertex2i(	645,464.1);//	l20
													glVertex2i(	645,455);//	m20
													glVertex2i(	640,436.8);//	n20
													glEnd();
													glBegin(GL_POLYGON);
													glVertex2i(645,418.6);//	n9
													glVertex2i(650,409.5);//	o9
													glVertex2i(650,382.2);//	p9
													glVertex2i(660,373.1);//	q9
													glVertex2i(660,382.2);//	c20
													glVertex2i(655,400.4);//	b20
													glVertex2i(655,427.7);//	a20
													glVertex2i(665,436.8);//	z19
													glVertex2i(660,445.9);//	w19
													glVertex2i(660,455);//	u19
													glVertex2i(655,464.1);//	t19
													glVertex2i(655,464.1);//	s19
													glVertex2i(650,445.9);//	v19
													glVertex2i(645,436.8);//	g20
													glVertex2i(640,427.7);//	h20
													escala -= reduccion;
													glEnd();}
													void display(void) {
														glClear(GL_COLOR_BUFFER_BIT);
														glLoadIdentity();
														
														glPushMatrix();
														glScalef(escala, escala, 1.0);
														
														coyote();
														
														glPopMatrix();
														glutSwapBuffers();
													}
													
													void arbusto (void){
														//arbusto rodante
														glColor3f(0.10,0.84,0.42);
														glLineWidth(7);
														glBegin(GL_LINES);
														glVertex2i(610,27.3);//	v4
														glVertex2i(585,45.5);//	w4
														glVertex2i(585,45.5);//	w4
														glVertex2i(590,91);//	z4
														glVertex2i(590,91);//	z4
														glVertex2i(580,136.5);//	a5
														glVertex2i(585,154.7);//	b5
														glVertex2i(590,91);//	z4
														glVertex2i(600,127.4);//	c5
														glVertex2i(600,127.4);//	c5
														glVertex2i(615,163.8);//	d5
														glVertex2i(610,27.3);//	v4
														glVertex2i(600,54.6);//	e5
														glVertex2i(600,54.6);//	e5
														glVertex2i(610,91);//	f5
														glVertex2i(610,91);//	f5
														glVertex2i(600,109.2);//	g5
														glVertex2i(600,109.2);//	g5 
														glVertex2i(590,163.8);//	h5
														glVertex2i(590,163.8);//	h5
														glVertex2i(600,182);//	i5
														glVertex2i(610,91);//	f5
														glVertex2i(605,118.3);//	j5
														glVertex2i(605,118.3);//	j5
														glVertex2i(625,145.6);//	k5
														glVertex2i(605,118.3);//	j5
														glVertex2i(605,154.7);//	l5
														glVertex2i(610,27.3);//	v4
														glVertex2i(600,36.4);//	m5
														glVertex2i(600,36.4);//	m5
														glVertex2i(580,27.3);//	n5
														glVertex2i(580,72.8);//	o5
														glVertex2i(580,72.8);//	o5
														glVertex2i(570,127.4);//	p5
														glVertex2i(580,72.8);//	o5
														glVertex2i(560,91);//	q5
														glVertex2i(560,91);//	q5
														glVertex2i(555,136.5);//	r5
														glVertex2i(580,27.3);//	n5
														glVertex2i(555,91);//	s5
														glVertex2i(600,36.4);//	m5
														glVertex2i(620,63.7);//	t5
														glVertex2i(620,63.7);//	t5
														glVertex2i(640,127.4);//	u5
														glVertex2i(640,127.4);//	u5
														glVertex2i(645,163.8);//	v5
														glVertex2i(640,127.4);//	u5
														glVertex2i(630,172.9);//	w5
														glVertex2i(630,100.1);//	z5
														glVertex2i(625,127.4);//	a6
														glVertex2i(610,27.3);//	v4
														glVertex2i(610,36.4);//	b6
														glVertex2i(610,36.4);//	b6
														glVertex2i(645,45.5);//	c6
														glVertex2i(645,45.5);//	c6
														glVertex2i(655,136.5);//	d6
														glVertex2i(645,45.5);//	c6
														glVertex2i(635,81.9);//	e6
														glVertex2i(610,36.4);//	b6
														glVertex2i(660,81.9);//	f6
														glEnd();}
												
														void iguana(void){
															//iguana
															glColor3f(0.298,0.733,0.090);
															glBegin(GL_POLYGON);
															glVertex2i(915,81.9);//	g6
															glVertex2i(900,100.1);//	h6
															glVertex2i(880,109.2);//	i6
															glVertex2i(875,127.4);//	j6
															glVertex2i(860,127.4);//	k6
															glVertex2i(855,118.3);//	l6
															glVertex2i(865,100.1);//	m6
															glVertex2i(855,91);//	n6
															glColor3f(0.196,0.803,0.196);
															glVertex2i(865,81.9);//	o6
															glVertex2i(880,81.9);//	p6
															glVertex2i(870,72.8);//	q6
															glVertex2i(880,63.7);//	r6
															glVertex2i(890,72.8);//	s6
															glVertex2i(895,63.7);//	t6
															glColor3f(0.498,1,0.831);
															glVertex2i(905,63.7);//	u6
															glVertex2i(915,54.6);//	v6
															glVertex2i(910,36.4);//	w6
															glVertex2i(920,36.4);//	z6
															glVertex2i(925,63.7);//	a7
															glEnd();
															glColor3f(0.498,1,0.831);
															glBegin(GL_LINES);
															glVertex2i(925,63.7);//	a7
															glVertex2i(950,45.5);//	b7
															glVertex2i(950,45.5);//	b7
															glVertex2i(950,36.4);//	c7
															glVertex2i(950,36.4);//	c7
															glVertex2i(940,27.3);//	d7
															glEnd();}
															void serpiente (void){
																//serpiente
																glColor3f(0,0,0);
																glBegin(GL_POLYGON);
																glVertex2i(455,236.6);//	e7
																glVertex2i(475,254.8);//	f7
																glVertex2i(475,218.4);//	g7
																glEnd();
																glLineWidth(17);
																glBegin(GL_LINES);
																glColor3f(1,0,0);
																glVertex2i(465,227.5);//	h7
																glVertex2i(460,209.3);//	i7
																glColor3f(0,0,0);
																glVertex2i(460,209.3);//	i7
																glVertex2i(455,200.2);//	j7
																glLineWidth(16.5);
																glColor3f(1,1,1);
																glVertex2i(455,200.2);//	j7
																glVertex2i(450,182);//	k7
																glColor3f(0,0,0);
																glVertex2i(450,182);//	k7
																glVertex2i(455,163.8);//	l7
																glLineWidth(16);
																glColor3f(1,0,0);
																glVertex2i(455,163.8);//	l7
																glVertex2i(460,163.8);//	m7
																glColor3f(0,0,0);
																glVertex2i(460,163.8);//	m7
																glVertex2i(470,154.7);//	n7
																glLineWidth(15.5);
																glColor3f(1,1,1);
																glVertex2i(470,154.7);//	n7
																glVertex2i(480,172.9);//	o7
																glColor3f(0,0,0);
																glVertex2i(480,172.9);//	o7
																glVertex2i(485,182);//	p7
																glLineWidth(15);
																glColor3f(1,0,0);
																glVertex2i(485,182);//	p7
																glVertex2i(495,191.1);//	q7
																glColor3f(0,0,0);
																glVertex2i(495,191.1);//	q7
																glVertex2i(500,182);//	r7
																glLineWidth(14.5);
																glColor3f(1,1,1);
																glVertex2i(500,182);//	r7
																glVertex2i(500,172.9);//	s7
																glColor3f(0,0,0);
																glVertex2i(500,172.9);//	s7
																glVertex2i(495,154.7);//	t7
																glLineWidth(14);
																glColor3f(1,0,0);
																glVertex2i(495,154.7);//	t7
																glVertex2i(490,145.6);//	u7
																glColor3f(0,0,0);
																glVertex2i(490,145.6);//	u7
																glVertex2i(480,136.5);//	v7
																glLineWidth(13.5);
																glColor3f(1,1,1);
																glVertex2i(480,136.5);//	v7
																glVertex2i(475,127.4);//	w7
																glColor3f(0,0,0);
																glVertex2i(475,127.4);//	w7
																glVertex2i(470,118.3);//	z7
																glLineWidth(13);
																glColor3f(1,0,0);
																glVertex2i(470,118.3);//	z7
																glVertex2i(470,109.2);//	a8
																glColor3f(0,0,0);
																glVertex2i(470,109.2);//	a8
																glVertex2i(480,100.1);//	b8
																glLineWidth(12.5);
																glColor3f(1,1,1);
																glVertex2i(480,100.1);//	b8
																glVertex2i(480,91);//	c8	
																glColor3f(0,0,0);
																glVertex2i(480,91);//	c8
																glVertex2i(475,81.9);//	d8
																glEnd();}
																void aveztruz(void){
																	//aveztruz cuerpo
																	glColor3f(0.8073,0.607,0.411);
																	glBegin(GL_POLYGON);
																	glVertex2i(	290,136.5);//	s16
																	glVertex2i(	280,145.6);//	t16
																	glVertex2i(	270,163.8);//	u16
																	glVertex2i(	280,227.5);//	v16
																	glVertex2i(	330,200.2);//	w16
																	glVertex2i(	350,163.8);//	z16
																	glVertex2i(	345,136.5);//	a17
																	glVertex2i(	335,145.6);//	b17
																	glVertex2i(	315,136.5);//	c17
																	glEnd();
																	glColor3f(0.949,0.878,0.827);
																	glBegin(GL_POLYGON);//cuello y patas
																	glVertex2i(300,100.1);//	r16
																	glVertex2i(	290,136.5);//	s16
																	glVertex2i(	315,136.5);//	c17
																	glVertex2i(	315,127.4);//	d17
																	glVertex2i(	310,109.2);//	e17
																	glVertex2i(	305,36.4);//	f17
																	glVertex2i(	305,27.3);//	g17
																	glVertex2i(	300,45.5);//	i17
																	glEnd();
																	glBegin(GL_POLYGON);
																	glVertex2i(	285,300.3);//	k17
																	glVertex2i(	280,327.6);//	l17
																	glVertex2i(	275,327.6);//	m17
																	glVertex2i(	270,318.5);//	n17
																	glVertex2i(	275,309.4);//	o17
																	glVertex2i(	270,263.9);//	p17
																	glVertex2i(	265,236.6);//	q17
																	glVertex2i(	275,172.9);//	r17
																	glVertex2i(	280,227.5);//	v16
																	glEnd();
																	glLineWidth(7);
																	glColor3f(0,0,0);
																	glBegin(GL_LINES);
																	glVertex2i(	305,27.3);//	g17
																	glVertex2i(	285,36.4);//	h17
																	glVertex2i(	300,45.5);//	i17
																	glVertex2i(	290,45.5);//	j17
																	glVertex2i(	270,318.5);//	n17
																	glVertex2i(	265,318.5);//	s17
																	glEnd();}
																	void tortuga (void){
																		//tortuga
																		glColor3f(0.8073,0.607,0.411);
																		glBegin(GL_POLYGON);
																		glVertex2i(800,345.8);//	v17
																		glVertex2i(	805,354.9);//	w17
																		glVertex2i(	815,373.1);//	z17
																		glVertex2i(	820,391.3);//	a18
																		glVertex2i(	830,391.3);//	b18
																		glVertex2i(	840,400.4);//	c18
																		glVertex2i(	855,391.3);//	d18
																		glVertex2i(	870,382.2);//	e18
																		glVertex2i(	875,373.1);//	f18
																		glVertex2i(	875,354.9);//	g18
																		glVertex2i(	865,336.7);//	h18
																		glVertex2i(	860,327.6);//	i18
																		glVertex2i(	845,318.5);//	j18
																		glVertex2i(	830,318.5);//	k18
																		glVertex2i(	820,327.6);//	l18
																		glVertex2i(	805,327.6);//	m18
																		glVertex2i(	800,336.7);//	r18
																		glEnd();
																		glColor3f(0.419,0.556,0.137);
																		glBegin(GL_POLYGON);//cuello y patas
																		//glVertex2i(805,330);//	u18
																		//glVertex2i(	865,327.6);//	v18
																		glVertex2i(	860,327.6);//	i18
																		glVertex2i(	865,318.5);//	w18
																		glVertex2i(	875,327.6);//	z18
																		glVertex2i(	875,318.5);//	a19
																		glVertex2i(	885,336.7);//	b19
																		glVertex2i(	900,391.3);//	g19
																		glVertex2i(	895,391.3);//	h19
																		glEnd();
																		glColor3f(0.419,0.556,0.137);
																		glBegin(GL_POLYGON);
																		glVertex2i(800,345.8);//	v17
																		glVertex2i(800,336.7);//	r18
																		glVertex2i(	810,327.6);//	s18
																		glVertex2i(	805,318.5);//	t18
																		glVertex2i(	805,309.4);//	u18
																		glVertex2i(	795,309.4);//	p18
																		glVertex2i(	790,318.5);//	o18
																		glVertex2i(	790,336.7);//	n18
																		glEnd();
																		glColor3f(0.419,0.556,0.137);
																		glBegin(GL_POLYGON);
																		glVertex2i(880,364);//	c19
																		glVertex2i(	890,364);//	d19
																		glVertex2i(	895,373.1);//	e19
																		glVertex2i(	895,382.2);//	f19
																		glVertex2i(	900,391.3);//	g19
																		glVertex2i(	895,391.3);//	h19
																		glVertex2i(	885,400.4);//	i19
																		glVertex2i(	880,391.3);//	j19
																		glVertex2i(	880,382.2);//	k19
																		glVertex2i(	870,382.2);//	l19
																		glVertex2i(	875,373.1);//	f18
																		glVertex2i(	875,354.9);//	g18
																		glEnd();}
																		
																		
																		void lago(void){
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
																		}
																		
																		void bosque (void) {
																			
																			for(float i=0; i<90*20; i+=0.02){
																				glClear(GL_COLOR_BUFFER_BIT);
																				
																				superficie();
																				sol();
																				glTranslated(i,0,0);
																				nube();
																				tortuga();
																				glTranslated(-i,0,0);
																				arbusto();
																			
																				mountains();
																				piedra();
																				cactus();
																				mbase();
																				coyote();
																				glutPostRedisplay();
																				//(100, timer, 0);
																				
																				glTranslated(275,682.5,0);
																				glRotated(i/3,0,0,1);
																				glTranslated(-275,-682.5,0);
																				molinoHelices();
																				glTranslated(275,682.5,0);
																				glRotated(-i/3,0,0,1);
																				glTranslated(-275,-682.5,0);
																				
																				glTranslated(-i/2,0,0);
																				eagle1();
																				glTranslated(i/2,0,0);
																				
																				glTranslated(-i/4,i/5,0);
																				eagle2();
																				ave();
																				glTranslated(i/4,-i/5,0);
																				
																				glTranslated(-i,0,0);
																				
																				glTranslated(i,0,0);
																				
																				
																				
																				glTranslated(i,0,0);
																				
																				glTranslated(610,90,0);
																				glRotated(-i,0,0,1);
																				glTranslated(-610,-90,0);
																			
																				glTranslated(610,90,0);
																				glRotated(i,0,0,1);
																				glTranslated(-610,-90,0);
																				
																				glTranslated(-i,0,0);
																				
																				iguana();
																				serpiente();
																				//aveztruz();
																				//lago();
																				glFlush();
																				
																				
																			}
																		}
																		
																		
																		int main (int argc, char **argv) {
																			glutInitWindowSize(700,700);
																			glutInit (&argc, argv);
																			glutCreateWindow("Paisaje");
																			ini();
																			glutDisplayFunc(bosque);
																			glutMainLoop();
																			return 0;
																		}
