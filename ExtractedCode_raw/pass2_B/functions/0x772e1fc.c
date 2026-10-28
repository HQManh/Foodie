// rea decompile_all
// name: AssetKits.ParticleImage.SeparatedMinMaxCurve$$.ctor
// address: 0x772e1fc
// body: available
// range: 0x772e1fc-0x772e3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772e3f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_SeparatedMinMaxCurve___ctor
               (byte *param_1,long param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09522a5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181258);
    DAT_09522a5a = 1;
  }
  if (param_2 != 0) {
    uVar1 = UnityEngine_AnimationCurve__get_keys(param_2,0);
    uVar2 = thunk_FUN_03f9944c(DAT_09181258);
    UnityEngine_AnimationCurve___ctor(uVar2,uVar1,0);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor(0x3f800000,&local_60,uVar2,0);
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
    *(undefined8 *)(param_1 + 8) = local_60;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    uVar1 = UnityEngine_AnimationCurve__get_keys(param_2,0);
    uVar2 = thunk_FUN_03f9944c(DAT_09181258);
    UnityEngine_AnimationCurve___ctor(uVar2,uVar1,0);
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor(0x3f800000,&local_80,uVar2,0);
    *(undefined8 *)(param_1 + 0x30) = uStack_78;
    *(undefined8 *)(param_1 + 0x28) = local_80;
    *(undefined8 *)(param_1 + 0x40) = uStack_68;
    *(undefined8 *)(param_1 + 0x38) = uStack_70;
    thunk_FUN_03f5d7b8(param_1 + 0x30,0);
    uVar1 = UnityEngine_AnimationCurve__get_keys(param_2,0);
    uVar2 = thunk_FUN_03f9944c(DAT_09181258);
    UnityEngine_AnimationCurve___ctor(uVar2,uVar1,0);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor(0x3f800000,&local_a0,uVar2,0);
    *(undefined8 *)(param_1 + 0x50) = uStack_98;
    *(undefined8 *)(param_1 + 0x48) = local_a0;
    *(undefined8 *)(param_1 + 0x60) = uStack_88;
    *(undefined8 *)(param_1 + 0x58) = uStack_90;
    thunk_FUN_03f5d7b8(param_1 + 0x50,0);
    uVar1 = UnityEngine_AnimationCurve__get_keys(param_2,0);
    uVar2 = thunk_FUN_03f9944c(DAT_09181258);
    UnityEngine_AnimationCurve___ctor(uVar2,uVar1,0);
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor(0x3f800000,&local_c0,uVar2,0);
    *(undefined8 *)(param_1 + 0x70) = uStack_b8;
    *(undefined8 *)(param_1 + 0x68) = local_c0;
    *(undefined8 *)(param_1 + 0x80) = uStack_a8;
    *(undefined8 *)(param_1 + 0x78) = uStack_b0;
    thunk_FUN_03f5d7b8(param_1 + 0x70,0);
    param_1[1] = param_3 & 1;
    *param_1 = param_4 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

