(: Select all cds. :)
declare variable $inputDocument external;
	<html>
		<meta http-equiv="content-type" content="text/html; charset=utf-8" />
  	<body>
  	<h2>�ҵ�CD�ղ�</h2>
  	<table border="1">
      <tr bgcolor="#9acd32">
        <th align="center">����</th>
        <th align="center">������</th>
        <th align="center">����</th>
        <th align="center">������</th>
        <th align="center">����ʱ��</th>
        <th align="center">����(Ԫ)</th>
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