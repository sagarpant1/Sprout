/*=============================================================================
  Copyright (c) 2011-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPROUT_MATH_CONSTANTS_HPP
#define SPROUT_MATH_CONSTANTS_HPP

#include <sprout/config.hpp>

namespace sprout {
	namespace math {
		//
		// pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T pi() {
			return static_cast<T>(3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651L);
		}
		//
		// half_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T half_pi() {
			return static_cast<T>(1.57079632679489661923132169163975144209858469968755291048747229615390820314310449931401741267105853399107404326L);
		}
		//
		// third_pi
		// two_thirds_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T third_pi() {
			return static_cast<T>(1.04719755119659774615421446109316762806572313312503527365831486410260546876206966620934494178070568932738269550L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T two_thirds_pi() {
			return static_cast<T>(2.09439510239319549230842892218633525613144626625007054731662972820521093752413933241868988356141137865476539101L);
		}
		//
		// quarter_pi
		// three_quarters_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T quarter_pi() {
			return static_cast<T>(0.78539816339744830961566084581987572104929234984377645524373614807695410157155224965700870633552926699553702163L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T three_quarters_pi() {
			return static_cast<T>(2.35619449019234492884698253745962716314787704953132936573120844423086230471465674897102611900658780098661106488L);
		}
		//
		// two_pi
		// four_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T two_pi() {
			return static_cast<T>(6.28318530717958647692528676655900576839433879875021164194988918461563281257241799725606965068423413596429617303L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T four_pi() {
			return static_cast<T>(12.56637061435917295385057353311801153678867759750042328389977836923126562514483599451213930136846827192859234606L);
		}
		//
		// two_div_pi
		// root_two_div_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T two_div_pi() {
			return static_cast<T>(0.636619772367581343075535053490057448137838582961825794990669376235587190536906140360455211065012343824291370907L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T root_two_div_pi() {
			return static_cast<T>(0.797884560802865355879892119868763736951717262329869315331851659341315851798603677002504667814613872860605117725L);
		}
		//
		// root_pi
		// one_div_root_pi
		// root_one_div_pi
		// two_div_root_pi
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T root_pi() {
			return static_cast<T>(1.77245385090551602729816748334114518279754945612238712821380778985291128459103218137495065673854466541622682362L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T one_div_root_pi() {
			return static_cast<T>(0.564189583547756286948079451560772585844050629328998856844085721710642468441493414486743660202107363443028347906L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T root_one_div_pi() {
			return static_cast<T>(0.564189583547756286948079451560772585844050629328998856844085721710642468441493414486743660202107363443028347906L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T two_div_root_pi() {
			return static_cast<T>(1.128379167095512573896158903121545171688101258657997713688171443421284936882986828973487320404214726886056695812L);
		}
		//
		// half
		// quarter
		// third
		// two_thirds
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T half() {
			return static_cast<T>(0.5L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T quarter() {
			return static_cast<T>(0.25L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T third() {
			return static_cast<T>(0.33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T two_thirds() {
			return static_cast<T>(0.66666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666L);
		}
		//
		// root_two
		// root_three
		// half_root_two
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T root_two() {
			return static_cast<T>(1.41421356237309504880168872420969807856967187537694807317667973799073247846210703885038753432764157273501384623L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T root_three() {
			return static_cast<T>(1.73205080756887729352744634150587236694280525381038062805580697945193301690880003708114618675724857567562614142L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T half_root_two() {
			return static_cast<T>(0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115L);
		}
		//
		// e
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T e() {
			return static_cast<T>(2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642742746639193L);
		}
		//
		// ln_ten
		// ln_two
		//
		template<typename T>
		inline SPROUT_CONSTEXPR T ln_ten() {
			return static_cast<T>(2.30258509299404568401799145468436420760110148862877297603332790096757260967735248023599720508959829834196778404L);
		}
		template<typename T>
		inline SPROUT_CONSTEXPR T ln_two() {
			return static_cast<T>(0.693147180559945309417232121458176568075500134360255254120680009493393621969694715605863326996418687542001481021L);
		}
	}	// namespace math
}	// namespace sprout

#endif	// #ifndef SPROUT_MATH_CONSTANTS_HPP
