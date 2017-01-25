#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a12ebfbdb5325cefa2e98c5172e3f390()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_0eb097d755e15fe1aef04a958b07fd18)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_4b9e05ffad4d5b848239ef041e57671c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_1c85b098103252129929709fb3a4aa0a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_2f528f94e85d575caac463531208d8ca)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_8b8b61f62e78560bbfdc84ff7b77e179)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > > > class_a12ebfbdb5325cefa2e98c5172e3f390("_DenseCoeffsBase_a12ebfbdb5325cefa2e98c5172e3f390", "", boost::python::no_init);
    class_a12ebfbdb5325cefa2e98c5172e3f390.def("inner_stride", method_pointer_0eb097d755e15fe1aef04a958b07fd18, "");
    class_a12ebfbdb5325cefa2e98c5172e3f390.def("outer_stride", method_pointer_4b9e05ffad4d5b848239ef041e57671c, "");
    class_a12ebfbdb5325cefa2e98c5172e3f390.def("stride", method_pointer_1c85b098103252129929709fb3a4aa0a, "");
    class_a12ebfbdb5325cefa2e98c5172e3f390.def("row_stride", method_pointer_2f528f94e85d575caac463531208d8ca, "");
    class_a12ebfbdb5325cefa2e98c5172e3f390.def("col_stride", method_pointer_8b8b61f62e78560bbfdc84ff7b77e179, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > > >();
    }

}