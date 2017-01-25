#include "_ieigen.h"


namespace autowig
{
}


void wrapper_669c7be8306f5d87921f890a7799e5eb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_a100686e8c7353abbb07bbc11c3059b2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_862c806b01af59d1a33fb9ba2f7910f6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_31df100653995ae791191465ed693eb2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_3dd8de1b114458f5a495a54fa394d66e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_fefbdd68600c534796ed693f40b42160)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > > > class_669c7be8306f5d87921f890a7799e5eb("_DenseCoeffsBase_669c7be8306f5d87921f890a7799e5eb", "", boost::python::no_init);
    class_669c7be8306f5d87921f890a7799e5eb.def("inner_stride", method_pointer_a100686e8c7353abbb07bbc11c3059b2, "");
    class_669c7be8306f5d87921f890a7799e5eb.def("outer_stride", method_pointer_862c806b01af59d1a33fb9ba2f7910f6, "");
    class_669c7be8306f5d87921f890a7799e5eb.def("stride", method_pointer_31df100653995ae791191465ed693eb2, "");
    class_669c7be8306f5d87921f890a7799e5eb.def("row_stride", method_pointer_3dd8de1b114458f5a495a54fa394d66e, "");
    class_669c7be8306f5d87921f890a7799e5eb.def("col_stride", method_pointer_fefbdd68600c534796ed693f40b42160, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > > >();
    }

}