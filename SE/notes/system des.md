# System design
## Design a URL Shortening Service
1. Define req (func and non func) and use case
- Number of characters.
- Take url and return shorter url
- Take a short url and return the original url
2. API
createShortURL(longURL) return shortURL
getLongURL(shortURL) return longURL
3. High level design
- User - Internet - App server - DB : 1 điểm faulure, khó có thể scale được và không có backup
- User - Internet - LB - 3 App server (Có thể có local cache) - Global Cache - DB (chia thành các partition, chứa cả backup db)
4. Traffic and scale
- Possible shortend url are
- How many URL do we expect
# API Design

