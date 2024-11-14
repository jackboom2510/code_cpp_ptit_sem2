if(contains(prop("Price"), "₫ - "), 
	toNumber(replaceAll(
		slice(
			prop("Price"),
			findIndex(split(prop("Price"), ""), "₫") + 1,
			findIndex(split(prop("Price"), ""), " - ")
		),
		",",
		""
	)),
	toNumber(replaceAll(
		slice(
			prop("Price"),
			findIndex(split(prop("Price"), ""), "₫") + 1,
			length(prop("Price"))
		),
		",",
		""
		))
)
	
₫15.000 - ₫21.000
₫126.000