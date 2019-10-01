from urllib import request as urlrequest
import http.client as httplib
import ssl



def is_https_proxy_working(ip, port):
   
    try:
        # create proxy connection
        con = httplib.HTTPSConnection(ip, port, context=ssl._create_unverified_context()) 
        con.putrequest('GET', "https://127.0.0.1:8000", skip_host=True)
        con.putheader('Host', '127.0.0.1:8000')
        con.endheaders()
        res = con.getresponse()

    except:
        return False
    return True



def is_http_proxy_working(ip, port):

    url = "https://127.0.0.1:8000"
    proxy_host = '%s:%s' % (ip, port)
    req = urlrequest.Request(url)
    try:
        req.set_proxy(proxy_host, 'https')
        response = urlrequest.urlopen(req)         
    except:
        return False

    return True


print(is_https_proxy_working("127.0.0.1", "8000"))
print(is_http_proxy_working("127.0.0.1", "8000"))