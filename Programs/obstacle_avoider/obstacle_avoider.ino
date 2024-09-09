void setup()
{
pinMode( 8 , INPUT);
pinMode( 9 , INPUT);
pinMode( 10 , OUTPUT);
pinMode( 11 , OUTPUT);
pinMode( 12 , OUTPUT);
pinMode( 13 , OUTPUT);
}

void loop()
{
if ((digitalRead( 9)==1) && (digitalRead( 8)==0))
{
digitalWrite( 13 , LOW );
digitalWrite( 12 , LOW );
digitalWrite( 11 , HIGH );
digitalWrite( 10 , LOW );
}

else if ((digitalRead( 8)==1) && (digitalRead( 9)==0))
{
digitalWrite( 11 , LOW );
digitalWrite( 10 , LOW );
digitalWrite( 13 , HIGH );
digitalWrite( 12 , LOW );
}

else if ((digitalRead( 8)==1) && (digitalRead( 9)==1))
{
digitalWrite( 13 , LOW );
digitalWrite( 12 , LOW );
digitalWrite( 11 , LOW );
digitalWrite( 10 , LOW );
}
else if ((digitalRead( 8)==0) && (digitalRead( 9)==0))
{
digitalWrite( 13 , HIGH );
digitalWrite( 12 , LOW );
digitalWrite( 11 , HIGH );
digitalWrite( 10 , LOW );
}
}


