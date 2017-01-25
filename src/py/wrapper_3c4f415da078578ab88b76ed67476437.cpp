#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9def75381b2d5c6a9002cd2607c1a25a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_28182f1378055786bf91b336d91f9554(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_0fc8c539f83b5be389c23f55b11dc341(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_195397578de857cba8f7ec5d6945ff30(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_77ce5771de55572c83ee6ae0cb6635ad(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_428e122fe15c5dcd99d4b6e4b6155dc1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_a2758bddd2d35df69ef5e6be02a34683(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_5dd06e2626b65a8a8e12e2e742dc5314(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_2b332c287d815f848baa8145f583bb91(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_d2bc3d77d86052a581baeab2f765c5d5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_3c4f415da078578ab88b76ed67476437()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_9def75381b2d5c6a9002cd2607c1a25a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_28182f1378055786bf91b336d91f9554)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_0fc8c539f83b5be389c23f55b11dc341)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_195397578de857cba8f7ec5d6945ff30)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_77ce5771de55572c83ee6ae0cb6635ad)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_428e122fe15c5dcd99d4b6e4b6155dc1)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_a2758bddd2d35df69ef5e6be02a34683)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_5dd06e2626b65a8a8e12e2e742dc5314)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_2b332c287d815f848baa8145f583bb91)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d2bc3d77d86052a581baeab2f765c5d5)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 > > > class_3c4f415da078578ab88b76ed67476437("_DenseCoeffsBase_3c4f415da078578ab88b76ed67476437", "", boost::python::no_init);
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref", method_pointer_9def75381b2d5c6a9002cd2607c1a25a, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref", autowig::method_decorator_9def75381b2d5c6a9002cd2607c1a25a);
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref_by_outer_inner", method_pointer_28182f1378055786bf91b336d91f9554, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref_by_outer_inner", autowig::method_decorator_28182f1378055786bf91b336d91f9554);
    class_3c4f415da078578ab88b76ed67476437.def("__call__", method_pointer_0fc8c539f83b5be389c23f55b11dc341, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("__call__", autowig::method_decorator_0fc8c539f83b5be389c23f55b11dc341);
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref", method_pointer_195397578de857cba8f7ec5d6945ff30, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("coeff_ref", autowig::method_decorator_195397578de857cba8f7ec5d6945ff30);
    class_3c4f415da078578ab88b76ed67476437.def("__getitem__", method_pointer_77ce5771de55572c83ee6ae0cb6635ad, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("__getitem__", autowig::method_decorator_77ce5771de55572c83ee6ae0cb6635ad);
    class_3c4f415da078578ab88b76ed67476437.def("__call__", method_pointer_428e122fe15c5dcd99d4b6e4b6155dc1, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("__call__", autowig::method_decorator_428e122fe15c5dcd99d4b6e4b6155dc1);
    class_3c4f415da078578ab88b76ed67476437.def("x", method_pointer_a2758bddd2d35df69ef5e6be02a34683, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("x", autowig::method_decorator_a2758bddd2d35df69ef5e6be02a34683);
    class_3c4f415da078578ab88b76ed67476437.def("y", method_pointer_5dd06e2626b65a8a8e12e2e742dc5314, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("y", autowig::method_decorator_5dd06e2626b65a8a8e12e2e742dc5314);
    class_3c4f415da078578ab88b76ed67476437.def("z", method_pointer_2b332c287d815f848baa8145f583bb91, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("z", autowig::method_decorator_2b332c287d815f848baa8145f583bb91);
    class_3c4f415da078578ab88b76ed67476437.def("w", method_pointer_d2bc3d77d86052a581baeab2f765c5d5, boost::python::return_internal_reference<>(), "");
    class_3c4f415da078578ab88b76ed67476437.def("w", autowig::method_decorator_d2bc3d77d86052a581baeab2f765c5d5);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 > > >();
    }

}