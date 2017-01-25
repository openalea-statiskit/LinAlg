#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bfbbf3f7d93a5966b19ae0b40a04325d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_6bae4dbb03005f32a5f3283ae762fcaf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_dbd78a35a1e656bf8c8e844f1c485188)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_ce3c8c8c6539542cb09714eb3bcd121a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_7887356d39d3568eb7319b30cb18b6e8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_94ed8943692253c29fbbb7af0900c351)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > > > class_bfbbf3f7d93a5966b19ae0b40a04325d("_DenseCoeffsBase_bfbbf3f7d93a5966b19ae0b40a04325d", "", boost::python::no_init);
    class_bfbbf3f7d93a5966b19ae0b40a04325d.def("inner_stride", method_pointer_6bae4dbb03005f32a5f3283ae762fcaf, "");
    class_bfbbf3f7d93a5966b19ae0b40a04325d.def("outer_stride", method_pointer_dbd78a35a1e656bf8c8e844f1c485188, "");
    class_bfbbf3f7d93a5966b19ae0b40a04325d.def("stride", method_pointer_ce3c8c8c6539542cb09714eb3bcd121a, "");
    class_bfbbf3f7d93a5966b19ae0b40a04325d.def("row_stride", method_pointer_7887356d39d3568eb7319b30cb18b6e8, "");
    class_bfbbf3f7d93a5966b19ae0b40a04325d.def("col_stride", method_pointer_94ed8943692253c29fbbb7af0900c351, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 1 > > >();
    }

}