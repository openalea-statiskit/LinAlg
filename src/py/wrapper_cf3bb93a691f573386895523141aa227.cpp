#include "_ieigen.h"


namespace autowig
{
}


void wrapper_cf3bb93a691f573386895523141aa227()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_42a03316f3425948890c716a362b7fe3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_50d6b5a02e045c82a4c7400820d840eb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_75467c3144035c03becd1d0c1dc903bf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_ec547f27f4b559028f414182f6070c15)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_f0f3e67a368d58bbbd797e7864819d40)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > > > class_cf3bb93a691f573386895523141aa227("_DenseCoeffsBase_cf3bb93a691f573386895523141aa227", "", boost::python::no_init);
    class_cf3bb93a691f573386895523141aa227.def("inner_stride", method_pointer_42a03316f3425948890c716a362b7fe3, "");
    class_cf3bb93a691f573386895523141aa227.def("outer_stride", method_pointer_50d6b5a02e045c82a4c7400820d840eb, "");
    class_cf3bb93a691f573386895523141aa227.def("stride", method_pointer_75467c3144035c03becd1d0c1dc903bf, "");
    class_cf3bb93a691f573386895523141aa227.def("row_stride", method_pointer_ec547f27f4b559028f414182f6070c15, "");
    class_cf3bb93a691f573386895523141aa227.def("col_stride", method_pointer_f0f3e67a368d58bbbd797e7864819d40, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > > >();
    }

}