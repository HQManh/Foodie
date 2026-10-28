// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$SetPaused
// address: 0x407c73c
// body: available
// range: 0x407c73c-0x407c883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaBlenderView__SetPaused(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_09515c40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c40 = 1;
  }
  *(byte *)(param_1 + 0x9e) = param_2 & 1;
  if (*(long *)(param_1 + 0xb8) != 0) {
    CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__SetPaused(*(long *)(param_1 + 0xb8),param_2 & 1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = CakeOrder_InGame_Pasta_PastaBlenderView__StateOf(param_1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = Spine_AnimationState__GetCurrent(lVar2,0,0);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    if (lVar3 != 0) {
      fVar6 = *(float *)(param_1 + 0xb0);
      if (fVar6 <= 0.0) {
        fVar6 = 1.0;
      }
      *(float *)(lVar3 + 0x15c) = fVar6;
      if (lVar2 != 0) {
        fVar6 = *(float *)(param_1 + 0xb4);
        if (fVar6 <= 0.0) {
          fVar6 = 1.0;
        }
        *(float *)(lVar2 + 0xa4) = fVar6;
      }
      Spine_Unity_SkeletonAnimation__Update(0,lVar3,0);
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0407c868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
        return;
      }
    }
  }
  else if (lVar3 != 0) {
    if (0.0 < *(float *)(lVar3 + 0x15c)) {
      *(float *)(param_1 + 0xb0) = *(float *)(lVar3 + 0x15c);
    }
    if (lVar2 != 0) {
      if (0.0 < *(float *)(lVar2 + 0xa4)) {
        *(float *)(param_1 + 0xb4) = *(float *)(lVar2 + 0xa4);
      }
      *(undefined4 *)(lVar3 + 0x15c) = 0;
      *(undefined4 *)(lVar2 + 0xa4) = 0;
      return;
    }
    *(undefined4 *)(lVar3 + 0x15c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

