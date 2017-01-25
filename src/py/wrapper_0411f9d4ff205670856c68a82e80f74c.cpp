#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0411f9d4ff205670856c68a82e80f74c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_792528e5da8f58e6960cee3abc7d94ce)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_e7024103814b58598b1bff2b7194a749)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_05b23eb31dd45ae6a31275aba8606048)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_28132dd1fc31521ea848f9e5efe66671)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_1cecc6047aed5e3c94ff7a915559deff)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > > > class_0411f9d4ff205670856c68a82e80f74c("_DenseCoeffsBase_0411f9d4ff205670856c68a82e80f74c", "", boost::python::no_init);
    class_0411f9d4ff205670856c68a82e80f74c.def("inner_stride", method_pointer_792528e5da8f58e6960cee3abc7d94ce, "");
    class_0411f9d4ff205670856c68a82e80f74c.def("outer_stride", method_pointer_e7024103814b58598b1bff2b7194a749, "");
    class_0411f9d4ff205670856c68a82e80f74c.def("stride", method_pointer_05b23eb31dd45ae6a31275aba8606048, "");
    class_0411f9d4ff205670856c68a82e80f74c.def("row_stride", method_pointer_28132dd1fc31521ea848f9e5efe66671, "");
    class_0411f9d4ff205670856c68a82e80f74c.def("col_stride", method_pointer_1cecc6047aed5e3c94ff7a915559deff, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > > >();
    }

}