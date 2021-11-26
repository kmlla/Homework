@echo off
chcp 65001
set semestr1 =%1
mkdir %1
cd %1
mkdir "Алгебра и геометрия"
mkdir "Мат. анализ"
mkdir "Основы программирования"
mkdir "Дискретная математика"
cd "Алгебра и геометрия"
echo Балыкина Юлия Ефимовна. Начало занятий: %date% > readme.txt
cd ..
cd "Мат. анализ"
echo Мышков Станислав Константинович. Начало занятий: %date% > readme.txt
cd ..
cd "Основы программирования"
echo Погожев Сергей Владимирович. Начало занятий: %date% > readme.txt
cd ..
cd "Дискретная математика"
echo Воронкова Ева Боруховна. Начало занятий: %date% > readme.txt
cd ..
cd ..
copy op.bat %1
copy algem.bat %1
