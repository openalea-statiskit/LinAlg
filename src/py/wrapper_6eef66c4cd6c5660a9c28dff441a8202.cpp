#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2746cf432321579da9a030fa2446bca2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_3939660e99af51e38624ef4833b8d262(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_537b6d0a28aa5a858003275af4988a16(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_8693876ba1a5579480ee7d279959388b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2d2d0a4d28e9543bbac647056e262d1a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_50add1a82dd75fb79736e0c60567d31c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_456f7f311a3b50319f3585a3e133943a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_4e530ab6493e5ac8818dc837f2c401d8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_63e37d41cb9e51b6ac42ddcc4215ccf7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_52f26134eed75b529027e41fcf6b715e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_6eef66c4cd6c5660a9c28dff441a8202()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_2746cf432321579da9a030fa2446bca2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_3939660e99af51e38624ef4833b8d262)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_537b6d0a28aa5a858003275af4988a16)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_8693876ba1a5579480ee7d279959388b)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_2d2d0a4d28e9543bbac647056e262d1a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_50add1a82dd75fb79736e0c60567d31c)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_456f7f311a3b50319f3585a3e133943a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_4e530ab6493e5ac8818dc837f2c401d8)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_63e37d41cb9e51b6ac42ddcc4215ccf7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_52f26134eed75b529027e41fcf6b715e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 > > > class_6eef66c4cd6c5660a9c28dff441a8202("_DenseCoeffsBase_6eef66c4cd6c5660a9c28dff441a8202", "", boost::python::no_init);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref", method_pointer_2746cf432321579da9a030fa2446bca2, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref", autowig::method_decorator_2746cf432321579da9a030fa2446bca2);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref_by_outer_inner", method_pointer_3939660e99af51e38624ef4833b8d262, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref_by_outer_inner", autowig::method_decorator_3939660e99af51e38624ef4833b8d262);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__call__", method_pointer_537b6d0a28aa5a858003275af4988a16, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__call__", autowig::method_decorator_537b6d0a28aa5a858003275af4988a16);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref", method_pointer_8693876ba1a5579480ee7d279959388b, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("coeff_ref", autowig::method_decorator_8693876ba1a5579480ee7d279959388b);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__getitem__", method_pointer_2d2d0a4d28e9543bbac647056e262d1a, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__getitem__", autowig::method_decorator_2d2d0a4d28e9543bbac647056e262d1a);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__call__", method_pointer_50add1a82dd75fb79736e0c60567d31c, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("__call__", autowig::method_decorator_50add1a82dd75fb79736e0c60567d31c);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("x", method_pointer_456f7f311a3b50319f3585a3e133943a, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("x", autowig::method_decorator_456f7f311a3b50319f3585a3e133943a);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("y", method_pointer_4e530ab6493e5ac8818dc837f2c401d8, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("y", autowig::method_decorator_4e530ab6493e5ac8818dc837f2c401d8);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("z", method_pointer_63e37d41cb9e51b6ac42ddcc4215ccf7, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("z", autowig::method_decorator_63e37d41cb9e51b6ac42ddcc4215ccf7);
    class_6eef66c4cd6c5660a9c28dff441a8202.def("w", method_pointer_52f26134eed75b529027e41fcf6b715e, boost::python::return_internal_reference<>(), "");
    class_6eef66c4cd6c5660a9c28dff441a8202.def("w", autowig::method_decorator_52f26134eed75b529027e41fcf6b715e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 > > >();
    }

}