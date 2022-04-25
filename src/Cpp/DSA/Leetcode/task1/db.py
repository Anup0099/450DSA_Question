import mysql.connector as d
conn = d.connect(host='localhost', port=3306,
                 user='root', password='AnupPal@70012', database='testdb')

if conn.is_connected():
    print('Connected to MySQL database')
else:           
    print('Connection failed')


mycursor = conn.cursor()
mycursor.execute("CREATE DATABASE IF NOT EXISTS testdb")

show_db = mycursor.execute("SHOW DATABASES")
for db in mycursor:
    print(db)


mycursor.execute("CREATE TABLE if not exists reviewers (id INT AUTO_INCREMENT not null PRIMARY KEY,first_name VARCHAR(255),last_name VARCHAR(255))")

mycursor.execute("CREATE TABLE movies(id INT AUTO_INCREMENT not null primary key,name VARCHAR(255),year INT,rating FLOAT,genre VARCHAR(255),collections_in_theaters INT)")

mycursor.execute("CREATE TABLE ratings(id INT AUTO_INCREMENT not null primary key,movie_id INT,reviewer_id INT,rating FLOAT)")


    