int get_time(long long angle) {
    int hour = 0;
    int minute = 0;
    int second = 0;
    int time = 0;

    if (angle >= 4320)
        hour = angle / (360 * 60);
        angle = angle % (360 * 60);
    if (angle >= 360)
        minute =angle / 360;
        angle = angle % 360;
    if ((360>angle) && (angle >=0))
        second  = angle/6;

    
    time = (hour * 10000)+(minute * 100)+(second);
    return time; // Not implementation
    int hours, minutes, seconds;
    

}

