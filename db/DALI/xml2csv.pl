#!/usr/bin/perl
#
# script to convert xml to csv
#
# 

use XML::Parser;

my @ghData;
my $gString;
my $ghEle;
my $ghName;
my $fscan = -1;

if(@ARGV == 0){
    print("usage: xml2csv.pl XMLFILE [DBNAME]\n");
    exit(0);
}

$xmlfilename=$ARGV[0];
@tmp=split(/\./,$xmlfilename);
$detname=$tmp[0];
$csvfilename=$xmlfilename;
$csvfilename=~s/.xml/.csv/g;

if(@ARGV == 2){
    $detname=$ARGV[1];
}

print("converting ".$xmlfilename." to ".$csvfilename."\n");

#====================================================================
my $parser = XML::Parser->new(Handlers => {Start=>\&HandleStart,
					  End=>\&HandleEnd,
					  Char=>\&HandleChar}
			     );
$parser->parsefile($xmlfilename);
open(CSVFILE,">".$csvfilename);
print CSVFILE @ghData;
close(CSVFILE);
exit(0);

#====================================================================
sub HandleStart {
    my ($expat, $element) = @_;
    if ($element eq $detname) {
	if ($fscan == -1) { # first element
	    $fscan = 1;
	}
	elsif ($fscan == 0) { # after 2nd element
	    $fscan = 2;
	}
	$ghEle = '';
    }
    $gString = '';
}
#====================================================================
sub HandleEnd {
    my ($expat, $element) = @_;
    if ($element ne $detname && $element ne 'ID') {
	if($fscan == 1){
	    $ghName .= $element;
	    $ghName .= ",";
	}
    }

    if ($element eq $detname) {
	if($fscan == 1){
	    $fscan = 0;
	    $ghName =~ s/,$/\n/;
	    push(@ghData, $ghName);
	}
	if($fscan == 2){
	    $fscan = 0;
	}
	$ghEle =~ s/,$/\n/;
	push(@ghData, $ghEle);
    }
    elsif ($element eq 'ID') {
    }
    elsif ($fscan > 0) {
	$ghEle .= $gString;
	$ghEle .= ",";
    }
}
#====================================================================
sub HandleChar {
    my ($expat, $string) = @_;
    $gString .= $string;
}
# EOF
