#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6a594263a9e655e6b8f2ab323febba9f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_ef16bb0c880d55739d981e239c836304(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_f76f0eab7c12581f8ded42809d5e5657()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6a594263a9e655e6b8f2ab323febba9f)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_279885356d525ece860d40b755bd5768)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_ef16bb0c880d55739d981e239c836304)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1ef9212c5ce15f4d9ea600d956344d95)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_053fc03df4e258beaf002959306da640)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_46b2e9536d5d55a1b262afc40f2a91f5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b229e2074d905e92871d035589e6719a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_f76f0eab7c12581f8ded42809d5e5657("_EigenBase_f76f0eab7c12581f8ded42809d5e5657", "", boost::python::no_init);
    class_f76f0eab7c12581f8ded42809d5e5657.def("derived", method_pointer_6a594263a9e655e6b8f2ab323febba9f, boost::python::return_internal_reference<>(), "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("derived", autowig::method_decorator_6a594263a9e655e6b8f2ab323febba9f);
    class_f76f0eab7c12581f8ded42809d5e5657.def("derived", method_pointer_279885356d525ece860d40b755bd5768, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("const_cast_derived", method_pointer_ef16bb0c880d55739d981e239c836304, boost::python::return_internal_reference<>(), "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("const_cast_derived", autowig::method_decorator_ef16bb0c880d55739d981e239c836304);
    class_f76f0eab7c12581f8ded42809d5e5657.def("const_derived", method_pointer_1ef9212c5ce15f4d9ea600d956344d95, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("rows", method_pointer_053fc03df4e258beaf002959306da640, "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("cols", method_pointer_46b2e9536d5d55a1b262afc40f2a91f5, "");
    class_f76f0eab7c12581f8ded42809d5e5657.def("size", method_pointer_b229e2074d905e92871d035589e6719a, "");

}