void makeprivatecar()
{
//1st left car circle
    glColor3f(0.902, 0.902, 0.980);
    circle(8,14,2,1);
//middle rectangle
    rectangle(0,-10,60,15);
//right one
    rectangle1(60,-10,80,-10,60,15,80,5);
// left upper triangle
    glColor3f(0.184, 0.310, 0.310);
    triangle(5,15,20,20,40);
    glColor3f(0.0, 0.0, 1.0);
    triangle(40,15,60,40,40);
//upper middle one
    glColor3f(0, 0, 1.0);
    rectangle(20,15,40,40);
// black wheel round
    glColor3f(0, 0, 0);
    circle(7,14,10,-10);
    circle(7,14,60,-10);
// wheel white
    glColor3f(1.000, 0.973, 0.863);
    circle(5,10,10,-10);
    circle(5,10,60,-10);
}
void privatecarMove()
{
    if (isRedlight)
    {
        cm +=0;
    }
    else
    {
        cm=cm+.4;
    }
    if(cm>500)
    {
        cm = -500;
    }
    glutPostRedisplay();
}
void privatecar()
{
    privatecarMove();
    {
        if (isRedlight)
        {
            glColor3f( 0.000, 0.00, 0.000);
            circle(3,4,44,90);
        }
        else
        {
            glColor3f(0.000, 0.000, 0.000);
            circle(3,4,44,70);
        }
        glPushMatrix();
        glTranslatef(cm,-50,0);
        makeprivatecar();
        glPopMatrix();
    }
}
