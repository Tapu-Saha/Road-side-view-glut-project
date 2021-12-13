void lamplight()
{
    if (isLlight)
    {
        glColor3f(1.0, 1.0, 1.0);
        rectangle(-268,90,-257,100);

    }
    else
    {
        glColor3f(1.0, 1.0, 0.0);
        rectangle(-268,90,-257,100);
    }
}
    void lamplight2()
    {
        if (isLlight)
        {
            glColor3f(1.0, 1.0, 1.0);
            rectangle(191,90,202,100);
        }
        else
        {
            glColor3f(1.0, 1.0, 0.0);
            rectangle(191,90,202,100);
        }
    }
