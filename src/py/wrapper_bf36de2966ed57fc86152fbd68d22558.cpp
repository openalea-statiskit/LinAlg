#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bf36de2966ed57fc86152fbd68d22558()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_e0470dd408f659eea3fc41bc5d13530c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_d6295419590b5ebc93e722684300f67e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_290426058b1555488107939635751b2d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_1d57422bb3b65f3bbcb0af80fd74b8f6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_bd28ed3a42295ad2af682b92a933ce88)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > > > class_bf36de2966ed57fc86152fbd68d22558("_DenseCoeffsBase_bf36de2966ed57fc86152fbd68d22558", "", boost::python::no_init);
    class_bf36de2966ed57fc86152fbd68d22558.def("inner_stride", method_pointer_e0470dd408f659eea3fc41bc5d13530c, "");
    class_bf36de2966ed57fc86152fbd68d22558.def("outer_stride", method_pointer_d6295419590b5ebc93e722684300f67e, "");
    class_bf36de2966ed57fc86152fbd68d22558.def("stride", method_pointer_290426058b1555488107939635751b2d, "");
    class_bf36de2966ed57fc86152fbd68d22558.def("row_stride", method_pointer_1d57422bb3b65f3bbcb0af80fd74b8f6, "");
    class_bf36de2966ed57fc86152fbd68d22558.def("col_stride", method_pointer_bd28ed3a42295ad2af682b92a933ce88, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > > >();
    }

}