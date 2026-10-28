// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText$$EnableMarkFeatures
// address: 0x42e3120
// body: available
// range: 0x42e3120-0x42e32b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e3290 to 0x84478c0 TMPro.TMP_Text$$set_fontFeatures (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e32ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e32b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ComplexScriptText__EnableMarkFeatures(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_09517441 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aea68);
    FUN_03f5c2a4(&DAT_091aea78);
    FUN_03f5c2a4(&DAT_09180310);
    FUN_03f5c2a4(&DAT_091f3838);
    DAT_09517441 = 1;
  }
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x338);
    lVar5 = FUN_03f5c394(DAT_09180310,3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(lVar5,DAT_091f3838,0);
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        bVar3 = false;
        uVar9 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar8 == 0) goto LAB_042e32ac;
          uVar1 = *(undefined4 *)(lVar5 + 0x20 + uVar9 * 4);
          uVar6 = FUN_0589ce58(lVar8,uVar1,DAT_091aea78);
          lVar4 = DAT_091aea68;
          if ((uVar6 & 1) == 0) {
            lVar7 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_042e32ac;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
            }
            else {
              FUN_0589cad8(lVar8,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            bVar3 = true;
          }
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
        if (bVar3) {
          TMPro_TMP_Text__set_fontFeatures(param_1,lVar8,0);
          return;
        }
      }
      return;
    }
  }
LAB_042e32ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

