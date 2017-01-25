#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c9a0cc6e20505285a47bf78dac9304f2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_2bdb19717e60573e83c6e3b3264345db)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_106bcdfae84255be80d0deb7bd9df263)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_ca6971f7f35d5645a8c63a3ab8651c97)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_bcdbeb3b10c0519bbace8bd1aec64b23)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_535bf8e896855409ae323c0c4c149320)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > > > class_c9a0cc6e20505285a47bf78dac9304f2("_DenseCoeffsBase_c9a0cc6e20505285a47bf78dac9304f2", "", boost::python::no_init);
    class_c9a0cc6e20505285a47bf78dac9304f2.def("inner_stride", method_pointer_2bdb19717e60573e83c6e3b3264345db, "");
    class_c9a0cc6e20505285a47bf78dac9304f2.def("outer_stride", method_pointer_106bcdfae84255be80d0deb7bd9df263, "");
    class_c9a0cc6e20505285a47bf78dac9304f2.def("stride", method_pointer_ca6971f7f35d5645a8c63a3ab8651c97, "");
    class_c9a0cc6e20505285a47bf78dac9304f2.def("row_stride", method_pointer_bcdbeb3b10c0519bbace8bd1aec64b23, "");
    class_c9a0cc6e20505285a47bf78dac9304f2.def("col_stride", method_pointer_535bf8e896855409ae323c0c4c149320, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > > >();
    }

}