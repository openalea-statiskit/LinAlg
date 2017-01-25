#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bbc73d6866dd5582b9df97d228a23581()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_a16cb035ce1b5c7186b9b7bb665c5714)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_b2dd4ed91ad85215baf0938b4aa82b4b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_bedb27b0b7655faba26e9283696553fa)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_667d3d68e1c0569b98d205f93ac1bd6b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_54cf7ccdb49953a2810819fbaf16ca3f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > > > class_bbc73d6866dd5582b9df97d228a23581("_DenseCoeffsBase_bbc73d6866dd5582b9df97d228a23581", "", boost::python::no_init);
    class_bbc73d6866dd5582b9df97d228a23581.def("inner_stride", method_pointer_a16cb035ce1b5c7186b9b7bb665c5714, "");
    class_bbc73d6866dd5582b9df97d228a23581.def("outer_stride", method_pointer_b2dd4ed91ad85215baf0938b4aa82b4b, "");
    class_bbc73d6866dd5582b9df97d228a23581.def("stride", method_pointer_bedb27b0b7655faba26e9283696553fa, "");
    class_bbc73d6866dd5582b9df97d228a23581.def("row_stride", method_pointer_667d3d68e1c0569b98d205f93ac1bd6b, "");
    class_bbc73d6866dd5582b9df97d228a23581.def("col_stride", method_pointer_54cf7ccdb49953a2810819fbaf16ca3f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 1 > > >();
    }

}