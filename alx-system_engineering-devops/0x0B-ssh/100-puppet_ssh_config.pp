# create a config file for ssh
#
file { '/root/.ssh/config':
  ensure  => 'file',
  mode    => '0600',
  content => "
host 54.237.208.82
	PasswordAuthentication = no
	IdentityFile = ~/.ssh/school
"
}
