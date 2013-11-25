Pod::Spec.new do |s|
	s.name		= "SCSettlersAPI"
	s.version	= "0.0.1"
	s.summary 	= "C based api for the settlers of catan game."
	s.homepage	= "https://github.com/theocalmes/SCSettlersAPI.git"
	s.license	= 'MIT'
	s.author 	= {"Theodore Calmes" => "theocalmes@gmail.com"}
	s.source    = { 
    	:git => "git@github.com:theocalmes/SCSettlersAPI.git",
    	:tag => "0.0.1"
  	}
  	s.source_files = 'SCSettlersAPI/**/*.{c,h}'
	s.requires_arc = true
	s.platform     = :ios, '7.0'
	s.documentation = { 
		:appledoc => [
			'--project-name',      s.name + ' ' + s.version.to_s(),
			'--project-company',   'Theo Calmes',
			'--docset-copyright',  'Theo Calmes',
	    	'--no-keep-undocumented-objects',
	    	'--no-keep-undocumented-members',
	    	'--no-repeat-first-par',
	    	'--no-warn-invalid-crossref'
	    ]
	}
end
