# Line Follower

```c
void setup()
{
    pinMode( 11 , OUTPUT);
    pinMode( 8 , INPUT);
    pinMode( 9 , INPUT);
    pinMode( 10 , OUTPUT);
    pinMode( 12 , OUTPUT);
    pinMode( 13 , OUTPUT);
}

void loop()
{
if (digitalRead( 8))
{
    digitalWrite( 13 , HIGH );
    digitalWrite( 12 , LOW );
}
else
{
    digitalWrite( 13 , LOW );
    digitalWrite( 12 , LOW );
}
if (digitalRead( 9))
{
    digitalWrite( 11 , HIGH );
    digitalWrite( 10 , LOW );
}
else
{
    digitalWrite( 11 , LOW );
    digitalWrite( 10 , LOW );
}
}



```

---
