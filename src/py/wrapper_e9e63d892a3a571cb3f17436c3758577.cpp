#include "_ieigen.h"


namespace autowig
{
    void method_decorator_06e59a4dde495c4d8da2222be9d29a9d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_4dbd43ae83625a6b93e0f4b18e51bfbf(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_e9e63d892a3a571cb3f17436c3758577()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_06e59a4dde495c4d8da2222be9d29a9d)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_9e21dcd83b1c546db618ccb46c7a44a1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_4dbd43ae83625a6b93e0f4b18e51bfbf)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_21d80c1a5ae4567c8ac159b68125f986)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a4029ae8dce35a90b570d81f646fbff4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_eb567eb1109852f8b7b79b7aa5a69886)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_6252ae972e175138806c10af886e603e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_e9e63d892a3a571cb3f17436c3758577("_EigenBase_e9e63d892a3a571cb3f17436c3758577", "", boost::python::no_init);
    class_e9e63d892a3a571cb3f17436c3758577.def("derived", method_pointer_06e59a4dde495c4d8da2222be9d29a9d, boost::python::return_internal_reference<>(), "");
    class_e9e63d892a3a571cb3f17436c3758577.def("derived", autowig::method_decorator_06e59a4dde495c4d8da2222be9d29a9d);
    class_e9e63d892a3a571cb3f17436c3758577.def("derived", method_pointer_9e21dcd83b1c546db618ccb46c7a44a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e9e63d892a3a571cb3f17436c3758577.def("const_cast_derived", method_pointer_4dbd43ae83625a6b93e0f4b18e51bfbf, boost::python::return_internal_reference<>(), "");
    class_e9e63d892a3a571cb3f17436c3758577.def("const_cast_derived", autowig::method_decorator_4dbd43ae83625a6b93e0f4b18e51bfbf);
    class_e9e63d892a3a571cb3f17436c3758577.def("const_derived", method_pointer_21d80c1a5ae4567c8ac159b68125f986, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e9e63d892a3a571cb3f17436c3758577.def("rows", method_pointer_a4029ae8dce35a90b570d81f646fbff4, "");
    class_e9e63d892a3a571cb3f17436c3758577.def("cols", method_pointer_eb567eb1109852f8b7b79b7aa5a69886, "");
    class_e9e63d892a3a571cb3f17436c3758577.def("size", method_pointer_6252ae972e175138806c10af886e603e, "");

}