#!/bin/bash
#SBATCH --nodes=1
#SBATCH --time=00-01:00:00
#SBATCH --job-name="WRF"

#SBATCH --ntasks-per-node=32
#SBATCH --mem=128000M
#SBATCH --mail-user=teelokup@gmail.com
#SBATCH --mail-type=END
#SBATCH --mail-type=FAIL
#SBATCH --account=def-yochen
./compile -j 8 em_scm_xy >& output_compile.txt
