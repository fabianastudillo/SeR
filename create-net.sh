#!/bin/bash

# Crear bridge con nombre de interfaz br-net-10.9
docker network create \
  --driver=bridge \
  --subnet=10.9.0.0/24 \
  --gateway=10.9.0.1 \
  --opt "com.docker.network.bridge.name"="br-net-ser" \
  net-ser
