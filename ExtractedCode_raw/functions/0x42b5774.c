// rea decompile_all
// name: CakeOrder.InGame.UI.UIFollowBeltBottomRow$$IsDirty
// address: 0x42b5774
// body: available
// range: 0x42b5774-0x42b5917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b5914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_UI_UIFollowBeltBottomRow__IsDirty
          (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(long *)(param_4 + 0x40) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x40),0), lVar1 != 0)) {
    fVar3 = (float)UnityEngine_Transform__get_position(lVar1,0);
    if (*(long *)(param_4 + 0x40) != 0) {
      fVar4 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_4 + 0x40),0);
      uVar2 = UnityEngine_Screen__get_width(0);
      lVar1 = UnityEngine_Screen__get_height(0);
      fVar5 = fVar3 - *(float *)(param_4 + 0x48);
      fVar7 = param_2 - *(float *)(param_4 + 0x4c);
      fVar8 = param_3 - *(float *)(param_4 + 0x50);
      if (fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
        fVar5 = *(float *)(param_4 + 0x54);
        if (DAT_09515cee == '\0') {
          FUN_03f5c2a4(&DAT_09187e98);
          DAT_09515cee = '\x01';
        }
        fVar8 = ABS(fVar5);
        fVar7 = ABS(fVar4);
        if (ABS(fVar4) <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
        fVar8 = fVar7 * 1e-06;
        if (fVar7 * 1e-06 <= fVar6) {
          fVar8 = fVar6;
        }
        if (ABS(fVar5 - fVar4) < fVar8) {
          fVar7 = ABS(*(float *)(param_4 + 0x58));
          fVar5 = ABS(param_1);
          if (ABS(param_1) <= fVar7) {
            fVar5 = fVar7;
          }
          fVar7 = fVar5 * 1e-06;
          if (fVar5 * 1e-06 <= fVar6) {
            fVar7 = fVar6;
          }
          if ((ABS(*(float *)(param_4 + 0x58) - param_1) < fVar7) &&
             ((uVar2 & 0xffffffff | lVar1 << 0x20) == *(ulong *)(param_4 + 0x5c))) {
            return 0;
          }
        }
      }
      *(float *)(param_4 + 0x48) = fVar3;
      *(float *)(param_4 + 0x4c) = param_2;
      *(float *)(param_4 + 0x50) = param_3;
      *(float *)(param_4 + 0x54) = fVar4;
      *(float *)(param_4 + 0x58) = param_1;
      *(ulong *)(param_4 + 0x5c) = uVar2 & 0xffffffff | lVar1 << 0x20;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

