# This manifest installs and configure an Nginx server.

# Install Nginx
package { 'nginx':
  ensure   => 'installed',
  provider => 'apt',
}

# Configure html file
file { '/var/www/html/index.html':
  content => 'Hello World!\n',
}

# Configure server
file { '/etc/nginx/sites-enabled/default':
  content => '
	server {
		listen 80 default_server;
		listen [::]:80 default_server;
		root /var/www/html;
		index index.html index.htm index.nginx-debian.html;
		server_name _;
		location / {
				try_files $uri $uri/ =404;
		}
		rewrite ^/redirect_me/ https://www.youtube.com/watch?v=QH2-TGUlwu4 permanent;
	}',
}

# Start server
service { 'nginx':
  ensure => 'running',
  enable => 'true',
}
