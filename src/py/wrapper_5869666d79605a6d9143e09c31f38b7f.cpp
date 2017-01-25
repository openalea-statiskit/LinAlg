#include "_ieigen.h"


namespace autowig
{
    void method_decorator_481f700b6f005fb7aca06687e0881069(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_bbae9a14a92354939ef2a8ece2670d74(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_d1df3be5395a585e9d6f40845873c1f7(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_74a3f00d774f55cc993009d8965f2186(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_5869666d79605a6d9143e09c31f38b7f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_8f4a429520fe50379571cafbfdff1d8a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_38be176544f755089967c4cd61f26ed1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_d8353d6182695b2cad81f745e5ac212a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7ead5d4223bc5c269c707579be93c3ec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_1d06110284955130aaa035e0643074c1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_ccb4472406a659e685df3ec5f145a690)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_0d20fe52db0f5125a450318df406409b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_4fd7fadf404b5e85932a151743400350)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7853392e75425f149d44bd1b8d1d4dce)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_1e840128d12b5b8da300631b731aaf1e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_b414910146de51ed99cb060e94e4ef27)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_481f700b6f005fb7aca06687e0881069)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_bbae9a14a92354939ef2a8ece2670d74)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_f92c4a965c11508b9e4fe9ba948e37d6)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_391a53ee3f495fcbbdc637bd2587490f)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_919ed0fc216f5b719538778cb2db24b8)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_587b2549a9c553ae8b871523f7f17f90)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_dce34a3cd467552eb05079e800658889)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_ba0a5761c48352f4abab1e3fa8da9eec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_d1df3be5395a585e9d6f40845873c1f7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_dc49de12a0365632b622c1a2a5bbf4e5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_74a3f00d774f55cc993009d8965f2186)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_466385fa9f895919973fc1f494ca0634)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_45b81bc3098d5386acc18bea61d11fc2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_bf0d3707e5ec51f396d6b52e38b58719)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_6ac1ec86dc99566994e53a29b87aeafb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_85381172a4f0522a9d2982bf21ad1442)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_752395f4034f5abfb1167bf536d5fe4b)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > > class_5869666d79605a6d9143e09c31f38b7f("_MatrixBase_5869666d79605a6d9143e09c31f38b7f", "", boost::python::no_init);
    class_5869666d79605a6d9143e09c31f38b7f.def("diagonal_size", method_pointer_8f4a429520fe50379571cafbfdff1d8a, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("squared_norm", method_pointer_38be176544f755089967c4cd61f26ed1, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("norm", method_pointer_d8353d6182695b2cad81f745e5ac212a, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("stable_norm", method_pointer_7ead5d4223bc5c269c707579be93c3ec, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("blue_norm", method_pointer_1d06110284955130aaa035e0643074c1, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("hypot_norm", method_pointer_ccb4472406a659e685df3ec5f145a690, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("normalized", method_pointer_0d20fe52db0f5125a450318df406409b, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("stable_normalized", method_pointer_4fd7fadf404b5e85932a151743400350, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("normalize", method_pointer_7853392e75425f149d44bd1b8d1d4dce, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("stable_normalize", method_pointer_1e840128d12b5b8da300631b731aaf1e, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("adjoint_in_place", method_pointer_b414910146de51ed99cb060e94e4ef27, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("set_identity", method_pointer_481f700b6f005fb7aca06687e0881069, boost::python::return_internal_reference<>(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("set_identity", autowig::method_decorator_481f700b6f005fb7aca06687e0881069);
    class_5869666d79605a6d9143e09c31f38b7f.def("set_identity", method_pointer_bbae9a14a92354939ef2a8ece2670d74, boost::python::return_internal_reference<>(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("set_identity", autowig::method_decorator_bbae9a14a92354939ef2a8ece2670d74);
    class_5869666d79605a6d9143e09c31f38b7f.def("is_identity", method_pointer_f92c4a965c11508b9e4fe9ba948e37d6, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("is_diagonal", method_pointer_391a53ee3f495fcbbdc637bd2587490f, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("is_upper_triangular", method_pointer_919ed0fc216f5b719538778cb2db24b8, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("is_lower_triangular", method_pointer_587b2549a9c553ae8b871523f7f17f90, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("is_unitary", method_pointer_dce34a3cd467552eb05079e800658889, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("force_aligned_access", method_pointer_ba0a5761c48352f4abab1e3fa8da9eec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("force_aligned_access", method_pointer_d1df3be5395a585e9d6f40845873c1f7, boost::python::return_internal_reference<>(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("force_aligned_access", autowig::method_decorator_d1df3be5395a585e9d6f40845873c1f7);
    class_5869666d79605a6d9143e09c31f38b7f.def("trace", method_pointer_dc49de12a0365632b622c1a2a5bbf4e5, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("matrix", method_pointer_74a3f00d774f55cc993009d8965f2186, boost::python::return_internal_reference<>(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("matrix", autowig::method_decorator_74a3f00d774f55cc993009d8965f2186);
    class_5869666d79605a6d9143e09c31f38b7f.def("matrix", method_pointer_466385fa9f895919973fc1f494ca0634, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5869666d79605a6d9143e09c31f38b7f.def("determinant", method_pointer_45b81bc3098d5386acc18bea61d11fc2, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("eigenvalues", method_pointer_bf0d3707e5ec51f396d6b52e38b58719, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("unit_orthogonal", method_pointer_6ac1ec86dc99566994e53a29b87aeafb, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("euler_angles", method_pointer_85381172a4f0522a9d2982bf21ad1442, "");
    class_5869666d79605a6d9143e09c31f38b7f.def("make_householder_in_place", method_pointer_752395f4034f5abfb1167bf536d5fe4b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >();
    }

}