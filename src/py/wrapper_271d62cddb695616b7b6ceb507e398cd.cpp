#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4d059999ed0f58559b8b7ad7e989c6f0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_a6a71fd4fbd95a0fb5aedf1570c3dfa3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_46b5608a3dfe5105a9e2113cee1f2569(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_8ae317ad1f6e5af48166c63b996b58ad(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_0b28971250aa5667bc9a4ca72b21bf27(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_966eadc1d2645a0d9a4b5ad8b89487c7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_fb059944edc95cdcaf50bbf34a44c955(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.x() = param_out; }
    void method_decorator_f708b0d1f0e55452bd8f38e7d55e7a65(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.y() = param_out; }
    void method_decorator_9841497b79d85f0289c792d653443383(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_99e8d07caf5e5659bcfa0fb155eb460f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.w() = param_out; }
}


void wrapper_271d62cddb695616b7b6ceb507e398cd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_4d059999ed0f58559b8b7ad7e989c6f0)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_a6a71fd4fbd95a0fb5aedf1570c3dfa3)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_46b5608a3dfe5105a9e2113cee1f2569)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_8ae317ad1f6e5af48166c63b996b58ad)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_0b28971250aa5667bc9a4ca72b21bf27)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_966eadc1d2645a0d9a4b5ad8b89487c7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_fb059944edc95cdcaf50bbf34a44c955)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_f708b0d1f0e55452bd8f38e7d55e7a65)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_9841497b79d85f0289c792d653443383)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::z;
// TODO // TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_99e8d07caf5e5659bcfa0fb155eb460f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 > > > class_271d62cddb695616b7b6ceb507e398cd("_DenseCoeffsBase_271d62cddb695616b7b6ceb507e398cd", "", boost::python::no_init);
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref", method_pointer_4d059999ed0f58559b8b7ad7e989c6f0, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref", autowig::method_decorator_4d059999ed0f58559b8b7ad7e989c6f0);
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref_by_outer_inner", method_pointer_a6a71fd4fbd95a0fb5aedf1570c3dfa3, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref_by_outer_inner", autowig::method_decorator_a6a71fd4fbd95a0fb5aedf1570c3dfa3);
    class_271d62cddb695616b7b6ceb507e398cd.def("__call__", method_pointer_46b5608a3dfe5105a9e2113cee1f2569, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("__call__", autowig::method_decorator_46b5608a3dfe5105a9e2113cee1f2569);
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref", method_pointer_8ae317ad1f6e5af48166c63b996b58ad, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("coeff_ref", autowig::method_decorator_8ae317ad1f6e5af48166c63b996b58ad);
    class_271d62cddb695616b7b6ceb507e398cd.def("__getitem__", method_pointer_0b28971250aa5667bc9a4ca72b21bf27, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("__getitem__", autowig::method_decorator_0b28971250aa5667bc9a4ca72b21bf27);
    class_271d62cddb695616b7b6ceb507e398cd.def("__call__", method_pointer_966eadc1d2645a0d9a4b5ad8b89487c7, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("__call__", autowig::method_decorator_966eadc1d2645a0d9a4b5ad8b89487c7);
    class_271d62cddb695616b7b6ceb507e398cd.def("x", method_pointer_fb059944edc95cdcaf50bbf34a44c955, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("x", autowig::method_decorator_fb059944edc95cdcaf50bbf34a44c955);
    class_271d62cddb695616b7b6ceb507e398cd.def("y", method_pointer_f708b0d1f0e55452bd8f38e7d55e7a65, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("y", autowig::method_decorator_f708b0d1f0e55452bd8f38e7d55e7a65);
    class_271d62cddb695616b7b6ceb507e398cd.def("z", method_pointer_9841497b79d85f0289c792d653443383, boost::python::return_internal_reference<>(), "");
    class_271d62cddb695616b7b6ceb507e398cd.def("z", autowig::method_decorator_9841497b79d85f0289c792d653443383);
// TODO // TODO     class_271d62cddb695616b7b6ceb507e398cd.def("w", method_pointer_99e8d07caf5e5659bcfa0fb155eb460f, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_271d62cddb695616b7b6ceb507e398cd.def("w", autowig::method_decorator_99e8d07caf5e5659bcfa0fb155eb460f);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 > > >();
    }

}