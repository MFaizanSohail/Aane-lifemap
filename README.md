# Aane-lifemap

# Install ddev 
https://ddev.com/get-started/

# Start the project 
ddev start

# For importing the db after ddev start (if the database is not loaded to ddev already)
ddev import-db --file=./aane-lifemap_local.sql

# if the above doesn't work then try this.
ddev import-db --gzip=false --file=./aane-lifemap_local.sql