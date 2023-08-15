float power(float x, int y)
{
    float pow = 1;

    for (int i = 1; i <= y; ++i)
    {
        pow = pow * x;
    }
    return pow;
}

void meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 9.37007874;
    }
}

void centi_meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (39.37007874 / 100);
    }
}

void milli_meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (39.37007874 / 1000);
    }
}

void nano_meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (39.37007874 / power(10, -9));
    }
}

void micro_meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (39.37007874 / power(10, -6));
    }
}

void kilo_meter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (39.37007874 * 1000);
    }
}

void milli_liter(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.2641720524 / 1000);
    }
}

void centimeter_cube(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.00021997);
    }
}

void kilo_gram(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * 2.20462262;
    }
}

void gram(float arr[], int ele_num)
{
    for (int items = 0; items < ele_num; items++)
    {
        arr[items] = arr[items] * (0.00220462);
    }
}
