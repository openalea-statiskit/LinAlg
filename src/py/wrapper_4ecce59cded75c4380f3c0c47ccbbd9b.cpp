#include "_ieigen.h"


namespace autowig
{
}


void wrapper_4ecce59cded75c4380f3c0c47ccbbd9b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >::*method_pointer_a5f619a57b485d4b873b33cf51aff094)() const = &::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >::*method_pointer_b4a53936d48c567eb5a585116a0937d0)() const = &::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > > class_4ecce59cded75c4380f3c0c47ccbbd9b("_Matrix_4ecce59cded75c4380f3c0c47ccbbd9b", "", boost::python::no_init);
    class_4ecce59cded75c4380f3c0c47ccbbd9b.def("inner_stride", method_pointer_a5f619a57b485d4b873b33cf51aff094, "");
    class_4ecce59cded75c4380f3c0c47ccbbd9b.def("outer_stride", method_pointer_b4a53936d48c567eb5a585116a0937d0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >();
    }

}