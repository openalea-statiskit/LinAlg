#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f2f97ec39aae5b15939049d0cd4415c7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_ca802dce4d165ebb92afcc074ec4ff23)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_cab904058c4651bbba1ff8b436b2e9f4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_036f9def823450e3aa9fd17eca61e8e7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_71bee31c946d57bd8ae0a3a953bab4f9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_e4267ffc24c35c249f092c70fe5faaae)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > > > class_f2f97ec39aae5b15939049d0cd4415c7("_DenseCoeffsBase_f2f97ec39aae5b15939049d0cd4415c7", "", boost::python::no_init);
    class_f2f97ec39aae5b15939049d0cd4415c7.def("inner_stride", method_pointer_ca802dce4d165ebb92afcc074ec4ff23, "");
    class_f2f97ec39aae5b15939049d0cd4415c7.def("outer_stride", method_pointer_cab904058c4651bbba1ff8b436b2e9f4, "");
    class_f2f97ec39aae5b15939049d0cd4415c7.def("stride", method_pointer_036f9def823450e3aa9fd17eca61e8e7, "");
    class_f2f97ec39aae5b15939049d0cd4415c7.def("row_stride", method_pointer_71bee31c946d57bd8ae0a3a953bab4f9, "");
    class_f2f97ec39aae5b15939049d0cd4415c7.def("col_stride", method_pointer_e4267ffc24c35c249f092c70fe5faaae, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > > >();
    }

}