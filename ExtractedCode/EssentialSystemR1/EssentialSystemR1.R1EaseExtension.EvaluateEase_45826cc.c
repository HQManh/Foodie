// rea decompile_all
// name: EssentialSystemR1.R1EaseExtension$$EvaluateEase
// address: 0x45826cc
// body: available
// range: 0x45826cc-0x4582d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45828f4 to 0x89db900 <EXTERNAL>::sinf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4582b78 to 0x89db940 <EXTERNAL>::exp2f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] EssentialSystemR1_R1EaseExtension__EvaluateEase(float param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  
  if (0x25 < param_2) {
    uVar4 = (ulong)(uint)param_1;
    goto switchD_04582704_caseD_1;
  }
  uVar4 = (ulong)(uint)param_1;
  switch(param_2) {
  default:
    goto switchD_04582704_caseD_0;
  case 1:
    break;
  case 2:
    fVar3 = cosf(param_1 * 3.1415927 * 0.5);
    goto LAB_04582964;
  case 3:
    auVar5._0_4_ = sinf(param_1 * 3.1415927 * 0.5);
    auVar5._4_4_ = extraout_var;
    auVar5._8_8_ = extraout_var_01;
    return auVar5;
  case 4:
    fVar3 = cosf(param_1 * 3.1415927);
    fVar3 = fVar3 + -1.0;
LAB_04582a10:
    fVar2 = -0.5;
    goto LAB_04582c14;
  case 5:
    uVar4 = (ulong)(uint)(param_1 * param_1);
    break;
  case 6:
    uVar4 = (ulong)(uint)(1.0 - (1.0 - param_1) * (1.0 - param_1));
    break;
  case 7:
    fVar3 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar3 = (2.0 - fVar3) * (2.0 - fVar3);
LAB_04582c30:
      fVar3 = fVar3 * -0.5;
LAB_04582c38:
      fVar2 = 1.0;
LAB_04582c3c:
      uVar4 = (ulong)(uint)(fVar3 + fVar2);
      break;
    }
    goto LAB_04582b1c;
  case 8:
    fVar3 = param_1 * param_1;
    goto LAB_04582b1c;
  case 9:
    fVar3 = 3.0;
    goto LAB_04582b40;
  case 10:
    if (0.5 <= param_1) {
      fVar3 = 2.0 - (param_1 + param_1);
      fVar2 = 3.0;
LAB_04582c2c:
      fVar3 = powf(fVar3,fVar2);
      goto LAB_04582c30;
    }
    fVar3 = param_1 * 4.0;
    goto LAB_04582b18;
  case 0xb:
    fVar3 = param_1 * param_1;
    goto LAB_04582b18;
  case 0xc:
    fVar3 = 4.0;
    goto LAB_04582b40;
  case 0xd:
    if (0.5 <= param_1) {
      fVar3 = 2.0 - (param_1 + param_1);
      fVar2 = 4.0;
      goto LAB_04582c2c;
    }
    fVar3 = param_1 * 8.0;
    goto LAB_045829c8;
  case 0xe:
    fVar3 = param_1 * param_1;
    goto LAB_045829c8;
  case 0xf:
    fVar3 = 5.0;
LAB_04582b40:
    fVar3 = powf(1.0 - param_1,fVar3);
LAB_04582b48:
    uVar4 = (ulong)(uint)(1.0 - fVar3);
    break;
  case 0x10:
    if (0.5 <= param_1) {
      fVar3 = 2.0 - (param_1 + param_1);
      fVar2 = 5.0;
      goto LAB_04582c2c;
    }
    fVar3 = param_1 * 16.0 * param_1;
LAB_045829c8:
    fVar3 = fVar3 * param_1;
LAB_04582b18:
    fVar3 = fVar3 * param_1;
    goto LAB_04582b1c;
  case 0x11:
    if (param_1 != 0.0) {
      auVar6._0_4_ = exp2f(param_1 * 10.0 + -10.0);
      auVar6._4_4_ = extraout_var_00;
      auVar6._8_8_ = extraout_var_02;
      return auVar6;
    }
    goto switchD_04582704_caseD_0;
  case 0x12:
    uVar4 = 0x3f800000;
    if (param_1 == 1.0) break;
    fVar3 = exp2f(param_1 * -10.0);
    goto LAB_04582964;
  case 0x13:
    if (param_1 != 0.0) {
      uVar4 = 0x3f800000;
      if (param_1 == 1.0) break;
      fVar3 = 0.5;
      if (0.5 <= param_1) {
        fVar2 = exp2f(10.0 - param_1 * 20.0);
        fVar2 = 2.0 - fVar2;
      }
      else {
        fVar2 = exp2f(param_1 * 20.0 + -10.0);
      }
LAB_04582ce4:
      uVar4 = (ulong)(uint)(fVar2 * fVar3);
      break;
    }
    goto switchD_04582704_caseD_0;
  case 0x14:
    fVar3 = SQRT(1.0 - param_1 * param_1);
LAB_04582964:
    uVar4 = (ulong)(uint)(1.0 - fVar3);
    break;
  case 0x15:
    uVar4 = (ulong)(uint)SQRT(1.0 - (param_1 + -1.0) * (param_1 + -1.0));
    break;
  case 0x16:
    fVar3 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar2 = 1.0;
      fVar3 = SQRT(1.0 - (2.0 - fVar3) * (2.0 - fVar3));
LAB_04582c0c:
      fVar3 = fVar3 + fVar2;
    }
    else {
      fVar3 = 1.0 - SQRT(1.0 - fVar3 * fVar3);
    }
    goto LAB_04582c10;
  case 0x17:
    if (param_1 != 0.0) {
      uVar4 = 0x3f800000;
      if (param_1 == 1.0) break;
      fVar3 = exp2f(param_1 * 10.0 + -10.0);
      fVar2 = sinf((param_1 * 10.0 + -10.75) * -2.0943952);
      goto LAB_04582ce4;
    }
    goto switchD_04582704_caseD_0;
  case 0x18:
    if (param_1 != 0.0) {
      uVar4 = 0x3f800000;
      if (param_1 == 1.0) break;
      fVar3 = exp2f(param_1 * -10.0);
      fVar2 = sinf((param_1 * 10.0 + -0.75) * 2.0943952);
      fVar3 = fVar3 * fVar2;
      goto LAB_04582c38;
    }
    goto switchD_04582704_caseD_0;
  case 0x19:
    if (param_1 != 0.0) {
      uVar4 = 0x3f800000;
      if (param_1 == 1.0) break;
      fVar3 = param_1 * 20.0;
      fVar2 = sinf((fVar3 + -11.125) * 1.3962635);
      if (0.5 <= param_1) {
        fVar3 = exp2f(10.0 - fVar3);
        fVar3 = fVar3 * fVar2 * 0.5;
        goto LAB_04582c38;
      }
      fVar3 = exp2f(fVar3 + -10.0);
      fVar3 = fVar3 * fVar2;
      goto LAB_04582a10;
    }
switchD_04582704_caseD_0:
    uVar4 = 0;
    break;
  case 0x1a:
    fVar3 = param_1 * 1.70158 * param_1;
    uVar4 = CONCAT44(fVar3 - fVar3,param_1 * 2.70158 * param_1 * param_1 - fVar3);
    break;
  case 0x1b:
    param_1 = param_1 + -1.0;
    fVar3 = powf(param_1,3.0);
    uVar4 = (ulong)(uint)(param_1 * param_1 * 1.70158 + fVar3 * 2.70158 + 1.0);
    break;
  case 0x1c:
    fVar3 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar3 = fVar3 + -2.0;
      fVar3 = fVar3 * fVar3 * (fVar3 * 3.5949094 + 2.5949094);
      fVar2 = 2.0;
      goto LAB_04582c0c;
    }
    fVar3 = fVar3 * fVar3 * (param_1 * 7.189819 + -2.5949094);
    goto LAB_04582c10;
  case 0x1d:
    fVar3 = (float)EssentialSystemR1_R1EaseExtension__EvaluateEase(1.0 - param_1,0x1e);
    goto LAB_04582b48;
  case 0x1e:
    if (0.36363637 <= param_1) {
      if (0.72727275 <= param_1) {
        if (0.90909094 <= param_1) {
          fVar3 = (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625;
          fVar2 = 0.984375;
        }
        else {
          fVar3 = (param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625;
          fVar2 = 0.9375;
        }
      }
      else {
        fVar3 = (param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625;
        fVar2 = 0.75;
      }
      goto LAB_04582c3c;
    }
    fVar3 = param_1 * 7.5625;
LAB_04582b1c:
    uVar4 = (ulong)(uint)(fVar3 * param_1);
    break;
  case 0x1f:
    if (0.5 <= param_1) {
      fVar3 = (float)EssentialSystemR1_R1EaseExtension__EvaluateEase(param_1 + param_1 + -1.0,0x1e);
      fVar2 = 1.0;
      goto LAB_04582c0c;
    }
    fVar3 = (float)EssentialSystemR1_R1EaseExtension__EvaluateEase(1.0 - (param_1 + param_1),0x1e);
    fVar3 = 1.0 - fVar3;
LAB_04582c10:
    fVar2 = 0.5;
LAB_04582c14:
    uVar4 = (ulong)(uint)(fVar3 * fVar2);
    break;
  case 0x20:
  case 0x25:
    uVar4 = 0x3f800000;
    break;
  case 0x21:
    uVar1 = 0;
    if (param_1 != 1.0) {
      uVar1 = 0x3f800000;
    }
    uVar4 = (ulong)uVar1;
    break;
  case 0x22:
    uVar1 = 0;
    if (param_1 != 0.0) {
      uVar1 = 0x3f800000;
    }
    uVar4 = (ulong)uVar1;
    break;
  case 0x23:
    uVar1 = 0;
    if (0.5 <= param_1) {
      uVar1 = 0x3f800000;
    }
    uVar4 = (ulong)uVar1;
  }
switchD_04582704_caseD_1:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

