#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ec49e591c54354cc8ae3994cc30e9669()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_be27c54410b45f8d965960f40b172030)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_8d350b632db550dc9216b65b5589014d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_1fc7e4e4401c5d95a45070cb8728c835)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_c8c7b2fcd3295545ad731d24311fe46d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_f1efd5fe7e315617abbf27ca60cf437c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > > > class_ec49e591c54354cc8ae3994cc30e9669("_DenseCoeffsBase_ec49e591c54354cc8ae3994cc30e9669", "", boost::python::no_init);
    class_ec49e591c54354cc8ae3994cc30e9669.def("inner_stride", method_pointer_be27c54410b45f8d965960f40b172030, "");
    class_ec49e591c54354cc8ae3994cc30e9669.def("outer_stride", method_pointer_8d350b632db550dc9216b65b5589014d, "");
    class_ec49e591c54354cc8ae3994cc30e9669.def("stride", method_pointer_1fc7e4e4401c5d95a45070cb8728c835, "");
    class_ec49e591c54354cc8ae3994cc30e9669.def("row_stride", method_pointer_c8c7b2fcd3295545ad731d24311fe46d, "");
    class_ec49e591c54354cc8ae3994cc30e9669.def("col_stride", method_pointer_f1efd5fe7e315617abbf27ca60cf437c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > > >();
    }

}