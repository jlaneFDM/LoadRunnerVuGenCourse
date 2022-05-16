BookReservation()
{

	lr_think_time(40);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS42NxIsCUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0Yq6nKAQ==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(34);

	web_submit_form("reservations.pl", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=05/17/2022", ENDITEM, 
		"Name=arrive", "Value=Zurich", ENDITEM, 
		"Name=returnDate", "Value=05/18/2022", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=First", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=090;789;05/17/2022", ENDITEM, 
		"Name=reserveFlights.x", "Value=43", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_think_time(19);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":315827,\"request_elapsed_ms\":13178,\"sample_rate\":0.05,\"server_ip\":\"[2607:f8b0:400b:802::200e]:443\",\"status\":\"ok\",\"url\":\"https://www.google-analytics.com/analytics.js\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_2", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"QUIC\",\"request_age_ms\":302075,\"request_elapsed_ms\":431,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://optimizationguide-pa.googleapis.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	return 0;
}
