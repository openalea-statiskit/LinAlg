#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c9ab8f4cd8ce56668b9326d36aa36b5c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_7887aa2ef63456059cf93bfedb0f4278)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_39d3ac8a3974524ca4ccdbae941e2b02)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_a430d10f0c4b54da9e6ee6c50d52c6fc)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_bd9a8a09168255f18fdc425f303532f9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_cce436af093d563bb198caf5851af27d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > > > class_c9ab8f4cd8ce56668b9326d36aa36b5c("_DenseCoeffsBase_c9ab8f4cd8ce56668b9326d36aa36b5c", "", boost::python::no_init);
    class_c9ab8f4cd8ce56668b9326d36aa36b5c.def("inner_stride", method_pointer_7887aa2ef63456059cf93bfedb0f4278, "");
    class_c9ab8f4cd8ce56668b9326d36aa36b5c.def("outer_stride", method_pointer_39d3ac8a3974524ca4ccdbae941e2b02, "");
    class_c9ab8f4cd8ce56668b9326d36aa36b5c.def("stride", method_pointer_a430d10f0c4b54da9e6ee6c50d52c6fc, "");
    class_c9ab8f4cd8ce56668b9326d36aa36b5c.def("row_stride", method_pointer_bd9a8a09168255f18fdc425f303532f9, "");
    class_c9ab8f4cd8ce56668b9326d36aa36b5c.def("col_stride", method_pointer_cce436af093d563bb198caf5851af27d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > > >();
    }

}