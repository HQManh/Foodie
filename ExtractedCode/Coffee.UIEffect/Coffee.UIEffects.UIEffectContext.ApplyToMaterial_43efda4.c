// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$ApplyToMaterial
// address: 0x43efda4
// body: available
// range: 0x43efda4-0x43f09ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f09a8 to 0x43f17b4 Coffee.UIEffects.UIEffectContext$$SetKeyword (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f09ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext__ApplyToMaterial(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09517de6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bacb0);
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517de6 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x10),
               *(undefined4 *)(param_2 + 0xcc),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x14),
               *(undefined4 *)(param_2 + 0xd0),0);
    fVar11 = 1.0;
    fVar8 = *(float *)(param_2 + 0x14);
    fVar9 = fVar11;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    UnityEngine_Material__SetFloat
              (fVar10,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x18),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x1c),
               *(undefined4 *)(param_2 + 0x18),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x20);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
               *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    fVar8 = *(float *)(param_2 + 0x1c);
    fVar9 = fVar11;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    UnityEngine_Material__SetFloat
              (fVar10,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x24),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x28),
               *(undefined1 *)(param_2 + 0x30),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    pfVar7 = (float *)(param_2 + 0x38);
    fVar8 = *pfVar7;
    fVar9 = fVar11;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    UnityEngine_Material__SetFloat
              (fVar10,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x2c),0);
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_2 + 0x3c),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x30),0);
    UnityEngine_Material__SetFloat
              (param_1,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x34),0);
    fVar9 = *(float *)(param_2 + 0x44);
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x38),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x3c),
               *(undefined1 *)(param_2 + 0x48),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(param_2 + 0x40) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x50);
    }
    UnityEngine_Material__SetTextureImpl
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x40),uVar6,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
               *(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x44),0);
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),0,0,param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x48),0);
    fVar9 = *(float *)(param_2 + 0x78);
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x4c),0);
    fVar9 = *(float *)(param_2 + 0x7c);
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x50),0);
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),0,0,param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x54),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x58),
               *(undefined4 *)(param_2 + 0x88),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x5c);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),
               *(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x60),
               *(undefined1 *)(param_2 + 0x9c),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 100),
               *(undefined1 *)(param_2 + 0x9d),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_2 + 0xa0),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x68),0);
    uVar6 = 0;
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x6c);
    if (*(int *)(param_2 + 0x40) == 9) {
      uVar6 = Coffee_UIEffects_UIEffectContext__get_transitionRampTex(param_2,extraout_x1,0);
    }
    UnityEngine_Material__SetTextureImpl(param_3,uVar5,uVar6,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x70);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),
               *(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    fVar9 = *(float *)(param_2 + 0xc4);
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x74),0);
    fVar9 = *(float *)(param_2 + 200);
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x78),0);
    if (*(int *)(param_2 + 0x34) - 1U < 3) {
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      pfVar7 = (float *)(param_2 + 0xec);
    }
    else if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = *pfVar7;
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x84),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x7c),
               *(undefined4 *)(param_2 + 0xf0),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x80);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8),
               *(undefined4 *)(param_2 + 0xfc),*(undefined4 *)(param_2 + 0x100));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x88),
               *(undefined1 *)(param_2 + 0x104),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar11 = 1.0;
    fVar8 = *(float *)(param_2 + 0x110);
    fVar9 = fVar11;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    UnityEngine_Material__SetFloat
              (fVar10,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x8c),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x90),
               *(undefined4 *)(param_2 + 0x114),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x94);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x11c),
               *(undefined4 *)(param_2 + 0x120),*(undefined4 *)(param_2 + 0x124));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x98),
               *(undefined1 *)(param_2 + 0x128),0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar8 = *(float *)(param_2 + 0x10c);
    fVar9 = fVar11;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    UnityEngine_Material__SetFloat
              (fVar10,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa0),0);
    fVar9 = *(float *)(param_2 + 300);
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa4),0);
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_2 + 0x130),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x9c),0);
    if (*(int *)(param_2 + 0x108) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x134);
    }
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa8),uVar5,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xdc);
    if (*(int *)(param_2 + 0x138) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = Coffee_UIEffects_UIEffectContext__get_gradationRampTex(param_2);
    }
    UnityEngine_Material__SetTextureImpl(param_3,uVar5,uVar6,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xe0);
    Coffee_UIEffects_UIEffectContext__GetGradationScaleAndOffset(param_2);
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_2 + 0x13c),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xc4),0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 200),
               *(undefined4 *)(param_2 + 0x140),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xcc);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x144),*(undefined4 *)(param_2 + 0x148),
               *(undefined4 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x150));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd0);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x154),*(undefined4 *)(param_2 + 0x158),
               *(undefined4 *)(param_2 + 0x15c),*(undefined4 *)(param_2 + 0x160));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd4);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x164),*(undefined4 *)(param_2 + 0x168),
               *(undefined4 *)(param_2 + 0x16c),*(undefined4 *)(param_2 + 0x170));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd8);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x174),*(undefined4 *)(param_2 + 0x178),
               *(undefined4 *)(param_2 + 0x17c),*(undefined4 *)(param_2 + 0x180));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetInt
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xe4),
               *(int *)(param_2 + 0x138) - 5U < 2 || *(int *)(param_2 + 0x138) == 0xc,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = *(float *)(param_2 + 0x1a8);
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar11;
    }
    UnityEngine_Material__SetFloat
              (fVar8,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xac),0);
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb4);
    Coffee_UIEffects_UIEffectContext__ApplyColorSpace
              (*(undefined4 *)(param_2 + 0x1b4),*(undefined4 *)(param_2 + 0x1b8),
               *(undefined4 *)(param_2 + 0x1bc),*(undefined4 *)(param_2 + 0x1c0));
    UnityEngine_Material__SetColorImpl(param_3,uVar5,0);
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x1ac),*(undefined4 *)(param_2 + 0x1b0),0,0,param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb0),0);
    if (*(int *)(param_2 + 0x1a4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x1c8);
    }
    UnityEngine_Material__SetTextureImpl
              (param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb8),uVar6,0);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x1d0),*(undefined4 *)(param_2 + 0x1d4),
               *(undefined4 *)(param_2 + 0x1d8),*(undefined4 *)(param_2 + 0x1dc),param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xbc),0);
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_2 + 0x1e0),*(undefined4 *)(param_2 + 0x1e4),0,0,param_3,
               *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xc0),0);
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x100),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0x10));
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x108),DAT_091bacb0);
    if (*(int *)(param_2 + 0x18) == 0) {
      bVar3 = *(int *)(param_2 + 0xd4) != 0;
    }
    else {
      bVar3 = true;
    }
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIEffects_UIEffectContext__SetKeyword(param_3,auVar12._0_8_,auVar12._8_8_,bVar3);
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x110),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0x34));
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x118),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0x40));
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x128),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0x108));
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x130),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0x1a4));
    auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x120),DAT_091bacb0);
    Coffee_UIEffects_UIEffectContext__SetKeyword
              (param_3,auVar12._0_8_,auVar12._8_8_,*(undefined4 *)(param_2 + 0xb0));
    uVar1 = *(uint *)(param_2 + 0x138);
    if (uVar1 < 0xd) {
      uVar2 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar2 & 0x3ea) != 0) {
        uVar6 = 2;
        goto LAB_043f0958;
      }
      if ((uVar2 & 0x1414) != 0) {
        uVar6 = 1;
        goto LAB_043f0958;
      }
      if (uVar1 == 0xb) {
        uVar6 = 3;
        goto LAB_043f0958;
      }
    }
    if (uVar1 == 0) {
      uVar6 = 0;
LAB_043f0958:
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar12 = FUN_0612c6ec(*(undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x138),DAT_091bacb0);
      Coffee_UIEffects_UIEffectContext__SetKeyword(param_3,auVar12._0_8_,auVar12._8_8_,uVar6);
      return;
    }
  }
  return;
}

