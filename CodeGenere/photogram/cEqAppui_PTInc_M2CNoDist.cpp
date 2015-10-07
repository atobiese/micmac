// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PTInc_M2CNoDist.h"


cEqAppui_PTInc_M2CNoDist::cEqAppui_PTInc_M2CNoDist():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,3));
   AddIntRef (cIncIntervale("Orient",3,9));
   AddIntRef (cIncIntervale("Tmp_PTer",9,12));
   Close(false);
}



void cEqAppui_PTInc_M2CNoDist::ComputeVal()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mCompCoord[4];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[5];
   double tmp7_ = mCompCoord[9];
   double tmp8_ = mCompCoord[6];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[10];
   double tmp15_ = mCompCoord[7];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[11];
   double tmp18_ = mCompCoord[8];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp4_*tmp12_;
   double tmp22_ = tmp3_*tmp12_;
   double tmp23_ = mCompCoord[0];
   double tmp24_ = tmp20_*tmp11_;
   double tmp25_ = tmp21_*tmp13_;
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = (tmp26_)*(tmp9_);
   double tmp28_ = tmp4_*tmp11_;
   double tmp29_ = tmp22_*tmp13_;
   double tmp30_ = tmp28_+tmp29_;
   double tmp31_ = (tmp30_)*(tmp16_);
   double tmp32_ = tmp27_+tmp31_;
   double tmp33_ = tmp2_*tmp13_;
   double tmp34_ = tmp33_*(tmp19_);
   double tmp35_ = tmp32_+tmp34_;
   double tmp36_ = tmp23_/(tmp35_);

  mVal[0] = (((tmp4_*tmp2_*(tmp9_)+tmp3_*tmp2_*(tmp16_)+tmp5_*(tmp19_))*(tmp36_)+mCompCoord[1])-mLocXIm)*mLocScNorm;

  mVal[1] = ((((tmp20_*tmp13_+tmp21_*tmp10_)*(tmp9_)+(tmp4_*tmp13_+tmp22_*tmp10_)*(tmp16_)+tmp2_*tmp10_*(tmp19_))*(tmp36_)+mCompCoord[2])-mLocYIm)*mLocScNorm;

}


void cEqAppui_PTInc_M2CNoDist::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mCompCoord[4];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[5];
   double tmp7_ = mCompCoord[9];
   double tmp8_ = mCompCoord[6];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[10];
   double tmp15_ = mCompCoord[7];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[11];
   double tmp18_ = mCompCoord[8];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp20_*tmp11_;
   double tmp22_ = tmp4_*tmp12_;
   double tmp23_ = tmp22_*tmp13_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = (tmp24_)*(tmp9_);
   double tmp26_ = tmp4_*tmp11_;
   double tmp27_ = tmp3_*tmp12_;
   double tmp28_ = tmp27_*tmp13_;
   double tmp29_ = tmp26_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp16_);
   double tmp31_ = tmp25_+tmp30_;
   double tmp32_ = tmp2_*tmp13_;
   double tmp33_ = tmp32_*(tmp19_);
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = tmp4_*tmp2_;
   double tmp36_ = tmp35_*(tmp9_);
   double tmp37_ = tmp3_*tmp2_;
   double tmp38_ = tmp37_*(tmp16_);
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp5_*(tmp19_);
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = mCompCoord[0];
   double tmp43_ = tmp42_/(tmp34_);
   double tmp44_ = -(1);
   double tmp45_ = tmp44_*tmp3_;
   double tmp46_ = ElSquare(tmp34_);
   double tmp47_ = tmp44_*tmp5_;
   double tmp48_ = -(tmp2_);
   double tmp49_ = -(tmp13_);
   double tmp50_ = tmp44_*tmp10_;
   double tmp51_ = (tmp34_)/tmp46_;
   double tmp52_ = tmp20_*tmp13_;
   double tmp53_ = tmp22_*tmp10_;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = (tmp54_)*(tmp9_);
   double tmp56_ = tmp4_*tmp13_;
   double tmp57_ = tmp27_*tmp10_;
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = (tmp58_)*(tmp16_);
   double tmp60_ = tmp55_+tmp59_;
   double tmp61_ = tmp2_*tmp10_;
   double tmp62_ = tmp61_*(tmp19_);
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = -(tmp4_);
   double tmp65_ = tmp45_*tmp12_;
   double tmp66_ = tmp64_*tmp11_;
   double tmp67_ = tmp65_*tmp13_;
   double tmp68_ = tmp66_+tmp67_;
   double tmp69_ = (tmp68_)*(tmp9_);
   double tmp70_ = tmp45_*tmp11_;
   double tmp71_ = tmp70_+tmp23_;
   double tmp72_ = (tmp71_)*(tmp16_);
   double tmp73_ = tmp69_+tmp72_;
   double tmp74_ = tmp42_*(tmp73_);
   double tmp75_ = -(tmp74_);
   double tmp76_ = tmp75_/tmp46_;
   double tmp77_ = tmp48_*tmp4_;
   double tmp78_ = tmp48_*tmp3_;
   double tmp79_ = tmp77_*tmp13_;
   double tmp80_ = tmp79_*(tmp9_);
   double tmp81_ = tmp78_*tmp13_;
   double tmp82_ = tmp81_*(tmp16_);
   double tmp83_ = tmp80_+tmp82_;
   double tmp84_ = tmp47_*tmp13_;
   double tmp85_ = tmp84_*(tmp19_);
   double tmp86_ = tmp83_+tmp85_;
   double tmp87_ = tmp42_*(tmp86_);
   double tmp88_ = -(tmp87_);
   double tmp89_ = tmp88_/tmp46_;
   double tmp90_ = tmp49_*tmp20_;
   double tmp91_ = tmp50_*tmp22_;
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = (tmp92_)*(tmp9_);
   double tmp94_ = tmp49_*tmp4_;
   double tmp95_ = tmp50_*tmp27_;
   double tmp96_ = tmp94_+tmp95_;
   double tmp97_ = (tmp96_)*(tmp16_);
   double tmp98_ = tmp93_+tmp97_;
   double tmp99_ = tmp50_*tmp2_;
   double tmp100_ = tmp99_*(tmp19_);
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp42_*(tmp101_);
   double tmp103_ = -(tmp102_);
   double tmp104_ = tmp103_/tmp46_;
   double tmp105_ = tmp44_*(tmp24_);
   double tmp106_ = tmp42_*tmp105_;
   double tmp107_ = -(tmp106_);
   double tmp108_ = tmp107_/tmp46_;
   double tmp109_ = tmp44_*(tmp29_);
   double tmp110_ = tmp42_*tmp109_;
   double tmp111_ = -(tmp110_);
   double tmp112_ = tmp111_/tmp46_;
   double tmp113_ = tmp44_*tmp32_;
   double tmp114_ = tmp42_*tmp113_;
   double tmp115_ = -(tmp114_);
   double tmp116_ = tmp115_/tmp46_;
   double tmp117_ = tmp42_*(tmp24_);
   double tmp118_ = -(tmp117_);
   double tmp119_ = tmp118_/tmp46_;
   double tmp120_ = tmp42_*(tmp29_);
   double tmp121_ = -(tmp120_);
   double tmp122_ = tmp121_/tmp46_;
   double tmp123_ = tmp42_*tmp32_;
   double tmp124_ = -(tmp123_);
   double tmp125_ = tmp124_/tmp46_;

  mVal[0] = (((tmp41_)*(tmp43_)+mCompCoord[1])-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (tmp51_)*(tmp41_)*mLocScNorm;
  mCompDer[0][1] = mLocScNorm;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = ((tmp45_*tmp2_*(tmp9_)+tmp35_*(tmp16_))*(tmp43_)+(tmp76_)*(tmp41_))*mLocScNorm;
  mCompDer[0][4] = ((tmp47_*tmp4_*(tmp9_)+tmp47_*tmp3_*(tmp16_)+tmp2_*(tmp19_))*(tmp43_)+(tmp89_)*(tmp41_))*mLocScNorm;
  mCompDer[0][5] = (tmp104_)*(tmp41_)*mLocScNorm;
  mCompDer[0][6] = (tmp44_*tmp35_*(tmp43_)+(tmp108_)*(tmp41_))*mLocScNorm;
  mCompDer[0][7] = (tmp44_*tmp37_*(tmp43_)+(tmp112_)*(tmp41_))*mLocScNorm;
  mCompDer[0][8] = (tmp47_*(tmp43_)+(tmp116_)*(tmp41_))*mLocScNorm;
  mCompDer[0][9] = (tmp35_*(tmp43_)+(tmp119_)*(tmp41_))*mLocScNorm;
  mCompDer[0][10] = (tmp37_*(tmp43_)+(tmp122_)*(tmp41_))*mLocScNorm;
  mCompDer[0][11] = (tmp5_*(tmp43_)+(tmp125_)*(tmp41_))*mLocScNorm;
  mVal[1] = (((tmp63_)*(tmp43_)+mCompCoord[2])-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (tmp51_)*(tmp63_)*mLocScNorm;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = mLocScNorm;
  mCompDer[1][3] = (((tmp64_*tmp13_+tmp65_*tmp10_)*(tmp9_)+(tmp45_*tmp13_+tmp53_)*(tmp16_))*(tmp43_)+(tmp76_)*(tmp63_))*mLocScNorm;
  mCompDer[1][4] = ((tmp77_*tmp10_*(tmp9_)+tmp78_*tmp10_*(tmp16_)+tmp47_*tmp10_*(tmp19_))*(tmp43_)+(tmp89_)*(tmp63_))*mLocScNorm;
  mCompDer[1][5] = (((tmp50_*tmp20_+tmp13_*tmp22_)*(tmp9_)+(tmp50_*tmp4_+tmp13_*tmp27_)*(tmp16_)+tmp13_*tmp2_*(tmp19_))*(tmp43_)+(tmp104_)*(tmp63_))*mLocScNorm;
  mCompDer[1][6] = (tmp44_*(tmp54_)*(tmp43_)+(tmp108_)*(tmp63_))*mLocScNorm;
  mCompDer[1][7] = (tmp44_*(tmp58_)*(tmp43_)+(tmp112_)*(tmp63_))*mLocScNorm;
  mCompDer[1][8] = (tmp44_*tmp61_*(tmp43_)+(tmp116_)*(tmp63_))*mLocScNorm;
  mCompDer[1][9] = ((tmp54_)*(tmp43_)+(tmp119_)*(tmp63_))*mLocScNorm;
  mCompDer[1][10] = ((tmp58_)*(tmp43_)+(tmp122_)*(tmp63_))*mLocScNorm;
  mCompDer[1][11] = (tmp61_*(tmp43_)+(tmp125_)*(tmp63_))*mLocScNorm;
}


void cEqAppui_PTInc_M2CNoDist::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PTInc_M2CNoDist Has no Der Sec");
}

void cEqAppui_PTInc_M2CNoDist::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_PTInc_M2CNoDist::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PTInc_M2CNoDist::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PTInc_M2CNoDist::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PTInc_M2CNoDist::mTheAuto("cEqAppui_PTInc_M2CNoDist",cEqAppui_PTInc_M2CNoDist::Alloc);


cElCompiledFonc *  cEqAppui_PTInc_M2CNoDist::Alloc()
{  return new cEqAppui_PTInc_M2CNoDist();
}


