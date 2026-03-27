# Architecture

## [ Browser (Phone / PC / Tablet) ]

## ↓

## Modern Web UI (React)

## ↓

## API Server (FastAPI / Node)

## ↓

## Downloader Engine (yt-dlp)

## ↓

## Storage (local folders)

## Project Structure

```
downloader/
├── docker-compose.yml
├── backend/
│   ├── Dockerfile
│   └── app/
├── frontend/
│   ├── Dockerfile
│   └── src/
└── downloads/
```




media-downloader/
├── docker-compose.yml
├── downloads/
│
├── backend/
│   ├── Dockerfile
│   ├── requirements.txt
│   └── app/
│       ├── main.py
│       ├── downloader.py
│       └── schemas.py
│
└── frontend/
    ├── Dockerfile
    ├── index.html
    ├── package.json
    ├── tailwind.config.js
    ├── postcss.config.js
    └── src/
        ├── main.jsx
        ├── App.jsx
        └── components/
            └── Downloader.jsx
