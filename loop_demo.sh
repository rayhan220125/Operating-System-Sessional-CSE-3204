#!/bin/bash
# For and While Loop Demo

echo "=== For Loop ==="
for i in {1..5}; do
    echo "Iteration $i"
done

echo "=== While Loop ==="
count=1
while [ $count -le 5 ]; do
    echo "Count: $count"
    ((count++))
done
