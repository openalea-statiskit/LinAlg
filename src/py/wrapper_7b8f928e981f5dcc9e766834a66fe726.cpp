#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7b8f928e981f5dcc9e766834a66fe726()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_13ae7b5c8a185325b19077db2218ff80)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::setZero;
    class ::Eigen::Transpositions< 4, 4, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_6246e07765b55b75859aac2385311e03)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_919a537e16665c8cbba7c57ff06ddc6d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_84664ded17e857e4bd8008eef631c7fc)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_d6d57db87649500fa2c9b6efbb2762a9)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_53b25001708d581fa027a231117f787a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1c1233abbf6f56268d726dcf7fe89062)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_b80cec925ba75d2b95fa5cf3ee3f3ac7)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_2dd5ab0b6165511d9222082be4f276c8)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_79c9cc4ecc545aea8afd27aa6c2dfb9c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_44151c1a9a1650b180faa9fc0a1bad9b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > > > class_7b8f928e981f5dcc9e766834a66fe726("_LDLT_7b8f928e981f5dcc9e766834a66fe726", "", boost::python::no_init);
    class_7b8f928e981f5dcc9e766834a66fe726.def("set_zero", method_pointer_13ae7b5c8a185325b19077db2218ff80, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("transpositions_p", method_pointer_6246e07765b55b75859aac2385311e03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("is_positive", method_pointer_919a537e16665c8cbba7c57ff06ddc6d, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("is_negative", method_pointer_84664ded17e857e4bd8008eef631c7fc, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("rcond", method_pointer_d6d57db87649500fa2c9b6efbb2762a9, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("matrix_ldlt", method_pointer_53b25001708d581fa027a231117f787a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("reconstructed_matrix", method_pointer_1c1233abbf6f56268d726dcf7fe89062, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("adjoint", method_pointer_b80cec925ba75d2b95fa5cf3ee3f3ac7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("rows", method_pointer_2dd5ab0b6165511d9222082be4f276c8, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("cols", method_pointer_79c9cc4ecc545aea8afd27aa6c2dfb9c, "");
    class_7b8f928e981f5dcc9e766834a66fe726.def("info", method_pointer_44151c1a9a1650b180faa9fc0a1bad9b, "");

}