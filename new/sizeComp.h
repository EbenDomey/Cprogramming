int maxNum(int first, int second)
{
    if (first > second)
        return first;
    else if (first < second)
        return second;
    else
        return first;
}

int minNum(int first, int second)
{
    if (first > second)
        return second;
    else if (first < second)
        return first;
    else
        return first;
}