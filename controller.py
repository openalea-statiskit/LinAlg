def ieigen_controller(asg):
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, 2, 1, 1, 2 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, 2, 1, 1, 2 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_4a29aaa260e855a59e5bf9823918c771.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_4a29aaa260e855a59e5bf9823918c771.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 4, 4, 0, 4, 4 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 4, 4, 0, 4, 4 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, -1, -1, 0, -1, -1 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, -1, -1, 0, -1, -1 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_0a7ade2108c555b4a9225aa11d879883.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_0a7ade2108c555b4a9225aa11d879883.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_99a3aea4224d53c982d1e589e456541f.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_99a3aea4224d53c982d1e589e456541f.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_ca8a618f65b85025b806eb3116361760.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_ca8a618f65b85025b806eb3116361760.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_1ba589547c4959bfad3935f94c499797.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_1ba589547c4959bfad3935f94c499797.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_36ab6200f0e550988da49d24bcb828ac.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_36ab6200f0e550988da49d24bcb828ac.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_2e398f1938ba5794ad0a14e9e8c5300b.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_2e398f1938ba5794ad0a14e9e8c5300b.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_04bbf3d4d4c756218cc1d688b0ba65eb.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_04bbf3d4d4c756218cc1d688b0ba65eb.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_6e0d2452034c5c859c06ecf52df2f75c.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_6e0d2452034c5c859c06ecf52df2f75c.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_cbf9bf99b26f523a9523158a68921ee0.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_cbf9bf99b26f523a9523158a68921ee0.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 3, 3, 0, 3, 3 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 3, 3, 0, 3, 3 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_09ba4e6ed5d05685b9dd71b7f641c341.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_09ba4e6ed5d05685b9dd71b7f641c341.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, -1, 1, 1, -1 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, -1, 1, 1, -1 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, -1, 1, 0, -1, 1 >(int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, -1, 1, 0, -1, 1 >(int  const &, int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_8aabb3d03a415c898c8a7f4ac649f937.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_8aabb3d03a415c898c8a7f4ac649f937.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_2899f54ace735bc7a645a2b51b430c3c.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_2899f54ace735bc7a645a2b51b430c3c.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_3936a73948045bae848d837ebda17758.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_3936a73948045bae848d837ebda17758.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_d1eb9558f1ab55ad8b55212218201e4e.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_d1eb9558f1ab55ad8b55212218201e4e.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_e987dfc38e12503882825a057f3a1fb8.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_e987dfc38e12503882825a057f3a1fb8.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_d5370687986e5172b01a339d97ed75e4.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_d5370687986e5172b01a339d97ed75e4.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 4, 4, 0, 4, 4 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 4, 4, 0, 4, 4 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_0aad691244855074a54a81e5aa49fefe.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_0aad691244855074a54a81e5aa49fefe.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 2, 1, 0, 2, 1 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 2, 1, 0, 2, 1 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_7b2e72d6bd3c57a5a2f3e0eedf21174f.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_7b2e72d6bd3c57a5a2f3e0eedf21174f.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'float  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_a958c4438aa4512bb481c04495ee28f3.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_a958c4438aa4512bb481c04495ee28f3.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_2a39dbe4e52e50f19f8cfe4652136386.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_2a39dbe4e52e50f19f8cfe4652136386.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_56d569c16987596b98889ec1368d2a97.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_56d569c16987596b98889ec1368d2a97.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_be5023e9a8ed5a3fbe97199fcf6ade59.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_be5023e9a8ed5a3fbe97199fcf6ade59.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'int  determinant() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_503e5c14ed6a55b1a0b21297aa76ad33.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_503e5c14ed6a55b1a0b21297aa76ad33.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_b7e1f685776859c78ef4557827825fc0.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_b7e1f685776859c78ef4557827825fc0.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_6d6a977d5e895da2bf229090c3a4ff0a.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_6d6a977d5e895da2bf229090c3a4ff0a.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, 3, 1, 0, 3, 1 >(int  const &, int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 3, 3, 0, 3, 3 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 3, 3, 0, 3, 3 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 2 >  jacobiSvd(unsigned int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_c68a4b88c640518fbc916e5195056449.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_c68a4b88c640518fbc916e5195056449.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, -1, 1, 0, -1, 1 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, -1, 1, 0, -1, 1 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_faabcab126745a8686cce26f2e8b65d2.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_faabcab126745a8686cce26f2e8b65d2.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 2, 2, 0, 2, 2 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 2, 2, 0, 2, 2 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_65145520a656540e81733f20b66c480f.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_65145520a656540e81733f20b66c480f.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_7c636ee074755f278711b39d9481e590.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_7c636ee074755f278711b39d9481e590.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_0101d2c47c6657a586b0fdaf975386be.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_0101d2c47c6657a586b0fdaf975386be.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_3d60b3b4f3b95385ac4742d989f20dc9.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_3d60b3b4f3b95385ac4742d989f20dc9.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, 2, 1, 1, 2 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, 2, 1, 1, 2 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'int  determinant() const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_7e72c80efb4f5b4082667abc6bec908a.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_7e72c80efb4f5b4082667abc6bec908a.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_5391cabac5f95f278a515f77cb95023c.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_5391cabac5f95f278a515f77cb95023c.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_6d7f42f49cba579d87e8365e7c712c8a.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_6d7f42f49cba579d87e8365e7c712c8a.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_fda0c9adeca95d289b47c0755645911a.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_fda0c9adeca95d289b47c0755645911a.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 2, 2, 0, 2, 2 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 2, 2, 0, 2, 2 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, 3, 1, 1, 3 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_b39111415fba5172be692a672072afba.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_b39111415fba5172be692a672072afba.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_27d63cde570d52d48da320c1d6c07143.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_27d63cde570d52d48da320c1d6c07143.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, 4, 1, 0, 4, 1 >(int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_2c94af125b8e571a8940744305c2649b.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_2c94af125b8e571a8940744305c2649b.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_186fead42f3f509397c34a0facb9cc78.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_186fead42f3f509397c34a0facb9cc78.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, 2, 1, 0, 2, 1 >(int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< int, 2, 1, 0, 2, 1 >(int  const &, int  const &, int  const &, int  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, 4, 1, 1, 4 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'double  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_876fe622ecda5a3d8609352845853b44.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_876fe622ecda5a3d8609352845853b44.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 3, 1, 0, 3, 1 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_0958ddbbb5c253b78769af3b2097a83d.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_0958ddbbb5c253b78769af3b2097a83d.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_f895004a7da65a24a43fec6025d85c8f.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_f895004a7da65a24a43fec6025d85c8f.cpp'].remove()
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_40e6d71edbcc55bab4010ef5d5c6e35e.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_40e6d71edbcc55bab4010ef5d5c6e35e.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_473fc3057f975897a46df1141308eef3.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_473fc3057f975897a46df1141308eef3.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 2 >  jacobiSvd(unsigned int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_0e159d0268c7593f8e91db2a58b04ca8.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_0e159d0268c7593f8e91db2a58b04ca8.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, 4, 1, 1, 4 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_755235cde4f058218d1831eb553a2bd7.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_755235cde4f058218d1831eb553a2bd7.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_4336cb5341e65c29b27346cf6c84e54a.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_4336cb5341e65c29b27346cf6c84e54a.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_69a4a110a0015866946de130cdeee56b.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_69a4a110a0015866946de130cdeee56b.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_3ebdef72b1055ecaa4cf79d27c3fab6e.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_3ebdef72b1055ecaa4cf79d27c3fab6e.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 4, 1, 0, 4, 1 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 4, 1, 0, 4, 1 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'double  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, -1, 1, 1, -1 >(float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 1, -1, 1, 1, -1 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_aa0fd0a1b8155ad49133b71523ea7be8.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_aa0fd0a1b8155ad49133b71523ea7be8.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_30d918bcf78055938ba2ecd3745a94ba.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_30d918bcf78055938ba2ecd3745a94ba.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< float, 3, 1, 0, 3, 1 >(float  const &, float  const &, float  const &, float  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_c81524208ac3506e899173631e9fb17c.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_c81524208ac3506e899173631e9fb17c.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_843017e869015aed8a8dbbfbb5578d69.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_843017e869015aed8a8dbbfbb5578d69.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 1, 3, 1, 1, 3 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'int  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 2, 1, 0, 2, 1 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, 2, 1, 0, 2, 1 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, -1, 1, 0, -1, 1 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, -1, 1, 0, -1, 1 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'float  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_24e7e58fbead58efa5069683d31ec39f.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_24e7e58fbead58efa5069683d31ec39f.cpp'].remove()
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'float  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< double >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'void  transposeInPlace()':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_50f84bcd61415b029a22e96f5f45fcb4.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_50f84bcd61415b029a22e96f5f45fcb4.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'int  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  unitOrthogonal() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'double  stableNorm() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'float  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_8ec5fff8462159edbfd615cec465b079.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_8ec5fff8462159edbfd615cec465b079.cpp'].remove()
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'int  const & value() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  minCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'struct ::std::complex< float >  maxCoeff() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  all() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'bool  any() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'long int  count() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_bb1ceee8516758138cd4d8c2ecc6ac65.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_bb1ceee8516758138cd4d8c2ecc6ac65.cpp'].remove()
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_464e65c75a675eeab0679973e0a8314d.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_464e65c75a675eeab0679973e0a8314d.cpp'].remove()
	for constructor in asg['class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, -1, -1, 0, -1, -1 >(double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for constructor in asg['class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >'].constructors(access='public'):
		if constructor.prototype == 'Matrix< double, -1, -1, 0, -1, -1 >(double  const &, double  const &, double  const &, double  const &)':
			constructor.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'double  const & value() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  eulerAngles(long int , long int , long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  eigenvalues() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  resize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , long int )':
			method.boost_python_export = False
			break
	if asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].is_copyable:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].is_copyable = False
	else:
		asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].boost_python_export = False
		
		if '/home/pfernique/Desktop/iEigen/src/py/wrapper_474e8b06dc685c1e9deb485a1426bbb0.cpp' in asg:
			asg['/home/pfernique/Desktop/iEigen/src/py/wrapper_474e8b06dc685c1e9deb485a1426bbb0.cpp'].remove()
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'int  const & operator[](long int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'double  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::BDCSVD< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  bdcSvd(unsigned int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'class ::Eigen::BDCSVD< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  bdcSvd(unsigned int ) const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'float  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'double  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'int  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'float  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(long int , enum ::Eigen::NoChange_t )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'int  const & x() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'double  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'float  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'double  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'int  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'float  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >'].functions():
		if method.prototype == 'void  conservativeResize(enum ::Eigen::NoChange_t , long int )':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'int  const & y() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'double  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'int  const & z() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< double >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'double  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >'].functions():
		if method.prototype == 'float  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'struct ::std::complex< float >  const & w() const':
			method.boost_python_export = False
			break
	for method in asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].methods(access='public') + asg['class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >'].functions():
		if method.prototype == 'int  const & w() const':
			method.boost_python_export = False
			break
	return asg