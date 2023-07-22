int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);

    int maxplatform = 1, platform = 1;
    int i = 1, j = 0;

    while (i<n && j<n) {
        if (at[i] <= dt[j]) {
            maxplatform++;
            i++;
        }
        else if (at[i] > dt[j]) {
            maxplatform--;
            j++;
        }
        platform = max (maxplatform, platform);
    }
    
    return platform;
}
