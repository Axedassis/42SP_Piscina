#!/bin/bash
git status --ignored -s | grep '!!' | sed 's/!! //'
