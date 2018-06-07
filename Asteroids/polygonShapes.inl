float shipCruisingVertices[] =
{
	0.5f,  0.00f, 
	-0.20f, 0.20f, 
	-0.20f, -0.20f,
	0.5f,  0.00f
};

float shipAcceleratingVertices[] =
{
	0.5f,  0.00f, 
	-0.20f, 0.20f, 
	-0.40f, 0.20f,
	-0.20f, 0.20f,
	-0.2f, 0.1f,
	-0.4f, 0.1f,
	-0.2f, 0.1f,
	-0.2f, -0.1f,
	-0.4f, -0.1f,
	-0.2f, -0.1f,
	-0.2f, -0.2f,
	-0.4f, -0.2f,
	-0.2f, -0.2f,
	0.5f,  0.00f

};

float asteroidVertices[] =
{
	0.1f,  0.35f,
	//0.10f, 0.15f, currently removed extra vertices for a more collision accurate shape
	0.3f, 0.15f,
	0.3f, -0.1f,
	//0.1f, -0.1f,
	0.1f,  -0.25f,
	-0.15f, -0.25f,
	-0.3f, -0.1f,
	-0.3f, 0.1f,
	-0.2f, 0.3f,
	0.1f,  0.35f
};

float ufoVertices[] =
{
	-1.0f,  -1.0f,
	1.0f, -1.0f,
	3.0f, 0.0f,
	-3.0f, 0.0f,
	-1.0f, -1.0f,
	-3.0f, 0.0f,
	-1.0f, 1.0f,
	1.0f,  1.0f,
	3.0f, 0.0f,
	1.0f,  1.0f,
	0.5f, 2.0f,
	-0.5f, 2.0f,
	-1.0f, 1.0f
};