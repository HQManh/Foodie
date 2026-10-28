// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$Cull
// address: 0x44059bc
// body: available
// range: 0x44059bc-0x4405b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4405b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__Cull
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  long lVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_50 = param_1;
  uStack_4c = param_2;
  local_48 = param_3;
  uStack_44 = param_4;
  if ((DAT_09517e94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091be000);
    FUN_03f5c2a4(&DAT_09207798);
    DAT_09517e94 = 1;
  }
  lVar9 = param_5[0x1e];
  fVar8 = *(float *)(param_5 + 0x1f);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  uVar1 = 1;
  uVar5 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  fVar3 = (float)lVar9 - (float)uVar5;
  fVar6 = (float)((ulong)lVar9 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
  fVar8 = fVar8 - *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  uVar7 = 0x2edbe6fe;
  if ((9.9999994e-11 <= fVar8 * fVar8 + fVar3 * fVar3 + fVar6 * fVar6) && ((param_6 & 1) != 0)) {
    uVar4 = Coffee_UIExtensions_UIParticleRenderer__get_rootCanvasRect(param_5);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_043c0980(uVar4,uVar7,param_3,param_4,&local_50,1,0);
    uVar1 = uVar1 ^ 1;
  }
  lVar9 = UnityEngine_UI_Graphic__get_canvasRenderer(param_5,0);
  if (lVar9 != 0) {
    uVar2 = UnityEngine_CanvasRenderer__get_cull(lVar9,0);
    if ((uVar1 & 1) == (uVar2 & 1)) {
      return;
    }
    lVar9 = UnityEngine_UI_Graphic__get_canvasRenderer(param_5,0);
    if (lVar9 != 0) {
      UnityEngine_CanvasRenderer__set_cull(lVar9,uVar1 & 1,0);
      UnityEngine_UISystemProfilerApi__AddMarker(DAT_09207798,param_5,0);
      if (param_5[0x18] != 0) {
        FUN_0647e72c(param_5[0x18],uVar1 & 1,DAT_091be000);
        (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

