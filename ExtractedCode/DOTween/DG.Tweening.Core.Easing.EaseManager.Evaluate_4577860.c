// rea decompile_all
// name: DG.Tweening.Core.Easing.EaseManager$$Evaluate
// address: 0x4577860
// body: available
// range: 0x4577860-0x457827f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4577914 to 0x4578574 DG.Tweening.Core.Easing.Flash$$EaseInOut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45779a0 to 0x45784a0 DG.Tweening.Core.Easing.Flash$$EaseOut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45779f8 to 0x45783d4 DG.Tweening.Core.Easing.Flash$$EaseIn (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4577ba4 to 0x45777f4 DG.Tweening.Core.Easing.Bounce$$EaseInOut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4577d64 to 0x4577738 DG.Tweening.Core.Easing.Bounce$$EaseOut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4577d8c to 0x457830c DG.Tweening.Core.Easing.Flash$$Ease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x457827c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
DG_Tweening_Core_Easing_EaseManager__Evaluate
          (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,long param_6)

{
  float fVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  
  if ((DAT_095188e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095188e6 = 1;
  }
  uVar2 = 0x3f800000;
  switch(param_5) {
  case 1:
    uVar2 = (ulong)(uint)(param_1 / param_2);
    break;
  case 2:
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = cos((double)((param_1 / param_2) * 1.5707964));
    goto LAB_04577d10;
  case 3:
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = sin((double)((param_1 / param_2) * 1.5707964));
    goto LAB_04577bec;
  case 4:
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = cos((double)((param_1 * 3.1415927) / param_2));
    param_2 = (float)dVar3;
    goto LAB_04577dd0;
  case 5:
    uVar2 = (ulong)(uint)((param_1 / param_2) * (param_1 / param_2));
    break;
  default:
    uVar2 = (ulong)(uint)-((param_1 / param_2) * (param_1 / param_2 + -2.0));
    break;
  case 7:
    param_3 = 0.5;
    param_2 = param_1 / (param_2 * 0.5);
    if (param_2 < 1.0) goto LAB_04577cc0;
    fVar1 = -1.0;
    param_2 = param_2 + -1.0;
    fVar6 = param_2 + -2.0;
LAB_04577f24:
    param_2 = param_2 * fVar6;
    goto LAB_04577f28;
  case 8:
    param_2 = param_1 / param_2;
    param_3 = param_2 * param_2;
    goto LAB_045781b0;
  case 9:
    fVar1 = param_1 / param_2 + -1.0;
    fVar6 = fVar1 * fVar1;
    goto LAB_04577b18;
  case 10:
    fVar1 = 0.5;
    param_3 = param_1 / (param_2 * 0.5);
    if (param_3 < 1.0) goto LAB_04577d30;
    fVar6 = param_3 + -2.0;
    param_3 = fVar6 * fVar6;
LAB_04577f94:
    fVar1 = 0.5;
    param_3 = fVar6 * param_3 + 2.0;
    goto LAB_04578260;
  case 0xb:
    param_2 = param_1 / param_2;
    param_3 = param_2 * param_2;
    goto LAB_04577cc0;
  case 0xc:
    fVar1 = param_1 / param_2 + -1.0;
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1;
    goto LAB_04577c24;
  case 0xd:
    param_2 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_2) {
      fVar1 = -2.0;
      param_2 = param_2 + -2.0;
      fVar6 = param_2 * param_2 * param_2;
      goto LAB_04577f24;
    }
    param_3 = param_2 * 0.5;
    goto LAB_04577cbc;
  case 0xe:
    param_2 = param_1 / param_2;
    param_3 = param_2 * param_2;
LAB_04577cbc:
    param_3 = param_2 * param_3;
LAB_04577cc0:
    param_3 = param_2 * param_3;
    goto LAB_045781b0;
  case 0xf:
    fVar1 = param_1 / param_2 + -1.0;
    fVar6 = fVar1 * fVar1 * fVar1 * fVar1;
LAB_04577b18:
    fVar1 = fVar1 * fVar6;
LAB_04577b1c:
    uVar2 = (ulong)(uint)(fVar1 + 1.0);
    break;
  case 0x10:
    param_3 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_3) {
      fVar6 = param_3 + -2.0;
      param_3 = fVar6 * fVar6 * fVar6 * fVar6;
      goto LAB_04577f94;
    }
    fVar1 = param_3 * param_3 * 0.5;
LAB_04577d30:
    fVar1 = param_3 * param_3 * fVar1;
    goto LAB_04578260;
  case 0x11:
    if (param_1 == 0.0) {
LAB_04577e84:
      uVar2 = 0;
      break;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)((param_1 / param_2 + -1.0) * 10.0),
                                     0);
LAB_04577bec:
    uVar2 = (ulong)(uint)(float)dVar3;
    break;
  case 0x12:
    if (param_1 == param_2) break;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)((param_1 * -10.0) / param_2),0);
LAB_04577d10:
    fVar1 = (float)dVar3;
LAB_04577ed4:
    uVar2 = (ulong)(uint)(1.0 - fVar1);
    break;
  case 0x13:
    if (param_1 == 0.0) goto LAB_04577e84;
    if (param_1 == param_2) break;
    param_1 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_1) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)((param_1 + -1.0) * -10.0),0);
      param_2 = 2.0 - (float)dVar3;
    }
    else {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)((param_1 + -1.0) * 10.0),0);
      param_2 = (float)dVar3;
    }
LAB_045781ac:
    param_3 = 0.5;
    goto LAB_045781b0;
  case 0x14:
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar1 = SQRT(1.0 - (param_1 / param_2) * (param_1 / param_2));
LAB_04577c24:
    uVar2 = (ulong)(uint)-(fVar1 + -1.0);
    break;
  case 0x15:
    fVar1 = param_1 / param_2 + -1.0;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = (ulong)(uint)SQRT(1.0 - fVar1 * fVar1);
    break;
  case 0x16:
    param_1 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_1) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_2 = SQRT(1.0 - (param_1 + -2.0) * (param_1 + -2.0)) + 1.0;
      goto LAB_045781ac;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = SQRT(1.0 - param_1 * param_1);
LAB_04577dd0:
    fVar1 = -1.0;
LAB_04577f28:
    param_2 = param_2 + fVar1;
LAB_04577f2c:
    param_3 = -0.5;
    goto LAB_045781b0;
  case 0x17:
    if (param_1 == 0.0) goto LAB_04577e84;
    if (param_1 / param_2 == 1.0) break;
    fVar1 = param_2 * 0.3;
    if (param_4 != 0.0) {
      fVar1 = param_4;
    }
    if (1.0 <= param_3) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = asin((double)(1.0 / param_3));
      fVar6 = (fVar1 / 6.2831855) * (float)dVar3;
    }
    else {
      param_3 = 1.0;
      fVar6 = fVar1 * 0.25;
    }
    fVar7 = param_1 / param_2 + -1.0;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)(fVar7 * 10.0),0);
    dVar4 = sin((double)(((fVar7 * param_2 - fVar6) * -6.2831855) / fVar1));
    fVar1 = (float)dVar4;
    param_3 = param_3 * (float)dVar3;
    goto LAB_04578260;
  case 0x18:
    if (param_1 == 0.0) goto LAB_04577e84;
    param_1 = param_1 / param_2;
    if (param_1 == 1.0) break;
    fVar1 = param_2 * 0.3;
    if (param_4 != 0.0) {
      fVar1 = param_4;
    }
    if (1.0 <= param_3) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = asin((double)(1.0 / param_3));
      fVar6 = (fVar1 / 6.2831855) * (float)dVar3;
    }
    else {
      param_3 = 1.0;
      fVar6 = fVar1 * 0.25;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)(param_1 * -10.0),0);
    dVar4 = sin((double)(((param_1 * param_2 - fVar6) * 6.2831855) / fVar1));
    fVar1 = param_3 * (float)dVar3 * (float)dVar4;
    goto LAB_04577b1c;
  case 0x19:
    if (param_1 == 0.0) goto LAB_04577e84;
    param_1 = param_1 / (param_2 * 0.5);
    if (param_1 == 2.0) break;
    fVar1 = param_2 * 0.45000002;
    if (param_4 != 0.0) {
      fVar1 = param_4;
    }
    if (1.0 <= param_3) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = asin((double)(1.0 / param_3));
      fVar6 = (fVar1 / 6.2831855) * (float)dVar3;
    }
    else {
      param_3 = 1.0;
      fVar6 = fVar1 * 0.25;
    }
    fVar7 = param_1 + -1.0;
    if (1.0 <= param_1) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)(fVar7 * -10.0),0);
      dVar4 = sin((double)(((fVar7 * param_2 - fVar6) * 6.2831855) / fVar1));
      fVar1 = param_3 * (float)dVar3 * (float)dVar4;
      fVar6 = 0.5;
      goto LAB_04577b18;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Pow(0x4000000000000000,(double)(fVar7 * 10.0),0);
    dVar4 = sin((double)(((fVar7 * param_2 - fVar6) * 6.2831855) / fVar1));
    param_2 = param_3 * (float)dVar3 * (float)dVar4;
    goto LAB_04577f2c;
  case 0x1a:
    param_1 = param_1 / param_2;
    param_2 = param_1 * param_1;
    param_3 = param_1 * (param_3 + 1.0) - param_3;
LAB_045781b0:
    uVar2 = (ulong)(uint)(param_2 * param_3);
    break;
  case 0x1b:
    fVar1 = param_1 / param_2 + -1.0;
    uVar2 = (ulong)(uint)(fVar1 * fVar1 * ((param_3 + 1.0) * fVar1 + param_3) + 1.0);
    break;
  case 0x1c:
    fVar1 = 0.5;
    param_3 = param_3 * 1.525;
    param_1 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_1) {
      param_1 = param_1 + -2.0;
      fVar6 = param_1 * param_1;
      param_3 = param_3 + (param_3 + 1.0) * param_1;
      goto LAB_04577f94;
    }
    param_3 = param_1 * param_1 * (param_1 * (param_3 + 1.0) - param_3);
LAB_04578260:
    uVar2 = (ulong)(uint)(param_3 * fVar1);
    break;
  case 0x1d:
    fVar1 = (float)DG_Tweening_Core_Easing_Bounce__EaseOut(param_2 - param_1,param_2);
    goto LAB_04577ed4;
  case 0x1e:
    auVar5 = DG_Tweening_Core_Easing_Bounce__EaseOut(param_1,param_2);
    return auVar5;
  case 0x1f:
    auVar5 = DG_Tweening_Core_Easing_Bounce__EaseInOut(param_1,param_2);
    return auVar5;
  case 0x20:
    auVar5 = DG_Tweening_Core_Easing_Flash__Ease(param_1,param_2,param_3,param_4);
    return auVar5;
  case 0x21:
    auVar5 = DG_Tweening_Core_Easing_Flash__EaseIn(param_1,param_2,param_3,param_4);
    return auVar5;
  case 0x22:
    auVar5 = DG_Tweening_Core_Easing_Flash__EaseOut(param_1,param_2,param_3,param_4);
    return auVar5;
  case 0x23:
    auVar5 = DG_Tweening_Core_Easing_Flash__EaseInOut(param_1,param_2,param_3,param_4);
    return auVar5;
  case 0x24:
    break;
  case 0x25:
    if (param_6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0457794c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (**(code **)(param_6 + 0x18))
                         (param_1,param_2,param_3,param_4,*(undefined8 *)(param_6 + 0x40),
                          *(undefined8 *)(param_6 + 0x28));
      return auVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

