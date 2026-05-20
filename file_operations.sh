#!/bin/bash
# File Operations Demo

echo "Creating a new file..."
echo "This is a test file for OS Lab - Md. Abu Rayhan (220125)" > myfile.txt

echo "File content:"
cat myfile.txt

echo "Number of lines in file: $(wc -l < myfile.txt)"
