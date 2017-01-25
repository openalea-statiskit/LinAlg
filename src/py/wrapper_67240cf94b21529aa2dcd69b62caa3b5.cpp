#include "_ieigen.h"


namespace autowig
{
}


void wrapper_67240cf94b21529aa2dcd69b62caa3b5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_f01480b43fb25bd58fe60005aa926eb6)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_e706d33ccc6d55b8ba76de31dfe01e83)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_304036080ace56149342cd23d443084d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_e327833ff3b550a48bd17458f6e23ca8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_077660bd75fc521abe68183b49ac1483)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_6d460abc51d959e4b4928a8519dc22ef)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_64bfa91f52e754f889979e72c34c688e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_401e63e8739151a4bcdd94ada8be9edc)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_aec1d73838835614b79d7d7d42d23e17)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_69bb26ae512650a7885802584e35dd39)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_d656c99316875b8aa7c94784a3eee36e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_6cdb5dbfaeca5d349391bd80eb585403)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > > class_67240cf94b21529aa2dcd69b62caa3b5("_DenseCoeffsBase_67240cf94b21529aa2dcd69b62caa3b5", "", boost::python::no_init);
    class_67240cf94b21529aa2dcd69b62caa3b5.def("row_index_by_outer_inner", method_pointer_f01480b43fb25bd58fe60005aa926eb6, "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("col_index_by_outer_inner", method_pointer_e706d33ccc6d55b8ba76de31dfe01e83, "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("coeff", method_pointer_304036080ace56149342cd23d443084d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("coeff_by_outer_inner", method_pointer_e327833ff3b550a48bd17458f6e23ca8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("__call__", method_pointer_077660bd75fc521abe68183b49ac1483, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("coeff", method_pointer_6d460abc51d959e4b4928a8519dc22ef, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("__getitem__", method_pointer_64bfa91f52e754f889979e72c34c688e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("__call__", method_pointer_401e63e8739151a4bcdd94ada8be9edc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("x", method_pointer_aec1d73838835614b79d7d7d42d23e17, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("y", method_pointer_69bb26ae512650a7885802584e35dd39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("z", method_pointer_d656c99316875b8aa7c94784a3eee36e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67240cf94b21529aa2dcd69b62caa3b5.def("w", method_pointer_6cdb5dbfaeca5d349391bd80eb585403, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >();
    }

}