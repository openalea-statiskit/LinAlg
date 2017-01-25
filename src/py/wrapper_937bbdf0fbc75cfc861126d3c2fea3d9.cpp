#include "_ieigen.h"


namespace autowig
{
}


void wrapper_937bbdf0fbc75cfc861126d3c2fea3d9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_9037db6fe656557cb0b0c514f2ac6f14)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_de3ee26c74af5c8fb7dfbc9e4d7b2287)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_2ef8db719d1c55129cc9df57d76da5af)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_6528563bb85f5cf3ba55c44be8a0c108)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_45ea084c3f6d55ad870adc33422cf78b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > > > class_937bbdf0fbc75cfc861126d3c2fea3d9("_DenseCoeffsBase_937bbdf0fbc75cfc861126d3c2fea3d9", "", boost::python::no_init);
    class_937bbdf0fbc75cfc861126d3c2fea3d9.def("inner_stride", method_pointer_9037db6fe656557cb0b0c514f2ac6f14, "");
    class_937bbdf0fbc75cfc861126d3c2fea3d9.def("outer_stride", method_pointer_de3ee26c74af5c8fb7dfbc9e4d7b2287, "");
    class_937bbdf0fbc75cfc861126d3c2fea3d9.def("stride", method_pointer_2ef8db719d1c55129cc9df57d76da5af, "");
    class_937bbdf0fbc75cfc861126d3c2fea3d9.def("row_stride", method_pointer_6528563bb85f5cf3ba55c44be8a0c108, "");
    class_937bbdf0fbc75cfc861126d3c2fea3d9.def("col_stride", method_pointer_45ea084c3f6d55ad870adc33422cf78b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > > >();
    }

}