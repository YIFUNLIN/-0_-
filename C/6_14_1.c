if (freq[rating] > largest)
{
    largest = freq[rating];
    modeCount = 0;
    modeValues[modeCount++] = rating;
}
else if (freq[rating] == largest)
{
    modeValues[modeCount++] = rating;
}