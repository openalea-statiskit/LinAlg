#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ebc37f9a0a0955c2af5ff7b8eb597e3d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_992a5b37338a518996cdc00d9ab274ea)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_6372492a49ea5dd39c56c9eaa85a3cd0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b1583c1d34c6530b8e077948ed18ab6f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_249a28e031795ca396fc33a334b68ded)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_222500782b9452048c3533654997ebc1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > > > class_ebc37f9a0a0955c2af5ff7b8eb597e3d("_DenseCoeffsBase_ebc37f9a0a0955c2af5ff7b8eb597e3d", "", boost::python::no_init);
    class_ebc37f9a0a0955c2af5ff7b8eb597e3d.def("inner_stride", method_pointer_992a5b37338a518996cdc00d9ab274ea, "");
    class_ebc37f9a0a0955c2af5ff7b8eb597e3d.def("outer_stride", method_pointer_6372492a49ea5dd39c56c9eaa85a3cd0, "");
    class_ebc37f9a0a0955c2af5ff7b8eb597e3d.def("stride", method_pointer_b1583c1d34c6530b8e077948ed18ab6f, "");
    class_ebc37f9a0a0955c2af5ff7b8eb597e3d.def("row_stride", method_pointer_249a28e031795ca396fc33a334b68ded, "");
    class_ebc37f9a0a0955c2af5ff7b8eb597e3d.def("col_stride", method_pointer_222500782b9452048c3533654997ebc1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > > >();
    }

}