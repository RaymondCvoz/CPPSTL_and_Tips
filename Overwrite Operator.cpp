#include <bits/stdc++.h>

struct cmp
{
    bool operator () (int a,int b)
    {
        return a > b;
    }
};
std::set <int,cmp> s;
std::priority_queue <int,cmp> q;
