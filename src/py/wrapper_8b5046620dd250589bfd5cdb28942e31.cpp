#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5915a8af6caf576ab40dcb559d6552bf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_0ab78a3102b95b41856b86b6eec1fdcb(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_33cacb909e105f5989c1bff6c1074d75(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_637fdb70c3cd53e5901b4e15760d5ea2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d3fe107ec5d750ee982b7509821abde3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_8b5046620dd250589bfd5cdb28942e31()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_efd478795b4a59138cb5a2f1024ce81d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::diagonalSize;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_c389f29d4d1d513a8dd734de5c34698c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::conjugate;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_ba1dc205f5625cefad66dce5fc73544e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::real;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_5915a8af6caf576ab40dcb559d6552bf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_ee2ba18b8d3554e5958e90442c01acda)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_4f333bf2f552504196242586449267ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_a7d23fc905355d88bfc624890eb674cd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_1ec803e0c371522196a12274db1009cc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_88c39e88611150368e2e433b407b94f2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::hypotNorm;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_014c2b1477575ce6835fac2a42043600)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::normalized;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_134f5acedaef5299921cb68b99c21d23)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_c0afd74e17de5cd28280f603cd63b91a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_5a43f12545f459e1a446a7c7adf41c4d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_9318ef656bf2547b8ea3534f87a944ad)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0ab78a3102b95b41856b86b6eec1fdcb)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_33cacb909e105f5989c1bff6c1074d75)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_1324e1a06b115e218ac6a2e1c4860d8b)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_bf302e5277cf594f87a2386a4ca367c7)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_d8e9b069a1f959738de3f33cd56b8516)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_b000d4387e49555ca2607c38b72a2f00)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0d8621fd0aaa5bdcad33f7bb29bf9f72)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isUnitary;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_16539c71e6845fe3a2b51eedbe5864be)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_637fdb70c3cd53e5901b4e15760d5ea2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_67cd982690615fe09d1f44a20c0689fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_d3fe107ec5d750ee982b7509821abde3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_6903a0c9cd5758e096258e472415bb2a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0b88892e824453fb8db9338c30a26036)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_08d8ac114d415774a60591a59e15afac)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > > class_8b5046620dd250589bfd5cdb28942e31("_MatrixBase_8b5046620dd250589bfd5cdb28942e31", "", boost::python::no_init);
    class_8b5046620dd250589bfd5cdb28942e31.def("diagonal_size", method_pointer_efd478795b4a59138cb5a2f1024ce81d, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("conjugate", method_pointer_c389f29d4d1d513a8dd734de5c34698c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("real", method_pointer_ba1dc205f5625cefad66dce5fc73544e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("real", method_pointer_5915a8af6caf576ab40dcb559d6552bf, boost::python::return_internal_reference<>(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("real", autowig::method_decorator_5915a8af6caf576ab40dcb559d6552bf);
    class_8b5046620dd250589bfd5cdb28942e31.def("squared_norm", method_pointer_ee2ba18b8d3554e5958e90442c01acda, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("norm", method_pointer_4f333bf2f552504196242586449267ce, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("stable_norm", method_pointer_a7d23fc905355d88bfc624890eb674cd, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("blue_norm", method_pointer_1ec803e0c371522196a12274db1009cc, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("hypot_norm", method_pointer_88c39e88611150368e2e433b407b94f2, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("normalized", method_pointer_014c2b1477575ce6835fac2a42043600, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("stable_normalized", method_pointer_134f5acedaef5299921cb68b99c21d23, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("normalize", method_pointer_c0afd74e17de5cd28280f603cd63b91a, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("stable_normalize", method_pointer_5a43f12545f459e1a446a7c7adf41c4d, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("adjoint_in_place", method_pointer_9318ef656bf2547b8ea3534f87a944ad, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("set_identity", method_pointer_0ab78a3102b95b41856b86b6eec1fdcb, boost::python::return_internal_reference<>(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("set_identity", autowig::method_decorator_0ab78a3102b95b41856b86b6eec1fdcb);
    class_8b5046620dd250589bfd5cdb28942e31.def("set_identity", method_pointer_33cacb909e105f5989c1bff6c1074d75, boost::python::return_internal_reference<>(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("set_identity", autowig::method_decorator_33cacb909e105f5989c1bff6c1074d75);
    class_8b5046620dd250589bfd5cdb28942e31.def("is_identity", method_pointer_1324e1a06b115e218ac6a2e1c4860d8b, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("is_diagonal", method_pointer_bf302e5277cf594f87a2386a4ca367c7, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("is_upper_triangular", method_pointer_d8e9b069a1f959738de3f33cd56b8516, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("is_lower_triangular", method_pointer_b000d4387e49555ca2607c38b72a2f00, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("is_unitary", method_pointer_0d8621fd0aaa5bdcad33f7bb29bf9f72, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("force_aligned_access", method_pointer_16539c71e6845fe3a2b51eedbe5864be, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("force_aligned_access", method_pointer_637fdb70c3cd53e5901b4e15760d5ea2, boost::python::return_internal_reference<>(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("force_aligned_access", autowig::method_decorator_637fdb70c3cd53e5901b4e15760d5ea2);
    class_8b5046620dd250589bfd5cdb28942e31.def("trace", method_pointer_67cd982690615fe09d1f44a20c0689fc, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("matrix", method_pointer_d3fe107ec5d750ee982b7509821abde3, boost::python::return_internal_reference<>(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("matrix", autowig::method_decorator_d3fe107ec5d750ee982b7509821abde3);
    class_8b5046620dd250589bfd5cdb28942e31.def("matrix", method_pointer_6903a0c9cd5758e096258e472415bb2a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b5046620dd250589bfd5cdb28942e31.def("unit_orthogonal", method_pointer_0b88892e824453fb8db9338c30a26036, "");
    class_8b5046620dd250589bfd5cdb28942e31.def("make_householder_in_place", method_pointer_08d8ac114d415774a60591a59e15afac, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >();
    }

}