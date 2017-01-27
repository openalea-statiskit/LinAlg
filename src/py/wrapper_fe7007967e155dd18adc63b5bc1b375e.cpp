#include "_ieigen.h"


namespace autowig
{
    void method_decorator_eec187961f27526d9d9cad4d7db970c3(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_e0124842767857e6be53ac421fc80cba(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_fe7007967e155dd18adc63b5bc1b375e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_eec187961f27526d9d9cad4d7db970c3)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_86b2d49c0d8754a6a73e1dc64ea7eaeb)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_e0124842767857e6be53ac421fc80cba)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_933311c611e0560b8a29eadb33f228f0)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_cea5c75b79bf5dc09752f8093a924c78)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_e1543cdd7d735059b174ada91df8bb7a)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_484c8e2429035efdafdeb1715b7ccd4f)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > > class_fe7007967e155dd18adc63b5bc1b375e("_EigenBase_fe7007967e155dd18adc63b5bc1b375e", "", boost::python::no_init);
    class_fe7007967e155dd18adc63b5bc1b375e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_fe7007967e155dd18adc63b5bc1b375e.def("derived", method_pointer_eec187961f27526d9d9cad4d7db970c3, boost::python::return_internal_reference<>(), "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("derived", autowig::method_decorator_eec187961f27526d9d9cad4d7db970c3);
    class_fe7007967e155dd18adc63b5bc1b375e.def("derived", method_pointer_86b2d49c0d8754a6a73e1dc64ea7eaeb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("const_cast_derived", method_pointer_e0124842767857e6be53ac421fc80cba, boost::python::return_internal_reference<>(), "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("const_cast_derived", autowig::method_decorator_e0124842767857e6be53ac421fc80cba);
    class_fe7007967e155dd18adc63b5bc1b375e.def("const_derived", method_pointer_933311c611e0560b8a29eadb33f228f0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("rows", method_pointer_cea5c75b79bf5dc09752f8093a924c78, "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("cols", method_pointer_e1543cdd7d735059b174ada91df8bb7a, "");
    class_fe7007967e155dd18adc63b5bc1b375e.def("size", method_pointer_484c8e2429035efdafdeb1715b7ccd4f, "");

}