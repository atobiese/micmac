// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PTInc_C2MDRad5APFraser.h"


cEqAppui_PTInc_C2MDRad5APFraser::cEqAppui_PTInc_C2MDRad5APFraser():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,14));
   AddIntRef (cIncIntervale("Orient",14,20));
   AddIntRef (cIncIntervale("Tmp_PTer",20,23));
   Close(false);
}



void cEqAppui_PTInc_C2MDRad5APFraser::ComputeVal()
{
   double tmp0_ = mCompCoord[14];
   double tmp1_ = mCompCoord[15];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[16];
   double tmp7_ = mCompCoord[20];
   double tmp8_ = mCompCoord[17];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[21];
   double tmp15_ = mCompCoord[18];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[22];
   double tmp18_ = mCompCoord[19];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mCompCoord[3];
   double tmp21_ = mLocXIm-tmp20_;
   double tmp22_ = mCompCoord[4];
   double tmp23_ = mLocYIm-tmp22_;
   double tmp24_ = (tmp21_)*(tmp21_);
   double tmp25_ = (tmp23_)*(tmp23_);
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = (tmp26_)*(tmp26_);
   double tmp28_ = tmp27_*(tmp26_);
   double tmp29_ = tmp28_*(tmp26_);
   double tmp30_ = ElSquare(tmp21_);
   double tmp31_ = mCompCoord[0];
   double tmp32_ = -(tmp3_);
   double tmp33_ = tmp4_*tmp12_;
   double tmp34_ = tmp3_*tmp12_;
   double tmp35_ = tmp32_*tmp11_;
   double tmp36_ = tmp33_*tmp13_;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = (tmp37_)*(tmp9_);
   double tmp39_ = tmp4_*tmp11_;
   double tmp40_ = tmp34_*tmp13_;
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = (tmp41_)*(tmp16_);
   double tmp43_ = tmp38_+tmp42_;
   double tmp44_ = tmp2_*tmp13_;
   double tmp45_ = tmp44_*(tmp19_);
   double tmp46_ = tmp43_+tmp45_;
   double tmp47_ = mCompCoord[5];
   double tmp48_ = (tmp26_)*tmp47_;
   double tmp49_ = 1+tmp48_;
   double tmp50_ = mCompCoord[6];
   double tmp51_ = tmp27_*tmp50_;
   double tmp52_ = tmp49_+tmp51_;
   double tmp53_ = mCompCoord[7];
   double tmp54_ = tmp28_*tmp53_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = mCompCoord[8];
   double tmp57_ = tmp29_*tmp56_;
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = tmp29_*(tmp26_);
   double tmp60_ = mCompCoord[9];
   double tmp61_ = tmp59_*tmp60_;
   double tmp62_ = tmp58_+tmp61_;
   double tmp63_ = ElSquare(tmp23_);
   double tmp64_ = tmp30_+tmp63_;
   double tmp65_ = mCompCoord[11];
   double tmp66_ = 2*(tmp21_);
   double tmp67_ = tmp66_*(tmp23_);
   double tmp68_ = mCompCoord[10];

  mVal[0] = (mCompCoord[1]+tmp31_*((tmp4_*tmp2_*(tmp9_)+tmp3_*tmp2_*(tmp16_)+tmp5_*(tmp19_))/(tmp46_)))-(tmp20_+(tmp21_)*(tmp62_)+(2*tmp30_+tmp64_)*tmp68_+tmp67_*tmp65_+mCompCoord[12]*(tmp21_)+mCompCoord[13]*(tmp23_));

  mVal[1] = (mCompCoord[2]+tmp31_*(((tmp32_*tmp13_+tmp33_*tmp10_)*(tmp9_)+(tmp4_*tmp13_+tmp34_*tmp10_)*(tmp16_)+tmp2_*tmp10_*(tmp19_))/(tmp46_)))-(tmp22_+(tmp23_)*(tmp62_)+(2*tmp63_+tmp64_)*tmp65_+tmp67_*tmp68_);

}


void cEqAppui_PTInc_C2MDRad5APFraser::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[14];
   double tmp1_ = mCompCoord[15];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[16];
   double tmp7_ = mCompCoord[20];
   double tmp8_ = mCompCoord[17];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[21];
   double tmp15_ = mCompCoord[18];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[22];
   double tmp18_ = mCompCoord[19];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mCompCoord[3];
   double tmp21_ = mLocXIm-tmp20_;
   double tmp22_ = mCompCoord[4];
   double tmp23_ = mLocYIm-tmp22_;
   double tmp24_ = (tmp21_)*(tmp21_);
   double tmp25_ = (tmp23_)*(tmp23_);
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = (tmp26_)*(tmp26_);
   double tmp28_ = tmp27_*(tmp26_);
   double tmp29_ = tmp28_*(tmp26_);
   double tmp30_ = ElSquare(tmp21_);
   double tmp31_ = tmp4_*tmp2_;
   double tmp32_ = tmp31_*(tmp9_);
   double tmp33_ = tmp3_*tmp2_;
   double tmp34_ = tmp33_*(tmp16_);
   double tmp35_ = tmp32_+tmp34_;
   double tmp36_ = tmp5_*(tmp19_);
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = -(tmp3_);
   double tmp39_ = tmp38_*tmp11_;
   double tmp40_ = tmp4_*tmp12_;
   double tmp41_ = tmp40_*tmp13_;
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = (tmp42_)*(tmp9_);
   double tmp44_ = tmp4_*tmp11_;
   double tmp45_ = tmp3_*tmp12_;
   double tmp46_ = tmp45_*tmp13_;
   double tmp47_ = tmp44_+tmp46_;
   double tmp48_ = (tmp47_)*(tmp16_);
   double tmp49_ = tmp43_+tmp48_;
   double tmp50_ = tmp2_*tmp13_;
   double tmp51_ = tmp50_*(tmp19_);
   double tmp52_ = tmp49_+tmp51_;
   double tmp53_ = (tmp37_)/(tmp52_);
   double tmp54_ = mCompCoord[5];
   double tmp55_ = (tmp26_)*tmp54_;
   double tmp56_ = 1+tmp55_;
   double tmp57_ = mCompCoord[6];
   double tmp58_ = tmp27_*tmp57_;
   double tmp59_ = tmp56_+tmp58_;
   double tmp60_ = mCompCoord[7];
   double tmp61_ = tmp28_*tmp60_;
   double tmp62_ = tmp59_+tmp61_;
   double tmp63_ = mCompCoord[8];
   double tmp64_ = tmp29_*tmp63_;
   double tmp65_ = tmp62_+tmp64_;
   double tmp66_ = tmp29_*(tmp26_);
   double tmp67_ = mCompCoord[9];
   double tmp68_ = tmp66_*tmp67_;
   double tmp69_ = tmp65_+tmp68_;
   double tmp70_ = -(1);
   double tmp71_ = tmp70_*(tmp21_);
   double tmp72_ = tmp71_+tmp71_;
   double tmp73_ = (tmp72_)*(tmp26_);
   double tmp74_ = tmp73_+tmp73_;
   double tmp75_ = (tmp74_)*(tmp26_);
   double tmp76_ = (tmp72_)*tmp27_;
   double tmp77_ = tmp75_+tmp76_;
   double tmp78_ = (tmp77_)*(tmp26_);
   double tmp79_ = (tmp72_)*tmp28_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = 2*tmp70_;
   double tmp82_ = tmp81_*(tmp21_);
   double tmp83_ = mCompCoord[10];
   double tmp84_ = mCompCoord[11];
   double tmp85_ = mCompCoord[12];
   double tmp86_ = tmp70_*(tmp23_);
   double tmp87_ = tmp86_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp26_);
   double tmp89_ = tmp88_+tmp88_;
   double tmp90_ = (tmp89_)*(tmp26_);
   double tmp91_ = (tmp87_)*tmp27_;
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = (tmp92_)*(tmp26_);
   double tmp94_ = (tmp87_)*tmp28_;
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = 2*(tmp21_);
   double tmp97_ = mCompCoord[13];
   double tmp98_ = 2*tmp30_;
   double tmp99_ = ElSquare(tmp23_);
   double tmp100_ = tmp30_+tmp99_;
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp96_*(tmp23_);
   double tmp103_ = tmp70_*tmp3_;
   double tmp104_ = mCompCoord[0];
   double tmp105_ = tmp70_*tmp5_;
   double tmp106_ = -(tmp2_);
   double tmp107_ = ElSquare(tmp52_);
   double tmp108_ = -(tmp13_);
   double tmp109_ = tmp70_*tmp10_;
   double tmp110_ = tmp38_*tmp13_;
   double tmp111_ = tmp40_*tmp10_;
   double tmp112_ = tmp110_+tmp111_;
   double tmp113_ = (tmp112_)*(tmp9_);
   double tmp114_ = tmp4_*tmp13_;
   double tmp115_ = tmp45_*tmp10_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp16_);
   double tmp118_ = tmp113_+tmp117_;
   double tmp119_ = tmp2_*tmp10_;
   double tmp120_ = tmp119_*(tmp19_);
   double tmp121_ = tmp118_+tmp120_;
   double tmp122_ = (tmp121_)/(tmp52_);
   double tmp123_ = (tmp72_)*tmp54_;
   double tmp124_ = (tmp74_)*tmp57_;
   double tmp125_ = tmp123_+tmp124_;
   double tmp126_ = (tmp77_)*tmp60_;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = (tmp80_)*tmp63_;
   double tmp129_ = tmp127_+tmp128_;
   double tmp130_ = (tmp80_)*(tmp26_);
   double tmp131_ = (tmp72_)*tmp29_;
   double tmp132_ = tmp130_+tmp131_;
   double tmp133_ = (tmp132_)*tmp67_;
   double tmp134_ = tmp129_+tmp133_;
   double tmp135_ = tmp70_*2;
   double tmp136_ = tmp135_*(tmp23_);
   double tmp137_ = tmp70_*(tmp69_);
   double tmp138_ = (tmp87_)*tmp54_;
   double tmp139_ = (tmp89_)*tmp57_;
   double tmp140_ = tmp138_+tmp139_;
   double tmp141_ = (tmp92_)*tmp60_;
   double tmp142_ = tmp140_+tmp141_;
   double tmp143_ = (tmp95_)*tmp63_;
   double tmp144_ = tmp142_+tmp143_;
   double tmp145_ = (tmp95_)*(tmp26_);
   double tmp146_ = (tmp87_)*tmp29_;
   double tmp147_ = tmp145_+tmp146_;
   double tmp148_ = (tmp147_)*tmp67_;
   double tmp149_ = tmp144_+tmp148_;
   double tmp150_ = tmp81_*(tmp23_);
   double tmp151_ = tmp70_*tmp96_;
   double tmp152_ = -(tmp102_);
   double tmp153_ = 2*tmp99_;
   double tmp154_ = tmp153_+tmp100_;
   double tmp155_ = -(tmp4_);
   double tmp156_ = tmp103_*tmp12_;
   double tmp157_ = tmp155_*tmp11_;
   double tmp158_ = tmp156_*tmp13_;
   double tmp159_ = tmp157_+tmp158_;
   double tmp160_ = (tmp159_)*(tmp9_);
   double tmp161_ = tmp103_*tmp11_;
   double tmp162_ = tmp161_+tmp41_;
   double tmp163_ = (tmp162_)*(tmp16_);
   double tmp164_ = tmp160_+tmp163_;
   double tmp165_ = tmp106_*tmp4_;
   double tmp166_ = tmp106_*tmp3_;
   double tmp167_ = tmp165_*tmp13_;
   double tmp168_ = tmp167_*(tmp9_);
   double tmp169_ = tmp166_*tmp13_;
   double tmp170_ = tmp169_*(tmp16_);
   double tmp171_ = tmp168_+tmp170_;
   double tmp172_ = tmp105_*tmp13_;
   double tmp173_ = tmp172_*(tmp19_);
   double tmp174_ = tmp171_+tmp173_;
   double tmp175_ = tmp108_*tmp38_;
   double tmp176_ = tmp109_*tmp40_;
   double tmp177_ = tmp175_+tmp176_;
   double tmp178_ = (tmp177_)*(tmp9_);
   double tmp179_ = tmp108_*tmp4_;
   double tmp180_ = tmp109_*tmp45_;
   double tmp181_ = tmp179_+tmp180_;
   double tmp182_ = (tmp181_)*(tmp16_);
   double tmp183_ = tmp178_+tmp182_;
   double tmp184_ = tmp109_*tmp2_;
   double tmp185_ = tmp184_*(tmp19_);
   double tmp186_ = tmp183_+tmp185_;
   double tmp187_ = tmp70_*(tmp42_);
   double tmp188_ = tmp70_*(tmp47_);
   double tmp189_ = tmp70_*tmp50_;

  mVal[0] = (mCompCoord[1]+tmp104_*(tmp53_))-(tmp20_+(tmp21_)*(tmp69_)+(tmp101_)*tmp83_+tmp102_*tmp84_+tmp85_*(tmp21_)+tmp97_*(tmp23_));

  mCompDer[0][0] = tmp53_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = -(1+tmp137_+(tmp134_)*(tmp21_)+(tmp82_*2+tmp82_)*tmp83_+tmp136_*tmp84_+tmp70_*tmp85_);
  mCompDer[0][4] = -((tmp149_)*(tmp21_)+tmp150_*tmp83_+tmp151_*tmp84_+tmp70_*tmp97_);
  mCompDer[0][5] = -((tmp26_)*(tmp21_));
  mCompDer[0][6] = -(tmp27_*(tmp21_));
  mCompDer[0][7] = -(tmp28_*(tmp21_));
  mCompDer[0][8] = -(tmp29_*(tmp21_));
  mCompDer[0][9] = -(tmp66_*(tmp21_));
  mCompDer[0][10] = -(tmp101_);
  mCompDer[0][11] = tmp152_;
  mCompDer[0][12] = -(tmp21_);
  mCompDer[0][13] = -(tmp23_);
  mCompDer[0][14] = (((tmp103_*tmp2_*(tmp9_)+tmp31_*(tmp16_))*(tmp52_)-(tmp37_)*(tmp164_))/tmp107_)*tmp104_;
  mCompDer[0][15] = (((tmp105_*tmp4_*(tmp9_)+tmp105_*tmp3_*(tmp16_)+tmp2_*(tmp19_))*(tmp52_)-(tmp37_)*(tmp174_))/tmp107_)*tmp104_;
  mCompDer[0][16] = (-((tmp37_)*(tmp186_))/tmp107_)*tmp104_;
  mCompDer[0][17] = ((tmp70_*tmp31_*(tmp52_)-(tmp37_)*tmp187_)/tmp107_)*tmp104_;
  mCompDer[0][18] = ((tmp70_*tmp33_*(tmp52_)-(tmp37_)*tmp188_)/tmp107_)*tmp104_;
  mCompDer[0][19] = ((tmp105_*(tmp52_)-(tmp37_)*tmp189_)/tmp107_)*tmp104_;
  mCompDer[0][20] = ((tmp31_*(tmp52_)-(tmp37_)*(tmp42_))/tmp107_)*tmp104_;
  mCompDer[0][21] = ((tmp33_*(tmp52_)-(tmp37_)*(tmp47_))/tmp107_)*tmp104_;
  mCompDer[0][22] = ((tmp5_*(tmp52_)-(tmp37_)*tmp50_)/tmp107_)*tmp104_;
  mVal[1] = (mCompCoord[2]+tmp104_*(tmp122_))-(tmp22_+(tmp23_)*(tmp69_)+(tmp154_)*tmp84_+tmp102_*tmp83_);

  mCompDer[1][0] = tmp122_;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 1;
  mCompDer[1][3] = -((tmp134_)*(tmp23_)+tmp82_*tmp84_+tmp136_*tmp83_);
  mCompDer[1][4] = -(1+tmp137_+(tmp149_)*(tmp23_)+(tmp150_*2+tmp150_)*tmp84_+tmp151_*tmp83_);
  mCompDer[1][5] = -((tmp26_)*(tmp23_));
  mCompDer[1][6] = -(tmp27_*(tmp23_));
  mCompDer[1][7] = -(tmp28_*(tmp23_));
  mCompDer[1][8] = -(tmp29_*(tmp23_));
  mCompDer[1][9] = -(tmp66_*(tmp23_));
  mCompDer[1][10] = tmp152_;
  mCompDer[1][11] = -(tmp154_);
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = ((((tmp155_*tmp13_+tmp156_*tmp10_)*(tmp9_)+(tmp103_*tmp13_+tmp111_)*(tmp16_))*(tmp52_)-(tmp121_)*(tmp164_))/tmp107_)*tmp104_;
  mCompDer[1][15] = (((tmp165_*tmp10_*(tmp9_)+tmp166_*tmp10_*(tmp16_)+tmp105_*tmp10_*(tmp19_))*(tmp52_)-(tmp121_)*(tmp174_))/tmp107_)*tmp104_;
  mCompDer[1][16] = ((((tmp109_*tmp38_+tmp13_*tmp40_)*(tmp9_)+(tmp109_*tmp4_+tmp13_*tmp45_)*(tmp16_)+tmp13_*tmp2_*(tmp19_))*(tmp52_)-(tmp121_)*(tmp186_))/tmp107_)*tmp104_;
  mCompDer[1][17] = ((tmp70_*(tmp112_)*(tmp52_)-(tmp121_)*tmp187_)/tmp107_)*tmp104_;
  mCompDer[1][18] = ((tmp70_*(tmp116_)*(tmp52_)-(tmp121_)*tmp188_)/tmp107_)*tmp104_;
  mCompDer[1][19] = ((tmp70_*tmp119_*(tmp52_)-(tmp121_)*tmp189_)/tmp107_)*tmp104_;
  mCompDer[1][20] = (((tmp112_)*(tmp52_)-(tmp121_)*(tmp42_))/tmp107_)*tmp104_;
  mCompDer[1][21] = (((tmp116_)*(tmp52_)-(tmp121_)*(tmp47_))/tmp107_)*tmp104_;
  mCompDer[1][22] = ((tmp119_*(tmp52_)-(tmp121_)*tmp50_)/tmp107_)*tmp104_;
}


void cEqAppui_PTInc_C2MDRad5APFraser::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PTInc_C2MDRad5APFraser Has no Der Sec");
}

void cEqAppui_PTInc_C2MDRad5APFraser::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PTInc_C2MDRad5APFraser::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PTInc_C2MDRad5APFraser::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PTInc_C2MDRad5APFraser::mTheAuto("cEqAppui_PTInc_C2MDRad5APFraser",cEqAppui_PTInc_C2MDRad5APFraser::Alloc);


cElCompiledFonc *  cEqAppui_PTInc_C2MDRad5APFraser::Alloc()
{  return new cEqAppui_PTInc_C2MDRad5APFraser();
}


