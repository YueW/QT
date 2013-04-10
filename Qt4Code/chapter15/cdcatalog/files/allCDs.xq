(: Select all cds. :)
declare variable $inputDocument external;
	<html>
		<meta http-equiv="content-type" content="text/html; charset=utf-8" />
  	<body>
  	<h2>我的CD收藏</h2>
  	<table border="1">
      <tr bgcolor="#9acd32">
        <th align="center">单曲</th>
        <th align="center">艺术家</th>
        <th align="center">国籍</th>
        <th align="center">出版商</th>
        <th align="center">出版时间</th>
        <th align="center">单价(元)</th>
      </tr>
	{
		doc($inputDocument)/catalog/cd/
      <tr>
        <td> {name} </td>
        <td> {artist} </td>
        <td> {country} </td>
        <td> {company} </td>
        <td> {year} </td>
        <td> {price}</td>
      </tr>
	}

  		</table>
  	</body>
	</html>	