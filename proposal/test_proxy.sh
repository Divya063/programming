export http_proxy='http://localhost:8000'
export https_proxy='https://localhost:8000'
URL='https://127.0.0.1:8000'

wget $URL
if [ $? == 1 ]
then
    STATUS= echo "Proxy isn't working"

else
  STATUS="Proxy is working."
fi
echo $STATUS