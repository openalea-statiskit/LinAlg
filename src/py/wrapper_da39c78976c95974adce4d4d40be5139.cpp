#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8a5d5c8d527157be9c10cbd13e890099(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6d164f0034875a509baa49608b191a8b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_ef1ea06ac3b3540d88f0fd787703f290(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_02c05b653d08527b9fc342081f3183b7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3c544e656ce9540788b8244a8f34e5c8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_23ab68fed87b5d79aca9143224360ab3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_77478eb14d99501fa54f506b9922fbba(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_3a41de49349856b1b109415f2b51641d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_e6e53f11a75d58dfb8bcee100ae999b9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_fc6b22dedd775931b1b944b5afb0776e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_da39c78976c95974adce4d4d40be5139()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_8a5d5c8d527157be9c10cbd13e890099)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6d164f0034875a509baa49608b191a8b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_ef1ea06ac3b3540d88f0fd787703f290)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_02c05b653d08527b9fc342081f3183b7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3c544e656ce9540788b8244a8f34e5c8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_23ab68fed87b5d79aca9143224360ab3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_77478eb14d99501fa54f506b9922fbba)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3a41de49349856b1b109415f2b51641d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_e6e53f11a75d58dfb8bcee100ae999b9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_fc6b22dedd775931b1b944b5afb0776e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 > > > class_da39c78976c95974adce4d4d40be5139("_DenseCoeffsBase_da39c78976c95974adce4d4d40be5139", "", boost::python::no_init);
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref", method_pointer_8a5d5c8d527157be9c10cbd13e890099, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref", autowig::method_decorator_8a5d5c8d527157be9c10cbd13e890099);
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref_by_outer_inner", method_pointer_6d164f0034875a509baa49608b191a8b, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref_by_outer_inner", autowig::method_decorator_6d164f0034875a509baa49608b191a8b);
    class_da39c78976c95974adce4d4d40be5139.def("__call__", method_pointer_ef1ea06ac3b3540d88f0fd787703f290, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("__call__", autowig::method_decorator_ef1ea06ac3b3540d88f0fd787703f290);
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref", method_pointer_02c05b653d08527b9fc342081f3183b7, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("coeff_ref", autowig::method_decorator_02c05b653d08527b9fc342081f3183b7);
    class_da39c78976c95974adce4d4d40be5139.def("__getitem__", method_pointer_3c544e656ce9540788b8244a8f34e5c8, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("__getitem__", autowig::method_decorator_3c544e656ce9540788b8244a8f34e5c8);
    class_da39c78976c95974adce4d4d40be5139.def("__call__", method_pointer_23ab68fed87b5d79aca9143224360ab3, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("__call__", autowig::method_decorator_23ab68fed87b5d79aca9143224360ab3);
    class_da39c78976c95974adce4d4d40be5139.def("x", method_pointer_77478eb14d99501fa54f506b9922fbba, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("x", autowig::method_decorator_77478eb14d99501fa54f506b9922fbba);
    class_da39c78976c95974adce4d4d40be5139.def("y", method_pointer_3a41de49349856b1b109415f2b51641d, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("y", autowig::method_decorator_3a41de49349856b1b109415f2b51641d);
    class_da39c78976c95974adce4d4d40be5139.def("z", method_pointer_e6e53f11a75d58dfb8bcee100ae999b9, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("z", autowig::method_decorator_e6e53f11a75d58dfb8bcee100ae999b9);
    class_da39c78976c95974adce4d4d40be5139.def("w", method_pointer_fc6b22dedd775931b1b944b5afb0776e, boost::python::return_internal_reference<>(), "");
    class_da39c78976c95974adce4d4d40be5139.def("w", autowig::method_decorator_fc6b22dedd775931b1b944b5afb0776e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 > > >();
    }

}