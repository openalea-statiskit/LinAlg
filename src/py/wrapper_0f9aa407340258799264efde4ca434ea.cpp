#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0f9aa407340258799264efde4ca434ea()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_9ac83a30f195531684871aed6d85111a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_e7bf259834815673aa12c1c8d3d1616f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_2bff34546b2c59b8905128bb09cc0e5a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_2ff3f74e64255439b4666ad21e336c25)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_dc09b41a01c551a6b2aca7b0849f6cb5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > > > class_0f9aa407340258799264efde4ca434ea("_DenseCoeffsBase_0f9aa407340258799264efde4ca434ea", "", boost::python::no_init);
    class_0f9aa407340258799264efde4ca434ea.def("inner_stride", method_pointer_9ac83a30f195531684871aed6d85111a, "");
    class_0f9aa407340258799264efde4ca434ea.def("outer_stride", method_pointer_e7bf259834815673aa12c1c8d3d1616f, "");
    class_0f9aa407340258799264efde4ca434ea.def("stride", method_pointer_2bff34546b2c59b8905128bb09cc0e5a, "");
    class_0f9aa407340258799264efde4ca434ea.def("row_stride", method_pointer_2ff3f74e64255439b4666ad21e336c25, "");
    class_0f9aa407340258799264efde4ca434ea.def("col_stride", method_pointer_dc09b41a01c551a6b2aca7b0849f6cb5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > > >();
    }

}