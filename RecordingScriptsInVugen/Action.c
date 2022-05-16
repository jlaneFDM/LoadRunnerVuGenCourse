Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("index.htm", 
		"URL=http://localhost:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=", ENDITEM, 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=101", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("SEARCH_SAMESITE=CgQIh5QB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:KVI0EvnHfUPrWDYz1PKeAQMv_ymNznqGns9iArYNJHvRQ3w-yZph3dGnQc4Y6uBIj1KnBNwxvYKEpPt5KIGgwPMtT0pRHA:n-Wx11XcnyqfWBuO; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AVQQ_LB55EQk2_uGRSoTpW8oos1RvK8NRs_PGLIo-cY9YhVuRR0tGSFS4Cg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-04-10-23; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=AhCg5F0itQW_aOraaivnje7BxLsTPsC-YA2lvVCRxnMeBXfv8crqBUPz_ufIvJk2OWBzvZMwnZLO7hEjixnKHAw896YxOYvErWp-cWMwVDQ0STvneE1292NXtFTY8HItinEd_tZQmkQIJPhIrOPcKoyAkz-Y-JyiFYmVlwJWackHnmUVzSmJ3ENUSE5wx-PMIdBchXCBLi-AWzEbndK4SOE; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

//	web_url("crx", 
//		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=101.0.4951.54&lang=en-US&acceptformat=crx3&x=id%3Diikflkcanblccfahdhdonehdalibjnif%26v%3D0.0.0.0%26installedby%3Dexternal%26uc%26brand%3DCHBF%26ping%3Dr%253D111%2526e%253D1", 
//		"Resource=0", 
//		"RecContentType=text/xml", 
//		"Referer=", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS41NBIXCU35IjnBRbgwEgUN541ADhIFDc5BTHoYrKnKAQ==?alt=proto", "Referer=", ENDITEM, 
//		LAST);

	lr_think_time(18);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:rf4el82KjBWuHkNLXPW4FqMI1OgP3x2LYYTayKARCTI&cup2hreq=d7a784abee2dec3f171a894bdd52cff172510005c994d8ac57d084312e15c852", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ef3b5a35-37b1-46c8-93f4-5eda36d140c0}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f5e00476-b4ff-4fab-b59c-94093a7298dc}\","
		"\"rd\":5578},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBF\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{3a2db157-8c37-44ed-8b82-b152f00ccc1f}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\""
		"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{43515e79-505c-4041-8da7-bbcf480fca49}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBF\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{be0aa868-1641-4cad-91dc-12318b6a9441}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"CHBF\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\""
		"{db29fdee-0420-4552-8891-ca213e7f786a}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\"}]},\"ping\":{\"ping_freshness\":\"{5112a4fb-616c-4e8e-ae21-bb88f65e4751}\",\"rd\":5578},\"tag\":\"canary_eset_b\",\"updatecheck\":{},\"version\":\"96.276.200\"}"
		",{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d297336324a1b2cb7edc46c0b5026cdb32870ef627b15f820c3c6f59325cffaf\"}]},\"ping\":{\"ping_freshness\":\"{a4383c12-9606-4b40-9b80-8f206f1c7527}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"7269\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBF\",\"cohort\":\"1:bm1:\",\"cohorthint\":\""
		"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.93823a4e71e764b932ee22dfcf84c24429867a440c5e480e55be527ac30de1ae\"}]},\"ping\":{\"ping_freshness\":\"{d414c9a6-2a23-4be5-842a-a705c0de5e33}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"9.34.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}"
		"]},\"ping\":{\"ping_freshness\":\"{8a3ce186-88f8-44c0-9335-ef4d0509540f}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBF\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6816fa1a2f4c49d0f16dd672e1fd8efbb5416021b5bec1807fb7ed7f84e147fb\"}]},\"ping\":{\"ping_freshness\":\"{2f8ed47d-c094-4607-a6f0-eff1017fe0fc}\",\"rd\":5578},\"updatecheck\":{},\""
		"version\":\"325\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBF\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.79fc57314c57740996cb68569a0499780babbdb627534bcefff42c16379362f7\"}]},\"ping\":{\"ping_freshness\":\"{7149464c-906e-476c-8f3b-e1df6f3f41af}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2797\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"CHBF\",\"cohort\":\"1:zkl:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.060183f32ad05868493a9572be990d1cf0403e6315e451973e5e7dc808192385\"}]},\"ping\":{\"ping_freshness\":\"{6feb47c3-c53c-4d9c-9d56-edc9d5cee691}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"229\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"CHBF\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{49d52c0f-1175-4c99-84d3-60f8617fe24a}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"20211020.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBF\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.11fbb536e4e9e0cd7474ece3f0b04ddeb847620e4c9d3f32f66ab2ee7b260d75\"}]},\""
		"ping\":{\"ping_freshness\":\"{4e632a07-426f-4286-9cd9-b2efe2125159}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"20220324.438805619\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBF\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.714ea234b405e2326659d92eef98a34bd7343d2aba26bf425b66521c9846fbcf\"}]},\"ping\":{\"ping_freshness\":\"{6955d1e2-b67a-4841-8b8e-a1bcb4a7f003}\",\"rd\":5578},\""
		"updatecheck\":{},\"version\":\"2022.3.28.1141\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"CHBF\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{2e64ac80-e861-4935-8a88-d0bbbb8ebd95}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"CHBF\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{e9baede3-6127-444a-be0d-c94c52f0a0bd}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"CHBF\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\""
		":{\"package\":[{\"fp\":\"1.f9d7ee52f45b4cb88d78dcaaa7ffc9f86d2cfcaf0c53d2ee8993ef18ea6bb4b9\"}]},\"ping\":{\"ping_freshness\":\"{5ad1426e-b4d8-4b8c-9143-389c1577dfd9}\",\"rd\":5504},\"updatecheck\":{},\"version\":\"2022.1.21.2\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBF\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":"
		"{\"ping_freshness\":\"{51e71cf7-217d-4fb4-98d4-1fc7b765c767}\",\"rd\":5578},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"CHBF\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c5d1f68a61e1a2ea56b08431b1e9de8bca675e76bed24772447af68d35436d50\"}]},\"ping\":{\"ping_freshness\":\"{ff299ad7-3d64-42d5-ba27-0513f9ec8579}\",\"rd\":5578},\"tag\":\"default\""
		",\"updatecheck\":{},\"version\":\"27.8\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"CHBF\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a853693ac4c2084c91704c5bb658985481f6dec7896755dcc29519baf0b592e7\"}]},\"ping\":{\"ping_freshness\":\"{e59c6d4b-4eeb-4623-abf8-7c87bfe8f2f6}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"102.0.4996.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\""
		"CHBF\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{10bcca06-258c-462d-a5f7-4d3062cd2985}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"CHBF\",\"cohort\":\"1:13c9:\","
		"\"cohorthint\":\"V2 General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{06be2a41-e7b6-4493-b9b0-bdf3e2d86aaa}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\""
		"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\"protocol\":\"3.1\",\"requestid\":\"{c26bf5c7-785b-45ee-a89a-a46f719f22da}\",\"sessionid\":\"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\""
		"updaterversion\":\"101.0.4951.54\"}}", 
		LAST);

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(24);

//	web_custom_request("json_2", 
//		"URL=https://update.googleapis.com/service/update2/json", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBF\",\"cohort\":\"1:qe3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Canary\",\"enabled\":true,\"event\":[{\"download_time_ms\":24287,\"downloaded\":6867487,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"101.283.200\",\"previousversion\":\"96.276.200\",\"total\":6867487,\"url\":\"http://edgedl.me.gvt1.com/edgedl/"
//		"release2/chrome_component/m2lgttuidiluvhglzomyazebhy_101.283.200/gkmgaooipdjhmangpemjhigmamcehddo_101.283.200_win64_pcdutiti4z5nzglso5e2x2koeu.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.e576811650ec2102a3fb16bdb8ff791659558df8f10a6f45bee335c326de72ae\",\"nextversion\":\"101.283.200\",\"previousfp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\",\"previousversion\":\"96.276.200\"}],\"packages\":{\"package\":[{\"fp\":\""
//		"1.e576811650ec2102a3fb16bdb8ff791659558df8f10a6f45bee335c326de72ae\"}]},\"tag\":\"canary_eset_b\",\"version\":\"101.283.200\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\""
//		"protocol\":\"3.1\",\"requestid\":\"{67f99662-a3e7-420d-86c5-3ba5cc10f058}\",\"sessionid\":\"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updaterversion\":\"101.0.4951.54\"}}", 
//		EXTRARES, 
//		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
//		"Ch0KDGdvb2dsZWNocm9tZRINMTAxLjAuNDk1MS41NBopCAUQARobCg0IBRAGGAEiAzAwMTABEKndDRoCGAjO8ZIUIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDHyAoaAhgIIXc37iIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQyYILGgIYCKh7_d0iBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgIseeQLSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQricaAhgIdlLZHyIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQrHEaAhgI12tGNCIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAiVNYrTIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYCCdzheIiBCABIAIoARooCAgQARoaCg"
//		"0ICBAGGAEiAzAwMTABEJMPGgIYCJl8_-EiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEOS2ARoCGAhXRZofIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCQjgoaAhgIfezh6CIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ76wGGgIYCCmgH9MiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIcRGgIYCKP-IPIiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
//		LAST);

	web_url("ping", 
		"URL=https://clients1.google.com/tools/pso/ping?as=chrome&brand=CHBF&pid=&hl=en&rep=2&rlz=C1:1C1CHBF_enCA866CA866,C2:1C2CHBF_enCA866,C7:1C7CHBF_enCA866", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=133834.94272985ziitVDtpizzzzzzHtVDAtpiAQc", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=47", ENDITEM, 
		"Name=login.y", "Value=1", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

//	web_custom_request("json_3", 
//		"URL=http://update.googleapis.com/service/update2/json", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t9.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4013,\"downloaded\":24996,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7328\",\"previousversion\":\"7269\",\"total\":24996,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
//		"chrome_component/iphycxq5qovznqjbb6b6g72xdm_7328/hfnkpimlhhgieaddgfemjhofmfblmnib_7328_all_plukgn4newow6lkmpcc5nbrgzm.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.530fffe10c07bad64e71aa89db197e13bfd6a0174e010fcf8e8ed90afca97327\",\"nextversion\":\"7328\",\"previousfp\":\"1.d297336324a1b2cb7edc46c0b5026cdb32870ef627b15f820c3c6f59325cffaf\",\"previousversion\":\"7269\"}],\"packages\":{\"package\":[{\"fp\":\"1.530fffe10c07bad64e71aa89db197e13bfd6a0174e010fcf8e8ed90afca97327\"}]},\""
//		"version\":\"7328\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\"protocol\":\"3.1\",\"requestid\":\"{cf70ef20-76b5-4896-aa7a-c51987bbcbf1}\",\"sessionid\":\""
//		"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updaterversion\":\"101.0.4951.54\"}}", 
//		LAST);

	lr_think_time(11);

//	web_url("welcome.pl", 
//		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
//		"Snapshot=t10.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS41NBIsCUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0YrKnKAQ==?alt=proto", "Referer=", ENDITEM, 
//		LAST);

	lr_think_time(41);

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=05/11/2022", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=05/12/2022", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	lr_think_time(22);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=041;312;05/11/2022", ENDITEM, 
		"Name=reserveFlights.x", "Value=46", ENDITEM, 
		"Name=reserveFlights.y", "Value=3", ENDITEM, 
		LAST);

	lr_think_time(756);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=114 Westwood Drive", ENDITEM, 
		"Name=address2", "Value=N2N2K9", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=123456789", ENDITEM, 
		"Name=expDate", "Value=05/24", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t14.inf", 
		LAST);

	return 0;
}