#include "_ieigen.h"


namespace autowig
{
    void method_decorator_776e4174815c53cb904673799cbc7c51(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_6d62aaea6c6158aa93f7ef5f844933e2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_dc61f42132e859aca815e276cef6dbb9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_437bc44d753c586780c376a5d5b96c95(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_4425d7e272ca54b0820c7a26de3cb3e9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_3a9407fc5f795d6db50a8eba417eda52()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_f14ffd1fcef35ebb866f8fbd1bb6673e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::diagonalSize;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_35b60bdb47875bf8839ca555e175b46c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::conjugate;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_59d3cfe9924957cfb82ad0ed081100e1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::real;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_776e4174815c53cb904673799cbc7c51)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_bfca7578a005527ca7e1d35e614e2bf4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_4dc4723284f356b09d8fa968185a796f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d8eac1bd3a085080b5a88d889e27a26a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e2a57d74e1f253969b898d67f820c4d1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_17b38c133c4651788fe3d3db395ab50c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::hypotNorm;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d21cd73694475c62b3b1e34048d77724)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::normalized;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_58029711c8a454e996b1289166c728e1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_f181b9fb8f355aa183a120b35f2f9b98)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_53a23ea6b1745660ac64f1b1bb01906e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_578d5731e95b50f396b27f658658e4a3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_6d62aaea6c6158aa93f7ef5f844933e2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setIdentity;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_dc61f42132e859aca815e276cef6dbb9)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_191b3fe0c7995c8a8b14ca4718691323)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_5d88c90ff5085c81a0d9b68a0009415f)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_07aaba1fd7d054ec8ecca672e29cabdf)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_81472d16d98a5c1c9b38efcbe4738e9c)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_77613305c3f55421ae4cbd6bf1518ca2)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isUnitary;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_387dc91d4d1150d4ae3d0c002fb1f2d3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_437bc44d753c586780c376a5d5b96c95)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_b54c51dc11f25e969bb79dfe921d3fc4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_4425d7e272ca54b0820c7a26de3cb3e9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_3491a3e8213d56fabdfafd809dd26072)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e9b61aed18b253bca040738b610f4eaf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::determinant;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_141519b7e24f5e0fa7e657971c678a8c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_0f403cc3973d51998be93400477e5e04)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_6f44ee59b4a85279aabbc58fff927a78)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > > class_3a9407fc5f795d6db50a8eba417eda52("_MatrixBase_3a9407fc5f795d6db50a8eba417eda52", "", boost::python::no_init);
    class_3a9407fc5f795d6db50a8eba417eda52.def("diagonal_size", method_pointer_f14ffd1fcef35ebb866f8fbd1bb6673e, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("conjugate", method_pointer_35b60bdb47875bf8839ca555e175b46c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("real", method_pointer_59d3cfe9924957cfb82ad0ed081100e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("real", method_pointer_776e4174815c53cb904673799cbc7c51, boost::python::return_internal_reference<>(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("real", autowig::method_decorator_776e4174815c53cb904673799cbc7c51);
    class_3a9407fc5f795d6db50a8eba417eda52.def("squared_norm", method_pointer_bfca7578a005527ca7e1d35e614e2bf4, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("norm", method_pointer_4dc4723284f356b09d8fa968185a796f, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("stable_norm", method_pointer_d8eac1bd3a085080b5a88d889e27a26a, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("blue_norm", method_pointer_e2a57d74e1f253969b898d67f820c4d1, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("hypot_norm", method_pointer_17b38c133c4651788fe3d3db395ab50c, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("normalized", method_pointer_d21cd73694475c62b3b1e34048d77724, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("stable_normalized", method_pointer_58029711c8a454e996b1289166c728e1, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("normalize", method_pointer_f181b9fb8f355aa183a120b35f2f9b98, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("stable_normalize", method_pointer_53a23ea6b1745660ac64f1b1bb01906e, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("adjoint_in_place", method_pointer_578d5731e95b50f396b27f658658e4a3, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("set_identity", method_pointer_6d62aaea6c6158aa93f7ef5f844933e2, boost::python::return_internal_reference<>(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("set_identity", autowig::method_decorator_6d62aaea6c6158aa93f7ef5f844933e2);
    class_3a9407fc5f795d6db50a8eba417eda52.def("set_identity", method_pointer_dc61f42132e859aca815e276cef6dbb9, boost::python::return_internal_reference<>(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("set_identity", autowig::method_decorator_dc61f42132e859aca815e276cef6dbb9);
    class_3a9407fc5f795d6db50a8eba417eda52.def("is_identity", method_pointer_191b3fe0c7995c8a8b14ca4718691323, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("is_diagonal", method_pointer_5d88c90ff5085c81a0d9b68a0009415f, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("is_upper_triangular", method_pointer_07aaba1fd7d054ec8ecca672e29cabdf, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("is_lower_triangular", method_pointer_81472d16d98a5c1c9b38efcbe4738e9c, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("is_unitary", method_pointer_77613305c3f55421ae4cbd6bf1518ca2, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("force_aligned_access", method_pointer_387dc91d4d1150d4ae3d0c002fb1f2d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("force_aligned_access", method_pointer_437bc44d753c586780c376a5d5b96c95, boost::python::return_internal_reference<>(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("force_aligned_access", autowig::method_decorator_437bc44d753c586780c376a5d5b96c95);
    class_3a9407fc5f795d6db50a8eba417eda52.def("trace", method_pointer_b54c51dc11f25e969bb79dfe921d3fc4, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("matrix", method_pointer_4425d7e272ca54b0820c7a26de3cb3e9, boost::python::return_internal_reference<>(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("matrix", autowig::method_decorator_4425d7e272ca54b0820c7a26de3cb3e9);
    class_3a9407fc5f795d6db50a8eba417eda52.def("matrix", method_pointer_3491a3e8213d56fabdfafd809dd26072, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("determinant", method_pointer_e9b61aed18b253bca040738b610f4eaf, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("unit_orthogonal", method_pointer_141519b7e24f5e0fa7e657971c678a8c, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("euler_angles", method_pointer_0f403cc3973d51998be93400477e5e04, "");
    class_3a9407fc5f795d6db50a8eba417eda52.def("make_householder_in_place", method_pointer_6f44ee59b4a85279aabbc58fff927a78, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >();
    }

}