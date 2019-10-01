import requests, time
max_request_timeout = 30 # value in seconds
total_visits, timeout_exception_amount, too_many_redirects_exception_amount, request_exception_amount =0,0,0,0

# script, to be wrapped in a loop over url or proxy value
proxies = {
  'http': 'http://:8000'
}		
start = time.time()

total_visits += 1
try:
	res = requests.get('http://:8000', proxies=proxies, timeout=max_request_timeout)
	actual_visit +=1
except requests.exceptions.Timeout as e:
	print("Timeout exception", e)
	timeout_exception_amount += 1
	

except requests.exceptions.TooManyRedirects as e:
	print("TooManyRedirects exception", e)
	too_many_redirects_exception_amount += 1
	
except requests.exceptions.RequestException as e:
	print("RequestException exception", e)
	request_exception_amount += 1 
	
if 200 == res.status_code:
	load_time = round(time.time()-start, 2 )  
else:
	print('Unsuccessful request. Response status code:',res.status_code)
	load_time = None

print('Performance: {}%'.format((total_visits-request_exception_amount)/total_visits * 10))