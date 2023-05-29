# A puppet script that creats a file in /tmp
file { '/tmp/school':
  ensure  => 'file',
  path    => '/tmp/school',
  content => 'I love Puppet',
  mode    => '0744',
  owner   => 'www-data',
  group   =>  'www-data'
}
