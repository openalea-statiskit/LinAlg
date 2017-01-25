#include "_ieigen.h"


namespace autowig
{
    void method_decorator_62f1c75a73775fb7b6f98288c4c33eac(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_3798e30095c3508bae131944f0a721ff(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_56f17eadb0745804a6a3d864df735e9b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_8f0b7bc912025d938a970cf8524fd068(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_fa8ffef9d03159c58b045010301ebd0e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_100967dea1985016b5a818cc60cc4bd8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_eb084d837f055752a8258fa76f350a61(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_ab07ce9b58105a35b463aa812dd936af(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_a764f98ae88f5e0f9dcae0a97f78576b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_dda1eb0f69c55d5d80a6d53632f5884f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_1a91c36339195255ae96ff0559c4b4b2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_62f1c75a73775fb7b6f98288c4c33eac)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3798e30095c3508bae131944f0a721ff)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_56f17eadb0745804a6a3d864df735e9b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_8f0b7bc912025d938a970cf8524fd068)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_fa8ffef9d03159c58b045010301ebd0e)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_100967dea1985016b5a818cc60cc4bd8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_eb084d837f055752a8258fa76f350a61)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_ab07ce9b58105a35b463aa812dd936af)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_a764f98ae88f5e0f9dcae0a97f78576b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_dda1eb0f69c55d5d80a6d53632f5884f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 > > > class_1a91c36339195255ae96ff0559c4b4b2("_DenseCoeffsBase_1a91c36339195255ae96ff0559c4b4b2", "", boost::python::no_init);
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref", method_pointer_62f1c75a73775fb7b6f98288c4c33eac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref", autowig::method_decorator_62f1c75a73775fb7b6f98288c4c33eac);
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref_by_outer_inner", method_pointer_3798e30095c3508bae131944f0a721ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref_by_outer_inner", autowig::method_decorator_3798e30095c3508bae131944f0a721ff);
    class_1a91c36339195255ae96ff0559c4b4b2.def("__call__", method_pointer_56f17eadb0745804a6a3d864df735e9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("__call__", autowig::method_decorator_56f17eadb0745804a6a3d864df735e9b);
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref", method_pointer_8f0b7bc912025d938a970cf8524fd068, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("coeff_ref", autowig::method_decorator_8f0b7bc912025d938a970cf8524fd068);
    class_1a91c36339195255ae96ff0559c4b4b2.def("__getitem__", method_pointer_fa8ffef9d03159c58b045010301ebd0e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("__getitem__", autowig::method_decorator_fa8ffef9d03159c58b045010301ebd0e);
    class_1a91c36339195255ae96ff0559c4b4b2.def("__call__", method_pointer_100967dea1985016b5a818cc60cc4bd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("__call__", autowig::method_decorator_100967dea1985016b5a818cc60cc4bd8);
    class_1a91c36339195255ae96ff0559c4b4b2.def("x", method_pointer_eb084d837f055752a8258fa76f350a61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("x", autowig::method_decorator_eb084d837f055752a8258fa76f350a61);
    class_1a91c36339195255ae96ff0559c4b4b2.def("y", method_pointer_ab07ce9b58105a35b463aa812dd936af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("y", autowig::method_decorator_ab07ce9b58105a35b463aa812dd936af);
    class_1a91c36339195255ae96ff0559c4b4b2.def("z", method_pointer_a764f98ae88f5e0f9dcae0a97f78576b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("z", autowig::method_decorator_a764f98ae88f5e0f9dcae0a97f78576b);
    class_1a91c36339195255ae96ff0559c4b4b2.def("w", method_pointer_dda1eb0f69c55d5d80a6d53632f5884f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a91c36339195255ae96ff0559c4b4b2.def("w", autowig::method_decorator_dda1eb0f69c55d5d80a6d53632f5884f);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 > > >();
    }

}