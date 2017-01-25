#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fbf37399f1fa54929c85893102f100c5(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_be81e0e1faed5944931a1e9d65adb1fd(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_c91973aa4724563db77c7f274d896cf2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_fbf37399f1fa54929c85893102f100c5)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_0c04d35910895db8b55e8aaef4efeed1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_be81e0e1faed5944931a1e9d65adb1fd)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_7f1d4621b54b5740bd30edde9c11ce3c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c8b3c9420c37578399a7fe7b4bace595)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f65080d9bf305cf0bad4e9924595e5ad)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_925f2c3c23745e018f18eda88eafd44c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_c91973aa4724563db77c7f274d896cf2("_EigenBase_c91973aa4724563db77c7f274d896cf2", "", boost::python::no_init);
    class_c91973aa4724563db77c7f274d896cf2.def("derived", method_pointer_fbf37399f1fa54929c85893102f100c5, boost::python::return_internal_reference<>(), "");
    class_c91973aa4724563db77c7f274d896cf2.def("derived", autowig::method_decorator_fbf37399f1fa54929c85893102f100c5);
    class_c91973aa4724563db77c7f274d896cf2.def("derived", method_pointer_0c04d35910895db8b55e8aaef4efeed1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c91973aa4724563db77c7f274d896cf2.def("const_cast_derived", method_pointer_be81e0e1faed5944931a1e9d65adb1fd, boost::python::return_internal_reference<>(), "");
    class_c91973aa4724563db77c7f274d896cf2.def("const_cast_derived", autowig::method_decorator_be81e0e1faed5944931a1e9d65adb1fd);
    class_c91973aa4724563db77c7f274d896cf2.def("const_derived", method_pointer_7f1d4621b54b5740bd30edde9c11ce3c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c91973aa4724563db77c7f274d896cf2.def("rows", method_pointer_c8b3c9420c37578399a7fe7b4bace595, "");
    class_c91973aa4724563db77c7f274d896cf2.def("cols", method_pointer_f65080d9bf305cf0bad4e9924595e5ad, "");
    class_c91973aa4724563db77c7f274d896cf2.def("size", method_pointer_925f2c3c23745e018f18eda88eafd44c, "");

}