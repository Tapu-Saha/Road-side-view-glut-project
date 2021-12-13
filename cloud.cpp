void make_cloud(int x, int y)
{
glColor3f(1.0, 1.0, 1.0);
circle(10,10,x,y);
circle(10,10,x+10,y);
circle(10,10,x+30,y);
circle(10,10,x+5,y-10);
circle(10,10,x+20,y-10);
circle(10,10,x+5,y+10);
circle(10,10,x+20,y+10);
}
void cloud_move_right(GLfloat t){
tp3=tp3+t;
if(tp3>600)
tp3 = -300;
glutPostRedisplay();
}
void cloud()
{
glPushMatrix();
glTranslatef(tp3,0,0);
make_cloud(-300,280);
make_cloud(-500,280);
make_cloud(-200,250);
make_cloud(-400,250);
make_cloud(200,250);
make_cloud(-100,250);
make_cloud(-350,230);
glPopMatrix();
cloud_move_right(.1);
glEnd();
}