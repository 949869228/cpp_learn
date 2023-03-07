#ifndef WEBSERVER_H_
#define WEBSERVER_H_

class WebServer {
 public:
  WebServer();
  ~WebServer();
  void init(int port);

 public:
  int port_;
};

#endif