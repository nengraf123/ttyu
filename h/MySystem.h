#pragma once
#include <cstdio>

inline int Nsystem(const char* cmd) {
    FILE* fp = popen(cmd, "r");
    int result = 0;
    fscanf(fp, "%d", &result);
    pclose(fp);
    return result;
}
