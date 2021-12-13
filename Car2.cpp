void makeprivatecar2(){
glColor3f(0.780, 0.082, 0.522);

rectangle(0,-10,60,15);
rectangle1(-15,-10,0,-10,-15,10,0,15);

glColor3f(0.098, 0.098, 0.439);
triangle(5,15,20,20,40);
glColor3f(0, 0, 0);
triangle(55,15,60,55,40);
glColor3f(0, 0, 0);
rectangle(20,15,55,40);

glColor3f(0, 0, 0);
circle(7,14,0,-10);
circle(7,14,45,-10);

glColor3f(1.000, 0.973, 0.863);
circle(5,10,0,-10);
circle(5,10,45,-10);
}
void privatecarMove2(){
if (isRedlight)
{
cm2 +=0;
}
else{
cm2=cm2-.4;
}


if(cm2<-500)
{
cm2 = 500;
}
glutPostRedisplay();
}
void privatecar2()
{
privatecarMove2();

glPushMatrix();
glTranslatef(cm2,-115,0);
makeprivatecar2();
glPopMatrix();

}