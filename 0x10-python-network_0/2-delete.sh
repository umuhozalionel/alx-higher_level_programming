#!/bin/bash
# sends GET requirements to URL and display response body
curl -sfL "$1" -X GET
