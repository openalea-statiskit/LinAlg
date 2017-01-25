#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8b5b23c3c3c85912861136dc7a46d3b6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_60ef1b3b32875305a54f8532907667ef)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_b1107bcbddfd59edb0e37a31d5d0ee6c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_301d079c13485be59d5f1af09b3b19c3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_6f652573aa875b26918ecd5ef59e87d9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_20042126e8cb5034894276f048c0d1c1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > > > class_8b5b23c3c3c85912861136dc7a46d3b6("_DenseCoeffsBase_8b5b23c3c3c85912861136dc7a46d3b6", "", boost::python::no_init);
    class_8b5b23c3c3c85912861136dc7a46d3b6.def("inner_stride", method_pointer_60ef1b3b32875305a54f8532907667ef, "");
    class_8b5b23c3c3c85912861136dc7a46d3b6.def("outer_stride", method_pointer_b1107bcbddfd59edb0e37a31d5d0ee6c, "");
    class_8b5b23c3c3c85912861136dc7a46d3b6.def("stride", method_pointer_301d079c13485be59d5f1af09b3b19c3, "");
    class_8b5b23c3c3c85912861136dc7a46d3b6.def("row_stride", method_pointer_6f652573aa875b26918ecd5ef59e87d9, "");
    class_8b5b23c3c3c85912861136dc7a46d3b6.def("col_stride", method_pointer_20042126e8cb5034894276f048c0d1c1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > > >();
    }

}