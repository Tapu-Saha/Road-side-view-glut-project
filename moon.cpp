void Moon()
{
    if(moon)
    {
        glPushMatrix();
        glTranslated(215,165,0);
        glColor3f(1.0,1.0,1.0);
        circle(20,40,20,50);
        glColor3f(0.0,0.0,0.0);
        circle(20,40,25,55);
        glPopMatrix();
    }
}

