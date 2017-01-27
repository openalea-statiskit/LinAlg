#include "_ieigen.h"


namespace autowig
{
    void method_decorator_78030ae373dc55768fb3b7710f98ec61(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_7f747a0ccd7f58d7848fdaf913d87710(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_60696b18843e5855a146b7e1b510cfc2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_39845c4d4169552189a799c8f7988b1d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_d76277c695f152449ce6c01b56ebe018()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_4fa1593725805c89988af4d239bcdba0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_ede782e8b83c524dab32f1f506254956)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_e827886fbaa05b1ebd707739d8e41b0b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_71b7c3caad7458e28663d0ecdbde13e6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_7442e284a1325bedb014119ac62f2e58)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_cfcf9a8e78895a35b9ed652df419ac0b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_5a8f132565665393ae80908393b6b6e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_d8e329d771f55fcca656d944d3c26beb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_0571c17a18d45e2896463971712b9363)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_b15977643bda5405913f297b43993119)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_a13d7e890be55de3a037b0fcb38185b1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_78030ae373dc55768fb3b7710f98ec61)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_7f747a0ccd7f58d7848fdaf913d87710)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_fd2574c67f62570dbf1bfdf9956e424a)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_44bd58356eae522ba106c20f52b922c9)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_fc89f58835c0553bbbf87f810b99b722)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_422c676791e35de8b2a25ee9670ed308)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_93d0fa129806556fb5013aada287d52e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_4e45d3f0fd9052568a6d05bd0abad355)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_60696b18843e5855a146b7e1b510cfc2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_245ebd21256153c3bccbc34fda2638c0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_39845c4d4169552189a799c8f7988b1d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_a5f57ed39bf0569ea1e3401bcb1aba97)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_53b5a6728068526680f30d9f0f1ceae7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_33c72280c44a51ecabbc3a18c51fc9be)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_b04397faf7a059e4b9f42393ea4b0387)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > > class_d76277c695f152449ce6c01b56ebe018("_MatrixBase_d76277c695f152449ce6c01b56ebe018", "", boost::python::no_init);
    class_d76277c695f152449ce6c01b56ebe018.def("diagonal_size", method_pointer_4fa1593725805c89988af4d239bcdba0, "");
    class_d76277c695f152449ce6c01b56ebe018.def("squared_norm", method_pointer_ede782e8b83c524dab32f1f506254956, "");
    class_d76277c695f152449ce6c01b56ebe018.def("norm", method_pointer_e827886fbaa05b1ebd707739d8e41b0b, "");
    class_d76277c695f152449ce6c01b56ebe018.def("stable_norm", method_pointer_71b7c3caad7458e28663d0ecdbde13e6, "");
    class_d76277c695f152449ce6c01b56ebe018.def("blue_norm", method_pointer_7442e284a1325bedb014119ac62f2e58, "");
    class_d76277c695f152449ce6c01b56ebe018.def("hypot_norm", method_pointer_cfcf9a8e78895a35b9ed652df419ac0b, "");
    class_d76277c695f152449ce6c01b56ebe018.def("normalized", method_pointer_5a8f132565665393ae80908393b6b6e4, "");
    class_d76277c695f152449ce6c01b56ebe018.def("stable_normalized", method_pointer_d8e329d771f55fcca656d944d3c26beb, "");
    class_d76277c695f152449ce6c01b56ebe018.def("normalize", method_pointer_0571c17a18d45e2896463971712b9363, "");
    class_d76277c695f152449ce6c01b56ebe018.def("stable_normalize", method_pointer_b15977643bda5405913f297b43993119, "");
    class_d76277c695f152449ce6c01b56ebe018.def("adjoint_in_place", method_pointer_a13d7e890be55de3a037b0fcb38185b1, "");
    class_d76277c695f152449ce6c01b56ebe018.def("set_identity", method_pointer_78030ae373dc55768fb3b7710f98ec61, boost::python::return_internal_reference<>(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("set_identity", autowig::method_decorator_78030ae373dc55768fb3b7710f98ec61);
    class_d76277c695f152449ce6c01b56ebe018.def("set_identity", method_pointer_7f747a0ccd7f58d7848fdaf913d87710, boost::python::return_internal_reference<>(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("set_identity", autowig::method_decorator_7f747a0ccd7f58d7848fdaf913d87710);
    class_d76277c695f152449ce6c01b56ebe018.def("is_identity", method_pointer_fd2574c67f62570dbf1bfdf9956e424a, "");
    class_d76277c695f152449ce6c01b56ebe018.def("is_diagonal", method_pointer_44bd58356eae522ba106c20f52b922c9, "");
    class_d76277c695f152449ce6c01b56ebe018.def("is_upper_triangular", method_pointer_fc89f58835c0553bbbf87f810b99b722, "");
    class_d76277c695f152449ce6c01b56ebe018.def("is_lower_triangular", method_pointer_422c676791e35de8b2a25ee9670ed308, "");
    class_d76277c695f152449ce6c01b56ebe018.def("is_unitary", method_pointer_93d0fa129806556fb5013aada287d52e, "");
    class_d76277c695f152449ce6c01b56ebe018.def("force_aligned_access", method_pointer_4e45d3f0fd9052568a6d05bd0abad355, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("force_aligned_access", method_pointer_60696b18843e5855a146b7e1b510cfc2, boost::python::return_internal_reference<>(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("force_aligned_access", autowig::method_decorator_60696b18843e5855a146b7e1b510cfc2);
    class_d76277c695f152449ce6c01b56ebe018.def("trace", method_pointer_245ebd21256153c3bccbc34fda2638c0, "");
    class_d76277c695f152449ce6c01b56ebe018.def("matrix", method_pointer_39845c4d4169552189a799c8f7988b1d, boost::python::return_internal_reference<>(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("matrix", autowig::method_decorator_39845c4d4169552189a799c8f7988b1d);
    class_d76277c695f152449ce6c01b56ebe018.def("matrix", method_pointer_a5f57ed39bf0569ea1e3401bcb1aba97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d76277c695f152449ce6c01b56ebe018.def("determinant", method_pointer_53b5a6728068526680f30d9f0f1ceae7, "");
    class_d76277c695f152449ce6c01b56ebe018.def("unit_orthogonal", method_pointer_33c72280c44a51ecabbc3a18c51fc9be, "");
    class_d76277c695f152449ce6c01b56ebe018.def("make_householder_in_place", method_pointer_b04397faf7a059e4b9f42393ea4b0387, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >();
    }

}