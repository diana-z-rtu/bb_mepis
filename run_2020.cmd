Title "2020 system+transport+buildings"

del .\backbone_input\*.gdx
del .\backbone_input\4d_postProcess.gms
del .\backbone_input\invest_results.inc

cd ..
del .\output\invest_results.inc
gams Backbone.gms -Optdir=./energy_poverty/backbone_input --input_dir=./energy_poverty/backbone_input --data_dir=./energy_poverty/data --scenario=2020.inc --init_file=scheduleInit-1d.gms --penalty=10e4 --debug=1
copy .\output\results.gdx .\energy_poverty\results\results-2020.gdx
copy .\output\debug.gdx .\energy_poverty\results\debug-2020.gdx

cd energy_poverty


cmd