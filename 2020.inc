* --- Selecting Excel input files --------------------------------------------------

* Convert Excel input
$call 'gdxxrw Input="%data_dir%/InputData_Baltic_2020system.xlsx" Output="%input_dir%/inputData.gdx" CheckDate Index=INDEX!'

$call 'gdxxrw Input="%data_dir%/InputData_Baltic_2020transport.xlsx" Output="%input_dir%/inputData-2020transport.gdx" CheckDate Index=INDEX!'

$call 'gdxxrw Input="%data_dir%/InputData_Baltic_2020buildings.xlsx" Output="%input_dir%/inputData-2020buildings.gdx" CheckDate Index=INDEX!'

$ife %system.errorlevel%>0 $abort gdxxrw failed!
