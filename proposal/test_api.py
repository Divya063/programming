import lemoncheesecake.api as lcc
import requests
from lemoncheesecake.matching import check_that, equal_to, has_item, has_values


SUITE = {
    "description": "API TEST",
    "rank": 1
}

token = '4d6fc704de864377939b4d1db5af9683'
api_url = 'http://127.0.0.1:8081/hub/api'



@lcc.test("verify get users")
def verify_get_users():
	response = requests.get(api_url + '/users',
	    headers={
	             'Authorization': 'token %s' % token,
	            }
	    )
	check_that("response code", response.status_code, equal_to(200))  # check if the response code is 200
	response_json = response.json()
