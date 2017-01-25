#include "_ieigen.h"


namespace autowig
{
}


void wrapper_93a8fe8a8e495cc398ab168646db1d34()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_1b9afe660f1a5eef87748c6540d4448e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_f38381481e315d62be52cfa641193c65)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_f4ba78ab4c2b520aa666fa4fbfab9a55)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_daa92b437a1c546d82162d386d9937f0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_d84155240fbc5f509f5a70c68ff2e84d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > > > class_93a8fe8a8e495cc398ab168646db1d34("_DenseCoeffsBase_93a8fe8a8e495cc398ab168646db1d34", "", boost::python::no_init);
    class_93a8fe8a8e495cc398ab168646db1d34.def("inner_stride", method_pointer_1b9afe660f1a5eef87748c6540d4448e, "");
    class_93a8fe8a8e495cc398ab168646db1d34.def("outer_stride", method_pointer_f38381481e315d62be52cfa641193c65, "");
    class_93a8fe8a8e495cc398ab168646db1d34.def("stride", method_pointer_f4ba78ab4c2b520aa666fa4fbfab9a55, "");
    class_93a8fe8a8e495cc398ab168646db1d34.def("row_stride", method_pointer_daa92b437a1c546d82162d386d9937f0, "");
    class_93a8fe8a8e495cc398ab168646db1d34.def("col_stride", method_pointer_d84155240fbc5f509f5a70c68ff2e84d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > > >();
    }

}