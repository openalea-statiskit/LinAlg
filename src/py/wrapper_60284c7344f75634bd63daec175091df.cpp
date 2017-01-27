#include "_ieigen.h"


namespace autowig
{
}


void wrapper_60284c7344f75634bd63daec175091df()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >::*method_pointer_a1add1d1ac86575694130f610f513657)() const = &::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >::*method_pointer_1366b76cce3a5cec9bebc2aa5c8ef9c5)() const = &::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_60284c7344f75634bd63daec175091df("_Matrix_60284c7344f75634bd63daec175091df", "", boost::python::no_init);
    class_60284c7344f75634bd63daec175091df.def(boost::python::init<  >(""));
    class_60284c7344f75634bd63daec175091df.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_60284c7344f75634bd63daec175091df.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & >(""));
    class_60284c7344f75634bd63daec175091df.def("inner_stride", method_pointer_a1add1d1ac86575694130f610f513657, "");
    class_60284c7344f75634bd63daec175091df.def("outer_stride", method_pointer_1366b76cce3a5cec9bebc2aa5c8ef9c5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >();
    }

}