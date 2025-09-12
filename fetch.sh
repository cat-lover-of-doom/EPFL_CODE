#!/bin/bash
# Make sure you have the latest state from the remote
git fetch origin

# Reset your current branch (say "main") to the remote's state
git reset --hard origin/main

# Clean up any untracked files or dirs, just in case
git clean -fd
