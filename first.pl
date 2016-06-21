#!/usr/bin/perl

use strict;
use warnings;
use QtCore4;
use QtGui4;

my $app = Qt::Application( \@ARGV );
my $hello = Qt::Label( 'Hello, World!' );
$hello->show();
exit $app->exec();
