FROM ubuntu:18.04
# FROM python:3.9-alpine

WORKDIR /app

COPY app.py /app

RUN apt-get update && \
    apt-get install -y python3
# RUN pip install flask

CMD ["python3", "app.py"]
# CMD ["python", "app.py"]

