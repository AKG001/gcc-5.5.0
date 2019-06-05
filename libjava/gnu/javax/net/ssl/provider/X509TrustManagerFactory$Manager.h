
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_X509TrustManagerFactory$Manager__
#define __gnu_javax_net_ssl_provider_X509TrustManagerFactory$Manager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class X509TrustManagerFactory;
              class X509TrustManagerFactory$Manager;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class X509Certificate;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::X509TrustManagerFactory$Manager : public ::java::lang::Object
{

public: // actually package-private
  X509TrustManagerFactory$Manager(::gnu::javax::net::ssl::provider::X509TrustManagerFactory *, JArray< ::java::security::cert::X509Certificate * > *);
public:
  virtual void checkClientTrusted(JArray< ::java::security::cert::X509Certificate * > *, ::java::lang::String *);
  virtual void checkServerTrusted(JArray< ::java::security::cert::X509Certificate * > *, ::java::lang::String *);
  virtual JArray< ::java::security::cert::X509Certificate * > * getAcceptedIssuers();
private:
  void checkTrusted(JArray< ::java::security::cert::X509Certificate * > *, ::java::lang::String *);
  ::java::util::Set * __attribute__((aligned(__alignof__( ::java::lang::Object)))) anchors;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::X509TrustManagerFactory * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_X509TrustManagerFactory$Manager__
