void Night(int value)
{
    if(night)
    {
        glClearColor(0.0,0.0,0.0,0.0);
       glutPostRedisplay();


       glutTimerFunc(5, Night, 0);

        glFlush();
    }
}