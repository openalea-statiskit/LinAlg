#include "_ieigen.h"


namespace autowig
{
    void method_decorator_63710319793052c1baff215a9d58abe9(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_4bb59af2a9f754518f2b3a0f5a7a82e7(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_750fecfa6c98507b91dd87ca4a9de308(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_2ce9c16568a95eaab6a170d5009281b5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_63710319793052c1baff215a9d58abe9)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_2812264062ca5b219a0d962da4b35d08)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_08d595ad055f504eaaea1e97b4ea40cf)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_5fc1f0013e2454f59e3b19a42948ac96)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_fc0b6cd5bb8d5b298000b7b01bf0d6c0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_c8667108040955fba11c82267e6f4c52)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_93b96236d71b5219bc0a224cc46de4ae)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_4bb59af2a9f754518f2b3a0f5a7a82e7)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_750fecfa6c98507b91dd87ca4a9de308)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_dce8940bcdc35b86be6afe376b77d6a9)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_9c6f108e9e925a3fb4a811b2ad21bbfa)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_831d12d38ffd51868b113598d41417b1)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_de6bb2dfcf9c5ef9aed9df1d6b585003)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_7ce0be5fc1135471a50b2c166d519460)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > > > class_2ce9c16568a95eaab6a170d5009281b5("_SVDBase_2ce9c16568a95eaab6a170d5009281b5", "", boost::python::no_init);
    class_2ce9c16568a95eaab6a170d5009281b5.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >  const & >(""));
    class_2ce9c16568a95eaab6a170d5009281b5.def("derived", method_pointer_63710319793052c1baff215a9d58abe9, boost::python::return_internal_reference<>(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("derived", autowig::method_decorator_63710319793052c1baff215a9d58abe9);
    class_2ce9c16568a95eaab6a170d5009281b5.def("derived", method_pointer_2812264062ca5b219a0d962da4b35d08, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("matrix_u", method_pointer_08d595ad055f504eaaea1e97b4ea40cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("matrix_v", method_pointer_5fc1f0013e2454f59e3b19a42948ac96, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("singular_values", method_pointer_fc0b6cd5bb8d5b298000b7b01bf0d6c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("nonzero_singular_values", method_pointer_c8667108040955fba11c82267e6f4c52, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("rank", method_pointer_93b96236d71b5219bc0a224cc46de4ae, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("set_threshold", method_pointer_4bb59af2a9f754518f2b3a0f5a7a82e7, boost::python::return_internal_reference<>(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("set_threshold", autowig::method_decorator_4bb59af2a9f754518f2b3a0f5a7a82e7);
    class_2ce9c16568a95eaab6a170d5009281b5.def("set_threshold", method_pointer_750fecfa6c98507b91dd87ca4a9de308, boost::python::return_internal_reference<>(), "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("set_threshold", autowig::method_decorator_750fecfa6c98507b91dd87ca4a9de308);
    class_2ce9c16568a95eaab6a170d5009281b5.def("threshold", method_pointer_dce8940bcdc35b86be6afe376b77d6a9, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("compute_u", method_pointer_9c6f108e9e925a3fb4a811b2ad21bbfa, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("compute_v", method_pointer_831d12d38ffd51868b113598d41417b1, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("rows", method_pointer_de6bb2dfcf9c5ef9aed9df1d6b585003, "");
    class_2ce9c16568a95eaab6a170d5009281b5.def("cols", method_pointer_7ce0be5fc1135471a50b2c166d519460, "");

}