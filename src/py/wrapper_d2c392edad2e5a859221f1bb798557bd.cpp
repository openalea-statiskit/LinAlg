#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d09b98cdc09f5373ac62a168171084c8(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_2997a05503635bdd969aadaa0a5a2ce9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_9aabf95564235e21acfdb7d77cd5219c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_c607c42249f85c959ca40b5c4474dc9b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_817bcb21afaa545db0c43af00b5c0ea9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_d2c392edad2e5a859221f1bb798557bd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_53b00334bbbc5ae3ab9394fc78e4a7e1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::diagonalSize;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_654bbd22d9055cf6bdb1bcc51a7dad90)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::conjugate;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_eaaacefb15835ed4b7f53304ee8f0249)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::real;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_d09b98cdc09f5373ac62a168171084c8)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_ebb35084076b5a2ca4f84b90c194e4f5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_e8cda1eaa12e512e90acad355665c49e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_7ccafcbfc60b5c53b3cd20fa2c1190f7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_26459f641e10532a98384e8c3400d4d2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_48e61579df88509c83c3e8f7c4363a39)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::hypotNorm;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_e7bd96ae87865421815e606596ba1b1c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::normalized;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_675dc3b93c165dffb8bfca2e2635a78f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_296a3fd67e2d572aaa3c5ea680779199)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_961a6b8f39d05cc49a840dd06ced8bda)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_7432563825d1502a91f1e3c87f0494c1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_2997a05503635bdd969aadaa0a5a2ce9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setIdentity;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_9aabf95564235e21acfdb7d77cd5219c)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_72a715ab4c5a58d3b264b93442bc411d)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_872b9c70cb195eda89934466dd31aca9)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_f36e6a86cb465abfb5851a2cad2d723f)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_1706a70a513e5040873bf4c6a65ada98)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_76429fca443f5bb68e7feaad36ffc91f)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isUnitary;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_dc17752787da5c7490c213f0b4936013)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_c607c42249f85c959ca40b5c4474dc9b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_84e22374d7605a479277587c60e756e7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_817bcb21afaa545db0c43af00b5c0ea9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_6c44aa7c87885ce7b132b2e2cd3b94f9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_592c9922c71e5c428fca3b58b91712eb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::determinant;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_a418c07009a1507cb4ceb7c171a62bc2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_9331b4390dc25712a9cf3c38ea824af3)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > > class_d2c392edad2e5a859221f1bb798557bd("_MatrixBase_d2c392edad2e5a859221f1bb798557bd", "", boost::python::no_init);
    class_d2c392edad2e5a859221f1bb798557bd.def("diagonal_size", method_pointer_53b00334bbbc5ae3ab9394fc78e4a7e1, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("conjugate", method_pointer_654bbd22d9055cf6bdb1bcc51a7dad90, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("real", method_pointer_eaaacefb15835ed4b7f53304ee8f0249, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("real", method_pointer_d09b98cdc09f5373ac62a168171084c8, boost::python::return_internal_reference<>(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("real", autowig::method_decorator_d09b98cdc09f5373ac62a168171084c8);
    class_d2c392edad2e5a859221f1bb798557bd.def("squared_norm", method_pointer_ebb35084076b5a2ca4f84b90c194e4f5, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("norm", method_pointer_e8cda1eaa12e512e90acad355665c49e, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("stable_norm", method_pointer_7ccafcbfc60b5c53b3cd20fa2c1190f7, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("blue_norm", method_pointer_26459f641e10532a98384e8c3400d4d2, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("hypot_norm", method_pointer_48e61579df88509c83c3e8f7c4363a39, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("normalized", method_pointer_e7bd96ae87865421815e606596ba1b1c, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("stable_normalized", method_pointer_675dc3b93c165dffb8bfca2e2635a78f, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("normalize", method_pointer_296a3fd67e2d572aaa3c5ea680779199, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("stable_normalize", method_pointer_961a6b8f39d05cc49a840dd06ced8bda, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("adjoint_in_place", method_pointer_7432563825d1502a91f1e3c87f0494c1, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("set_identity", method_pointer_2997a05503635bdd969aadaa0a5a2ce9, boost::python::return_internal_reference<>(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("set_identity", autowig::method_decorator_2997a05503635bdd969aadaa0a5a2ce9);
    class_d2c392edad2e5a859221f1bb798557bd.def("set_identity", method_pointer_9aabf95564235e21acfdb7d77cd5219c, boost::python::return_internal_reference<>(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("set_identity", autowig::method_decorator_9aabf95564235e21acfdb7d77cd5219c);
    class_d2c392edad2e5a859221f1bb798557bd.def("is_identity", method_pointer_72a715ab4c5a58d3b264b93442bc411d, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("is_diagonal", method_pointer_872b9c70cb195eda89934466dd31aca9, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("is_upper_triangular", method_pointer_f36e6a86cb465abfb5851a2cad2d723f, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("is_lower_triangular", method_pointer_1706a70a513e5040873bf4c6a65ada98, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("is_unitary", method_pointer_76429fca443f5bb68e7feaad36ffc91f, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("force_aligned_access", method_pointer_dc17752787da5c7490c213f0b4936013, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("force_aligned_access", method_pointer_c607c42249f85c959ca40b5c4474dc9b, boost::python::return_internal_reference<>(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("force_aligned_access", autowig::method_decorator_c607c42249f85c959ca40b5c4474dc9b);
    class_d2c392edad2e5a859221f1bb798557bd.def("trace", method_pointer_84e22374d7605a479277587c60e756e7, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("matrix", method_pointer_817bcb21afaa545db0c43af00b5c0ea9, boost::python::return_internal_reference<>(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("matrix", autowig::method_decorator_817bcb21afaa545db0c43af00b5c0ea9);
    class_d2c392edad2e5a859221f1bb798557bd.def("matrix", method_pointer_6c44aa7c87885ce7b132b2e2cd3b94f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d2c392edad2e5a859221f1bb798557bd.def("determinant", method_pointer_592c9922c71e5c428fca3b58b91712eb, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("unit_orthogonal", method_pointer_a418c07009a1507cb4ceb7c171a62bc2, "");
    class_d2c392edad2e5a859221f1bb798557bd.def("make_householder_in_place", method_pointer_9331b4390dc25712a9cf3c38ea824af3, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >();
    }

}