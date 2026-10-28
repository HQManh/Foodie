// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass223_1$$<AnimatePlateMoves>b__4
// address: 0x44d9eac
// body: available
// range: 0x44d9eac-0x44da08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44da068 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44da088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass223_1__<AnimatePlateMoves>b__4
               (float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((DAT_09518314 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518314 = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if ((((*(long *)(param_4 + 0x30) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_4 + 0x30) + 0x10), lVar2 != 0)) &&
          (lVar2 = *(long *)(lVar2 + 0x2e8), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) {
        lVar2 = *(long *)(lVar2 + 0x18);
        fVar5 = param_1;
        if (lVar2 != 0) {
          fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(param_1,lVar2,0);
        }
        if (*(long *)(param_4 + 0x18) != 0) {
          lVar2 = *(long *)(param_4 + 0x10);
          fVar9 = *(float *)(param_4 + 0x28);
          uVar4 = *(undefined8 *)(param_4 + 0x20);
          fVar6 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x18),0);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          uVar12 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
          fVar8 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
          fVar7 = sinf(param_1 * 3.1415927);
          if (((*(long *)(param_4 + 0x30) != 0) &&
              (lVar3 = *(long *)(*(long *)(param_4 + 0x30) + 0x10), lVar3 != 0)) &&
             ((lVar3 = *(long *)(lVar3 + 0x2e8), lVar3 != 0 &&
              ((lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0 && (lVar2 != 0)))))) {
            fVar7 = fVar7 * *(float *)(lVar3 + 0x14);
            fVar10 = (float)uVar4;
            fVar11 = (float)((ulong)uVar4 >> 0x20);
            UnityEngine_Transform__set_position
                      (fVar10 + (fVar6 - fVar10) * fVar5 + (float)uVar12 * fVar7,
                       fVar11 + (param_2 - fVar11) * fVar5 + (float)((ulong)uVar12 >> 0x20) * fVar7,
                       fVar9 + fVar5 * (param_3 - fVar9) + fVar8 * fVar7,lVar2,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

