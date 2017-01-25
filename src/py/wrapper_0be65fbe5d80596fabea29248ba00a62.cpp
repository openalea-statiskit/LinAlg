#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1073030c6f4e574d8bdc753e5d9e8d26(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_63a97122bc6154ad97999cc8a5c5089e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_71853a19c8685d1ca5fe9bc153e4a180(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_7510b2fe8d00567882a8912237c111a3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_eae171643f5d5fbbaa624b9bd4a99244(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_966dd6e303095a10b6ac903b839b674b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_7c1e52d5c45f53cfacee4021daad3b1b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_12e28b7aff455cb5bc01db0930afc27e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_25ac468bbe125a93b88809b71815a584(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_e492fb85563351e693a60bb7ac0bd498(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_0be65fbe5d80596fabea29248ba00a62()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_1073030c6f4e574d8bdc753e5d9e8d26)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_63a97122bc6154ad97999cc8a5c5089e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_71853a19c8685d1ca5fe9bc153e4a180)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_7510b2fe8d00567882a8912237c111a3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_eae171643f5d5fbbaa624b9bd4a99244)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_966dd6e303095a10b6ac903b839b674b)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_7c1e52d5c45f53cfacee4021daad3b1b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_12e28b7aff455cb5bc01db0930afc27e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_25ac468bbe125a93b88809b71815a584)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_e492fb85563351e693a60bb7ac0bd498)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 > > > class_0be65fbe5d80596fabea29248ba00a62("_DenseCoeffsBase_0be65fbe5d80596fabea29248ba00a62", "", boost::python::no_init);
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref", method_pointer_1073030c6f4e574d8bdc753e5d9e8d26, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref", autowig::method_decorator_1073030c6f4e574d8bdc753e5d9e8d26);
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref_by_outer_inner", method_pointer_63a97122bc6154ad97999cc8a5c5089e, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref_by_outer_inner", autowig::method_decorator_63a97122bc6154ad97999cc8a5c5089e);
    class_0be65fbe5d80596fabea29248ba00a62.def("__call__", method_pointer_71853a19c8685d1ca5fe9bc153e4a180, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("__call__", autowig::method_decorator_71853a19c8685d1ca5fe9bc153e4a180);
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref", method_pointer_7510b2fe8d00567882a8912237c111a3, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("coeff_ref", autowig::method_decorator_7510b2fe8d00567882a8912237c111a3);
    class_0be65fbe5d80596fabea29248ba00a62.def("__getitem__", method_pointer_eae171643f5d5fbbaa624b9bd4a99244, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("__getitem__", autowig::method_decorator_eae171643f5d5fbbaa624b9bd4a99244);
    class_0be65fbe5d80596fabea29248ba00a62.def("__call__", method_pointer_966dd6e303095a10b6ac903b839b674b, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("__call__", autowig::method_decorator_966dd6e303095a10b6ac903b839b674b);
    class_0be65fbe5d80596fabea29248ba00a62.def("x", method_pointer_7c1e52d5c45f53cfacee4021daad3b1b, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("x", autowig::method_decorator_7c1e52d5c45f53cfacee4021daad3b1b);
    class_0be65fbe5d80596fabea29248ba00a62.def("y", method_pointer_12e28b7aff455cb5bc01db0930afc27e, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("y", autowig::method_decorator_12e28b7aff455cb5bc01db0930afc27e);
    class_0be65fbe5d80596fabea29248ba00a62.def("z", method_pointer_25ac468bbe125a93b88809b71815a584, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("z", autowig::method_decorator_25ac468bbe125a93b88809b71815a584);
    class_0be65fbe5d80596fabea29248ba00a62.def("w", method_pointer_e492fb85563351e693a60bb7ac0bd498, boost::python::return_internal_reference<>(), "");
    class_0be65fbe5d80596fabea29248ba00a62.def("w", autowig::method_decorator_e492fb85563351e693a60bb7ac0bd498);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 > > >();
    }

}