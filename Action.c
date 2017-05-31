/* Ajout commentaire */
/* Ajout second commentaire */
// Test

Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_start_transaction("S01_Home");

	web_add_auto_header("Accept-Language", 
		"fr,fr-FR;q=0.8,en-US;q=0.5,en;q=0.3");

	web_url("peformation.elmg.net", 
		"URL=https://peformation.elmg.net/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S01_Home",LR_AUTO);

	lr_start_transaction("S02_Login");

	web_reg_find("Text=Parcours", 
		LAST);

	web_submit_data("peformation.elmg.net_2", 
		"Action=https://peformation.elmg.net/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=auth", ENDITEM, 
		"Name=login", "Value=IERO4250", ENDITEM, 
		"Name=pass", "Value=IERO4250", ENDITEM, 
		LAST);

	web_url("get_courses.ajax.php", 
		"URL=https://peformation.elmg.net/outils/parcours/get_courses.ajax.php?session_id=25&page=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getInstantNotification.php", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902772", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("setOpenElement.php", 
		"URL=https://peformation.elmg.net/scripts/ajax/setOpenElement.php?action=set&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getInstantNotification.php_2", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902776", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Login",LR_AUTO);

	lr_think_time(10);

	web_url("getInstantNotification.php_3", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902787", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getInstantNotification.php_4", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902798", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);

	web_url("getInstantNotification.php_5", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902808", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	lr_start_transaction("S03_Parcours_AOSI_Test_Charge2");

	web_url("getInstantNotification.php_6", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902819", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("learner_scos.ajax.php", 
		"URL=https://peformation.elmg.net/outils/parcours/learner_scos.ajax.php?id=159&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("setOpenElement.php_2", 
		"URL=https://peformation.elmg.net/scripts/ajax/setOpenElement.php?action=set&course_id=159", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("getInstantNotification.php_7", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902829", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S03_Parcours_AOSI_Test_Charge2",LR_AUTO);

	lr_think_time(10);

	web_url("getInstantNotification.php_8", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902840", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getInstantNotification.php_9", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902851", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	lr_start_transaction("S04_v17hv035");

	web_url("getInstantNotification.php_10", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902861", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=TEST VIDEO", 
		LAST);

	web_url("index.php", 
		"URL=https://peformation.elmg.net/outils/parcours/index.php?action=lancer&id_p=159&id_sco=2&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("launch_wrapper.php", 
		"URL=https://peformation.elmg.net/outils/parcours/launch_wrapper.php?id_p=159&id_sco=2&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Barre_de_navigation", 
		LAST);

	web_url("bar_nav.php", 
		"URL=https://peformation.elmg.net/outils/parcours/bar_nav.php?id_p=159&id_sco=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S04_v17hv035",LR_AUTO);

	/* Play */

	lr_start_transaction("S05_Quitter");

	web_url("reload.html", 
		"URL=https://peformation.elmg.net/outils/parcours/reload.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("close_sco_page.php", 
		"URL=https://peformation.elmg.net/outils/parcours/close_sco_page.php?id_p=159&id_sco=2&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sco_panel.php", 
		"URL=https://peformation.elmg.net/outils/parcours/sco_panel.php?id_p=159&id_sco=2&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S05_Quitter",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("S06_quitter");

	web_submit_data("endTracking.php", 
		"Action=https://peformation.elmg.net/scripts/ajax/endTracking.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=recalc_tracking", "Value=true", ENDITEM, 
		LAST);

	web_reg_find("Text=Parcours", 
		LAST);

	web_url("quit_sco.php", 
		"URL=https://peformation.elmg.net/outils/parcours/quit_sco.php?id_p=159&id_sco=2&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/launch.php?id_p=159&id_sco=2&session_id=25", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getInstantNotification.php_11", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902989", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_courses.ajax.php_2", 
		"URL=https://peformation.elmg.net/outils/parcours/get_courses.ajax.php?session_id=25&page=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("setOpenElement.php_3", 
		"URL=https://peformation.elmg.net/scripts/ajax/setOpenElement.php?action=set&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("setOpenElement.php_4", 
		"URL=https://peformation.elmg.net/scripts/ajax/setOpenElement.php?action=set&course_id=159", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("learner_scos.ajax.php_2", 
		"URL=https://peformation.elmg.net/outils/parcours/learner_scos.ajax.php?id=159&session_id=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S06_quitter",LR_AUTO);

	lr_think_time(9);

	web_url("getInstantNotification.php_12", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493902992", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	lr_start_transaction("S07_Logout");

	web_url("getInstantNotification.php_13", 
		"URL=https://peformation.elmg.net/scripts/ajax/getInstantNotification.php?timestamp=1493903002", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ELMGSESSID=7gchvtl0738jc9vf37cpbueh13; DOMAIN=peformation.elmg.net");

	web_add_cookie("ELMGETSSSID=deleted; DOMAIN=peformation.elmg.net");

	web_url("logout.php", 
		"URL=https://peformation.elmg.net/logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://peformation.elmg.net/outils/parcours/index.php?open_course=159", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S07_Logout",LR_AUTO);

	return 0;
}
