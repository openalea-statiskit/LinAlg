#include "_ieigen.h"


namespace autowig
{
}


void wrapper_4cff190d1f795775bce74435180cdd53()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 2, 2, 0, 2, 2 >::*method_pointer_8760b317605a5e7c9806a4ae45ebcf5e)() const = &::Eigen::Matrix< double, 2, 2, 0, 2, 2 >::innerStride;
    long int  (::Eigen::Matrix< double, 2, 2, 0, 2, 2 >::*method_pointer_50248aa9b827547eac85541cff28ac88)() const = &::Eigen::Matrix< double, 2, 2, 0, 2, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, autowig::HeldType< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_4cff190d1f795775bce74435180cdd53("_Matrix_4cff190d1f795775bce74435180cdd53", "", boost::python::no_init);
    class_4cff190d1f795775bce74435180cdd53.def("inner_stride", method_pointer_8760b317605a5e7c9806a4ae45ebcf5e, "");
    class_4cff190d1f795775bce74435180cdd53.def("outer_stride", method_pointer_50248aa9b827547eac85541cff28ac88, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >();
    }

}