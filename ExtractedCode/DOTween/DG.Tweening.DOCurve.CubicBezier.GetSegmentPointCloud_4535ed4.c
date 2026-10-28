// rea decompile_all
// name: DG.Tweening.DOCurve.CubicBezier$$GetSegmentPointCloud
// address: 0x4535ed4
// body: available
// range: 0x4535ed4-0x4535ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4535ff0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4535ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_DOCurve_CubicBezier__GetSegmentPointCloud
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09518679 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518679 = 1;
  }
  if ((int)param_7 < 3) {
    param_7 = 2;
  }
  lVar1 = FUN_03f5c394(DAT_091807f8,(ulong)param_7);
  if (lVar1 != 0) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(lVar1 + 0x28);
    do {
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = param_2;
      uVar6 = param_3;
      uVar4 = DG_Tweening_DOCurve_CubicBezier__GetPointOnSegment
                        (param_1,param_2,param_3,param_4,param_5,param_6);
      uVar2 = uVar2 + 1;
      puVar3[-2] = uVar4;
      puVar3[-1] = uVar5;
      *puVar3 = uVar6;
      puVar3 = puVar3 + 3;
    } while (param_7 != uVar2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

