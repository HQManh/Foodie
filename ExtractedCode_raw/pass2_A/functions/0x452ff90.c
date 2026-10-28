// rea decompile_all
// name: Utilities.UITextFontStyleApplier$$Apply
// address: 0x452ff90
// body: available
// range: 0x452ff90-0x453010f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45300f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x453010c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UITextFontStyleApplier__Apply(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((DAT_09518637 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518637 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar6 = 0;
    while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_0453010c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x18);
        if (lVar4 != 0) {
          uVar5 = 0;
          while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_0453010c;
            lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
            if ((uVar2 & 1) == 0) {
              if (lVar4 == 0) goto LAB_045300f4;
              UnityEngine_UI_Text__set_fontStyle(lVar4,*(undefined4 *)(lVar3 + 0x10),0);
            }
            lVar4 = *(long *)(lVar3 + 0x18);
            uVar5 = uVar5 + 1;
            if (lVar4 == 0) goto LAB_045300f4;
          }
        }
        lVar4 = *(long *)(lVar3 + 0x20);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar3 + 0x10);
          uVar5 = 0;
          if (2 < iVar1 - 1U) {
            iVar1 = 0;
          }
          while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_0453010c;
            lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
            if ((uVar2 & 1) == 0) {
              if (lVar4 == 0) goto LAB_045300f4;
              TMPro_TMP_Text__set_fontStyle(lVar4,iVar1,0);
            }
            lVar4 = *(long *)(lVar3 + 0x20);
            uVar5 = uVar5 + 1;
            if (lVar4 == 0) goto LAB_045300f4;
          }
        }
      }
      lVar3 = *(long *)(param_1 + 0x28);
      uVar6 = uVar6 + 1;
      if (lVar3 == 0) {
LAB_045300f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

