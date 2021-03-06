                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              C .wp_syntax {
	color           : #100;
	background-color: #f9f9f9;
	border          : 1px solid silver;
	margin          : 0 0 1.5em 0;
	overflow        : auto;
}

/* IE FIX */
.wp_syntax {
	overflow-x    : auto;
	overflow-y    : hidden;
	padding-bottom: expression(this.scrollWidth > this.offsetWidth ? 15 : 0);
	width         : 99%;
}

.wp_syntax table {
	border         : none !important;
	border-collapse: collapse !important;
	margin         : 0 !important;
	padding        : 0 !important;
	width          : 100% !important
}

.wp_syntax caption {
	margin          : 0 !important;
	padding         : 2px !important;
	width           : 100% !important;
	background-color: #def !important;
	text-align      : left !important;
	font-family     : monospace !important;
	font-size       : 12px !important;
	line-height     : 1.2em !important;
}

.wp_syntax caption a {
	color          : #1982d1 !important;
	text-align     : left !important;
	font-family    : monospace !important;
	font-size      : 12px !important;
	line-height    : 16px !important;
	text-decoration: none !important;
}

.wp_syntax caption a:hover {
	color          : #1982d1 !important;
	text-decoration: underline !important;
}

.wp_syntax div, .wp_syntax td {
	border        : none !important;
	text-align    : left !important;
	padding       : 0 !important;
	vertical-alig