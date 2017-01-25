#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ad073c60522358b3841c5e8f006911f6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >::*method_pointer_eaf2171ce27a58a7b9364fb7bdabef3f)() const = &::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >::*method_pointer_421016eab338576ea31e14990e9ab15b)() const = &::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_ad073c60522358b3841c5e8f006911f6("_Matrix_ad073c60522358b3841c5e8f006911f6", "", boost::python::no_init);
    class_ad073c60522358b3841c5e8f006911f6.def("inner_stride", method_pointer_eaf2171ce27a58a7b9364fb7bdabef3f, "");
    class_ad073c60522358b3841c5e8f006911f6.def("outer_stride", method_pointer_421016eab338576ea31e14990e9ab15b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >();
    }

}