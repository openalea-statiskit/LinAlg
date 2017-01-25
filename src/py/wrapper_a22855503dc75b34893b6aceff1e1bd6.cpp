#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a22855503dc75b34893b6aceff1e1bd6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_3864b40b526a5fbcbd98e83f4d76cbda)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_df04cf557ec25105a8da0e20961aa8e5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_526c4d78d71b5ce491de24f9defa5e1d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_8b51a9dd1750544e8cef6a5d18405714)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_7435ae893a8d5a528703d6acdddcbfa4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > > > class_a22855503dc75b34893b6aceff1e1bd6("_DenseCoeffsBase_a22855503dc75b34893b6aceff1e1bd6", "", boost::python::no_init);
    class_a22855503dc75b34893b6aceff1e1bd6.def("inner_stride", method_pointer_3864b40b526a5fbcbd98e83f4d76cbda, "");
    class_a22855503dc75b34893b6aceff1e1bd6.def("outer_stride", method_pointer_df04cf557ec25105a8da0e20961aa8e5, "");
    class_a22855503dc75b34893b6aceff1e1bd6.def("stride", method_pointer_526c4d78d71b5ce491de24f9defa5e1d, "");
    class_a22855503dc75b34893b6aceff1e1bd6.def("row_stride", method_pointer_8b51a9dd1750544e8cef6a5d18405714, "");
    class_a22855503dc75b34893b6aceff1e1bd6.def("col_stride", method_pointer_7435ae893a8d5a528703d6acdddcbfa4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > > >();
    }

}