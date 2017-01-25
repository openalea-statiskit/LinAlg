#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1e50d9d4eb9f5b539190de869b16a2a3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_3191d02032995d0cbd3eaed54de2b79d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_64c5a2a1fb1f50c9a65347bcd0cbb6e7(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_816a9a8664795455bb6205c46d1f7879(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_03e61fabf55a5d708e1db250ff2c3421()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_4df1ab456eeb55fe97a58513f3a0c3f1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c256428107465166a2dbaf5ea6e7f580)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_8956161e30d85a75973bbab59e689459)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_4a2d4b733e2a599fb091bc1f0f314c62)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_6f06b2bce99d5c708404292298f5282c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_cddb19ab5adf58669477af5f7cb4eb9f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_728bdbbca5fe5cad9ff936cd5360c5b8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_9eac7216609056c39252bf14be0ff2d5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_027d03f673e95710b591c5eacb4c34bd)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_78d1910044025f8a844e1aaaf5ecc61e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_00a36f5c1634584abe9f36ef36b00536)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_1e50d9d4eb9f5b539190de869b16a2a3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_3191d02032995d0cbd3eaed54de2b79d)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_f8114f503e795bf2a6013c8e1564336a)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_3fbf534091ea5706b4a03868dfdc0817)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_658ee5b085e159fb9d024cb00b7eddbc)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_1343bc748e7056dd94f8086766ee7d49)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_d4102b6e57615c068f167f0188a05f6e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c543ddb43bf55dba9dd63502064386fb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_64c5a2a1fb1f50c9a65347bcd0cbb6e7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_4f821ee03e985f66ab9da0b281d2196e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_816a9a8664795455bb6205c46d1f7879)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_6ca722784418563099a31f90dad756fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_e0d204ea919b5f0794c9cc4ede82cada)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_e851cd7bb66d57d1ad6018bd18f2c4c3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c1451691c556569f95b909c1cfcec0dc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_028a947404a85d04bd809d50fddba024)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_991ab94359ac5834b0535898adc5a3d7)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > > class_03e61fabf55a5d708e1db250ff2c3421("_MatrixBase_03e61fabf55a5d708e1db250ff2c3421", "", boost::python::no_init);
    class_03e61fabf55a5d708e1db250ff2c3421.def("diagonal_size", method_pointer_4df1ab456eeb55fe97a58513f3a0c3f1, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("squared_norm", method_pointer_c256428107465166a2dbaf5ea6e7f580, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("norm", method_pointer_8956161e30d85a75973bbab59e689459, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("stable_norm", method_pointer_4a2d4b733e2a599fb091bc1f0f314c62, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("blue_norm", method_pointer_6f06b2bce99d5c708404292298f5282c, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("hypot_norm", method_pointer_cddb19ab5adf58669477af5f7cb4eb9f, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("normalized", method_pointer_728bdbbca5fe5cad9ff936cd5360c5b8, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("stable_normalized", method_pointer_9eac7216609056c39252bf14be0ff2d5, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("normalize", method_pointer_027d03f673e95710b591c5eacb4c34bd, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("stable_normalize", method_pointer_78d1910044025f8a844e1aaaf5ecc61e, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("adjoint_in_place", method_pointer_00a36f5c1634584abe9f36ef36b00536, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("set_identity", method_pointer_1e50d9d4eb9f5b539190de869b16a2a3, boost::python::return_internal_reference<>(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("set_identity", autowig::method_decorator_1e50d9d4eb9f5b539190de869b16a2a3);
    class_03e61fabf55a5d708e1db250ff2c3421.def("set_identity", method_pointer_3191d02032995d0cbd3eaed54de2b79d, boost::python::return_internal_reference<>(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("set_identity", autowig::method_decorator_3191d02032995d0cbd3eaed54de2b79d);
    class_03e61fabf55a5d708e1db250ff2c3421.def("is_identity", method_pointer_f8114f503e795bf2a6013c8e1564336a, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("is_diagonal", method_pointer_3fbf534091ea5706b4a03868dfdc0817, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("is_upper_triangular", method_pointer_658ee5b085e159fb9d024cb00b7eddbc, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("is_lower_triangular", method_pointer_1343bc748e7056dd94f8086766ee7d49, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("is_unitary", method_pointer_d4102b6e57615c068f167f0188a05f6e, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("force_aligned_access", method_pointer_c543ddb43bf55dba9dd63502064386fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("force_aligned_access", method_pointer_64c5a2a1fb1f50c9a65347bcd0cbb6e7, boost::python::return_internal_reference<>(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("force_aligned_access", autowig::method_decorator_64c5a2a1fb1f50c9a65347bcd0cbb6e7);
    class_03e61fabf55a5d708e1db250ff2c3421.def("trace", method_pointer_4f821ee03e985f66ab9da0b281d2196e, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("matrix", method_pointer_816a9a8664795455bb6205c46d1f7879, boost::python::return_internal_reference<>(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("matrix", autowig::method_decorator_816a9a8664795455bb6205c46d1f7879);
    class_03e61fabf55a5d708e1db250ff2c3421.def("matrix", method_pointer_6ca722784418563099a31f90dad756fc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("determinant", method_pointer_e0d204ea919b5f0794c9cc4ede82cada, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("eigenvalues", method_pointer_e851cd7bb66d57d1ad6018bd18f2c4c3, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("unit_orthogonal", method_pointer_c1451691c556569f95b909c1cfcec0dc, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("euler_angles", method_pointer_028a947404a85d04bd809d50fddba024, "");
    class_03e61fabf55a5d708e1db250ff2c3421.def("make_householder_in_place", method_pointer_991ab94359ac5834b0535898adc5a3d7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >();
    }

}