// rea decompile_all
// name: Utilities.TMPOutlineController$$Refresh
// address: 0x451f214
// body: available
// range: 0x451f214-0x451f32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451f328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451f32c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_TMPOutlineController__Refresh(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if ((DAT_095185b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185b2 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x7d8))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x7e0));
    if (((*(long *)(param_1 + 0x30) != 0) &&
        (lVar4 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar4 != 0)) &&
       (lVar6 = *(long *)(lVar4 + 0x60), lVar6 != 0)) {
      uVar5 = 0;
      do {
        if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar5) {
          return;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_0451f32c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = lVar6 + (long)(int)uVar5 * 0x50;
        lVar7 = *(long *)(lVar6 + 0x30);
        if (lVar7 == 0) break;
        uVar2 = *(ulong *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          lVar6 = *(long *)(lVar6 + 0x40);
          if (lVar6 == 0) break;
          uVar8 = 0;
          do {
            if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0451f32c;
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar8 * 0x10);
            puVar1[1] = *(undefined8 *)(param_1 + 0x28);
            *puVar1 = uVar9;
            uVar8 = uVar8 + 1;
          } while ((uVar2 & 0xffffffff) != uVar8);
        }
        lVar6 = *(long *)(lVar4 + 0x60);
        uVar5 = uVar5 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

