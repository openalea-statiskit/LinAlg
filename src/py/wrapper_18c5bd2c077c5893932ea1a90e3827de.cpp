#include "_ieigen.h"


namespace autowig
{
}


void wrapper_18c5bd2c077c5893932ea1a90e3827de()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_0fffd9da55fa587ba1f9d8916992d1e3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_75c88d864999504fa15dfc72aeb2780a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_5aca1bd4a0c8577b83f49dd995ae2172)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_9d96dd6122cf5b87a20cc8ce00132896)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_b264e44f950d573aad34953639fda1f4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > > > class_18c5bd2c077c5893932ea1a90e3827de("_DenseCoeffsBase_18c5bd2c077c5893932ea1a90e3827de", "", boost::python::no_init);
    class_18c5bd2c077c5893932ea1a90e3827de.def("inner_stride", method_pointer_0fffd9da55fa587ba1f9d8916992d1e3, "");
    class_18c5bd2c077c5893932ea1a90e3827de.def("outer_stride", method_pointer_75c88d864999504fa15dfc72aeb2780a, "");
    class_18c5bd2c077c5893932ea1a90e3827de.def("stride", method_pointer_5aca1bd4a0c8577b83f49dd995ae2172, "");
    class_18c5bd2c077c5893932ea1a90e3827de.def("row_stride", method_pointer_9d96dd6122cf5b87a20cc8ce00132896, "");
    class_18c5bd2c077c5893932ea1a90e3827de.def("col_stride", method_pointer_b264e44f950d573aad34953639fda1f4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > > >();
    }

}