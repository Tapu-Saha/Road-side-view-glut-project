void Star()
{
    if (star)
    {
        glPushMatrix();
        //glTranslated(-100,240,0);
        glColor3f(1.0, 1.0, 1.0);
        circle(1,2,-110,245);
        circle(1,2,-50,210);
        circle(1,2,104,220);
        circle(1,2,200,210);
        circle(1,2,-150,240);
        circle(1,2,-10,240);
        circle(1,2,250,240);
        circle(1,2,10,240);
        circle(1,2,60,210);
        circle(1,2,-200,210);
        circle(1,2,-270,260);
        glPopMatrix();
    }
}