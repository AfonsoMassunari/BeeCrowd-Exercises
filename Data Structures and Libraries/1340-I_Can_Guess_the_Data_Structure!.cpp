#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        bool isStack = true, isQueue = true, isPQueue = true;
        int x, operation;
        stack<int> stk;
        queue<int> que;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            cin >> operation >> x;

            if (operation == 1)
            {
                if (isStack)
                    stk.push(x);
                if (isQueue)
                    que.push(x);
                if (isPQueue)
                    pq.push(x);
            }
            else if (operation == 2)
            {
                if (isStack)
                {
                    if (stk.empty() || stk.top() != x)
                    {
                        isStack = false;
                    }
                    else
                    {
                        stk.pop();
                    }
                }

                if (isQueue)
                {
                    if (que.empty() || que.front() != x)
                    {
                        isQueue = false;
                    }
                    else
                    {
                        que.pop();
                    }
                }

                if (isPQueue)
                {
                    if (pq.empty() || pq.top() != x)
                    {
                        isPQueue = false;
                    }
                    else
                    {
                        pq.pop();
                    }
                }
            }
        }
        if (isStack && !isQueue && !isPQueue)
        {
            cout << "stack" << "\n";
        }
        else if (!isStack && isQueue && !isPQueue)
        {
            cout << "queue" << "\n";
        }
        else if (!isStack && !isQueue && isPQueue)
        {
            cout << "priority queue" << "\n";
        }
        else if (!isStack && !isQueue && !isPQueue)
        {
            cout << "impossible" << "\n";
        }
        else
        {
            cout << "not sure" << "\n";
        }

    }
    return 0;
}