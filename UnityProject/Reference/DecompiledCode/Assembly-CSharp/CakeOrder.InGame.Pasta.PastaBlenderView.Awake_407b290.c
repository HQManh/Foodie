// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$ResetVisual
// address: 0x407b290
// body: available
// range: 0x407b290-0x407b293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaBlenderView__ResetVisual(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),0);
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  fVar3 = 0.01;
  if (0.01 <= *(float *)(param_1 + 0x78)) {
    fVar3 = *(float *)(param_1 + 0x78);
  }
  *(float *)(param_1 + 0xb0) = fVar3;
  if (lVar2 != 0) {
    CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Stop(lVar2);
    *(undefined1 *)(lVar2 + 0x3c) = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
  }
  lVar2 = CakeOrder_InGame_Pasta_PastaBlenderView__StateOf(param_1);
  if (lVar2 != 0) {
    Spine_AnimationState__ClearTrack(lVar2,0,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar2 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x20),0);
      if (lVar2 != 0) {
        Spine_Skeleton__SetToSetupPose(lVar2,0);
      }
      CakeOrder_InGame_Pasta_PastaBlenderView__ApplySkin(param_1,*(undefined8 *)(param_1 + 0x80));
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        fVar3 = 0.01;
        if (0.01 <= *(float *)(param_1 + 0x78)) {
          fVar3 = *(float *)(param_1 + 0x78);
        }
        *(float *)(lVar2 + 0x15c) = fVar3;
        Spine_Unity_SkeletonAnimation__Update(0,lVar2,0);
        plVar1 = *(long **)(param_1 + 0x20);
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0407b38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

