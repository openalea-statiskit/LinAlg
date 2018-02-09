#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile * get_pointer<class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile >(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_918348ff30325fda851c996749185e96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_70527bf5bb695d679efb4042dfead9f6)() const = &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::innerStride;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_bac68aa52de25e2084710766acf939d4)() const = &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::outerStride;
    struct function_group
    {
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_95b1ae3590c45e2aac161ecc01203167(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator+(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_c6ce64eaced45cb9a5bb322d54f9e17d(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator-(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_83174e855feb5e0b999c9b31e753f1b2(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, double const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_401860d2cecb515c8310a336181d69a0(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_19eb7f79d47e5840ba75a003154179fe(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_fb8d31c08aa95954853e293434742330(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, double const & parameter_1)
        { return operator/(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Type, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_918348ff30325fda851c996749185e96("_Matrix_918348ff30325fda851c996749185e96", "", boost::python::no_init);
    class_918348ff30325fda851c996749185e96.def(boost::python::init<  >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< long int const &, long int const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 >, 0 > > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false > const > const, 6 >, class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false >, 0 > > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 2 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 > const > const, 1 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 1 >, class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 0 > > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const > const, 6 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 5 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >(""));
    class_918348ff30325fda851c996749185e96.def("inner_stride", method_pointer_70527bf5bb695d679efb4042dfead9f6, "");
    class_918348ff30325fda851c996749185e96.def("outer_stride", method_pointer_bac68aa52de25e2084710766acf939d4, "");
    class_918348ff30325fda851c996749185e96.def("__add__", function_group::function_95b1ae3590c45e2aac161ecc01203167, "");
    class_918348ff30325fda851c996749185e96.def("__sub__", function_group::function_c6ce64eaced45cb9a5bb322d54f9e17d, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_83174e855feb5e0b999c9b31e753f1b2, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_401860d2cecb515c8310a336181d69a0, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_19eb7f79d47e5840ba75a003154179fe, "");
    class_918348ff30325fda851c996749185e96.def("__div__", function_group::function_fb8d31c08aa95954853e293434742330, "");

    if(autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Type, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
    }

}