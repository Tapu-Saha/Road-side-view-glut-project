void Light()
{
//traffic light
//lower part
    glColor3f( 0.412, 0.412, 0.412);
    rectangle(45,63,42,-10);
//box part
    glColor3f(0.85, 0.85, 0.85);
    rectangle(49,60,39,100);
//1st
    glColor3f(0.0, 0.60, 0.0);
    circle(3,4,44,90);
//glColor3f(0.196, 0.804, 0.196);
// circle(3,4,44,80);
    glColor3f( 0.90, 0.0, 0.0);
    circle(3,4,44,70);
}