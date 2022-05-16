/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("index.htm", 
		"URL=http://localhost:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("SEARCH_SAMESITE=CgQIh5QB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:KVI0EvnHfUPrWDYz1PKeAQMv_ymNznqGns9iArYNJHvRQ3w-yZph3dGnQc4Y6uBIj1KnBNwxvYKEpPt5KIGgwPMtT0pRHA:n-Wx11XcnyqfWBuO; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AVQQ_LB55EQk2_uGRSoTpW8oos1RvK8NRs_PGLIo-cY9YhVuRR0tGSFS4Cg; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=AhCg5F0itQW_aOraaivnje7BxLsTPsC-YA2lvVCRxnMeBXfv8crqBUPz_ufIvJk2OWBzvZMwnZLO7hEjixnKHAw896YxOYvErWp-cWMwVDQ0STvneE1292NXtFTY8HItinEd_tZQmkQIJPhIrOPcKoyAkz-Y-JyiFYmVlwJWackHnmUVzSmJ3ENUSE5wx-PMIdBchXCBLi-AWzEbndK4SOE; DOMAIN=accounts.google.com");

	lr_think_time(6);

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=101", "Referer=", ENDITEM, 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=101.0.4951.67&lang=en-US&acceptformat=crx3&x=id%3Diikflkcanblccfahdhdonehdalibjnif%26v%3D0.0.0.0%26installedby%3Dexternal%26uc%26brand%3DCHBF%26ping%3Dr%253D117%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:Od0ZAdJQ0tYKeB1YZECSvvOyGj5ZJflgVjdNx8c9rKE&cup2hreq=eadcf5051fb1e905a07fbc95b1d7e7f7c62f481d4913b8e8d83e40956d015a24", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.1f57dab48a51560b9890c8ccd9a26178e70a9b48f209d1ff670e71be6de0df62\"}]},\"ping\":{\"ping_freshness\":\"{707928b5-021c-47bc-9954-68beb1e4d7fa}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"1.42.0\"},{\"appid\":\"mbopgmdnpcbohhpnfglgohlbhfongabi\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.f6e46eb762670dd2d6cd64d110dedd7e393d6678f89bcbd9dd81f37da48269b2\"}]},\"ping\":{\"ping_freshness\":\"{ac42fecd-8959-4e93-b627-fecc4e550011}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"5.3.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\""
		"{c2f29def-29a9-44c1-8346-b75c7b63a487}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"101.0.4951.67\",\"protocol\":\"3.1\",\"requestid\":\""
		"{f8817426-7e2c-4a2f-9cba-1fa4d3c63a96}\",\"sessionid\":\"{14c560da-b668-4c66-80c0-84e06688906e}\",\"updaterversion\":\"101.0.4951.67\"}}", 
		LAST);

	web_custom_request("v1_GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\nl\\x08\\x08\\x10\\xF1\\xD9\\xF8\\xE7\\x8C0 \\x082_\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageEntitiesModelMetadata\\x12\\x02\\x08\\x0B\\x18\\x06*\\x05en-US", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS42NxIXCU35IjnBRbgwEgUN541ADhIFDc5BTHoYq6nKAQ==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(13);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:ap2zjitZ3sZ7kR7o-bV-JLOx-nPdud-rJ37uzp9cY8A&cup2hreq=1c986772386fda4a735398e6c5f73873b51fdd784bab133dec2456c2f7b76b6c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{c6bdafce-a35d-4f34-bcee-50532c44f2f9}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{18e0cff7-abf4-44b0-a977-72312e13808a}\","
		"\"rd\":5614},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBF\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.53b83738fad69a9f3db36848834a1d5003880033cae857eadfc37d3802dfcb8c\"}]},\"ping\":{\"ping_freshness\":\"{1d39165c-18ee-48b7-bfc7-5dd261611cf7}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"9.35.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{7b2f3b9c-425b-4501-a3af-804b50904f2f}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBF\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\""
		",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.75c0917aea02e762102b43e49839262173b6c531e85d03459493d680213755b5\"}]},\"ping\":{\"ping_freshness\":\"{e44b080d-9e76-4f90-a739-0148be366ffb}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"20220409.440702358\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBF\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{47ffb4b8-8443-43a5-92e8-6fd2df74d2f2}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBF\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":{\"ping_freshness\":\""
		"{8223d0e3-df0d-4382-af13-e2fb44ec90a0}\",\"rd\":5614},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{f1741049-1f78-48b9-9d97-921b3caa8cb8}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\""
		",\"brand\":\"CHBF\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Canary\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e576811650ec2102a3fb16bdb8ff791659558df8f10a6f45bee335c326de72ae\"}]},\"ping\":{\"ping_freshness\":\"{e760ce83-510a-4d14-95d2-9ba3ee9b580a}\",\"rd\":5614},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"101.283.200\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"CHBF\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\"{b79d596f-8a3c-4f86-abc4-8ed73c633533}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBF\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{9d3d5e3f-e594-4424-9a5e-4ee5956747ed}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"CHBF\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f0807b94ce55989abafd76b13b77583b26dfeae3251c7af920a23a2e5873e6fa\"}]},\"ping\":{\"ping_freshness\":\""
		"{ce2a39d9-4ff9-4642-a374-8db68a9e52c0}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"250\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"CHBF\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{921b36f2-3d3c-436e-971e-5cc3b9364de0}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBF\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b751d673a85a260cf9683086d911b585bf4857e97b1531f485580e496dd26a3d\"}]},\"ping\":{\"ping_freshness\":\"{5102ef20-111a-42d6-9c88-7027708e4287}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2816\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBF\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname"
		"\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bdd5297db8e80ac00d6b928cac181cc52fdf068767fedf0c79c0147a8b5d33ec\"}]},\"ping\":{\"ping_freshness\":\"{ca2ff6f5-af38-4c00-8ac0-ea6f808595e5}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"330\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"CHBF\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e02a5a2546d19db3a1c01d5cde67e456662be2b9a58815a1db15a8afe32ab93f\"}]},\"ping\":{\"ping_freshness\":\"{d11e16b3-cdb0-4881-bdbd-cb3415998e9e}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2022.5.16.21\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"CHBF\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\""
		"{9da0ebf0-fb2f-4f4e-8d97-356cb75e7bf6}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"CHBF\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{70b671fd-ca40-4c3e-bb65-223516e56100}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\""
		":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8d9fc7f0e737dbb368aeb666b31a3e362773d54c95fcb04d23cb03e8be06cd30\"}]},\"ping\":{\"ping_freshness\":\"{ec451e8e-cc4e-4ed2-a918-6be58ea538b3}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"7341\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBF\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\""
		"cohortname\":\"M80AndAbove\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5d5c833beaac6d34279ab33de6e30b72442f0ef461ed77fdece3e41162113a3b\"}]},\"ping\":{\"ping_freshness\":\"{b7e65743-bd22-473b-a5e2-2f74fa885030}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2022.5.9.1141\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"CHBF\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.9b212fb00a2ff3bc981a89aa8dd0f52c60f7baeb6f958148396af27431c8f097\"}]},\"ping\":{\"ping_freshness\":\"{5cbc77c9-ba59-4371-9d7d-82af08ebb709}\",\"rd\":5614},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"29.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"CHBF\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\""
		"ping_freshness\":\"{2b842db9-00c9-4dcb-9922-b087a57a31b7}\",\"rd\":5614},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"CHBF\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ccd40cb35e5aad373e8e9ee75b4fbc0b9b9ae3451a074f4590295de613555c75\"}]},\"ping\":{\"ping_freshness\":\"{3928527c-1683-4163-b753-e4761a906261}\",\"rd\":5614},\"updatecheck\":{},\""
		"version\":\"104.0.5066.0\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"CHBF\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{2ea24e51-9d3e-4f01-90d6-1f0b7cad45ee}\",\"rd\":5614},\"updatecheck\":{},\"version\":\""
		"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"101.0.4951.67\",\"protocol\":\"3.1\",\"requestid\":\"{b91f4306-582c-4437-9710-746b2005d44d}\",\"sessionid\":\""
		"{d98967c1-8400-4082-9b16-11a4f295320f}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\"updaterversion\":\"101.0.4951.67\"}}", 
		LAST);

	lr_think_time(16);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=133879.190684488ziiztVApiHAiDDDDtVDViptzfccf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=59", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	return 0;
}