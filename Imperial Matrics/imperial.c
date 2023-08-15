void twip(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 0.0000176389;
    }
}

void inch(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 0.0254;
    }
}

void foot(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 0.3048;
    }
}

void yard(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 0.9144;
    }
}

void furlong(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 201.168;
    }
}

void mile(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 1609.344;
    }
}

void nautical_mile(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 1852;
    }
}

void perch(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 25.29285264;
    }
}

void acer(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 4046.8564224;
    }
}

void square_mile(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 2589988.110336;
    }
}

void ounce_vol(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 28.4130625;
    }
}

void pfloat(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 28.4130625 * 20;
    }
}

void quart(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 28.4130625 * 40;
    }
}
void gallon(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 28.4130625 * 160;
    }
}

void grain(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.45359237 / 7000);
    }
}

void ounce(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.45359237 / 16);
    }
}

void pond(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.45359237);
    }
}

void quater(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.45359237 * 28);
    }
}

void tone(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.45359237 * 2240);
    }
}
