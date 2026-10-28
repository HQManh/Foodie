// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$get_Eras
// address: 0x7532e0c
// body: available
// range: 0x7532e0c-0x7532f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7532f04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7532f08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7532f14 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_GregorianCalendarHelper__get_Eras(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_09521872 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09521872 = 1;
  }
  plVar8 = (long *)(param_1 + 0x28);
  lVar3 = *plVar8;
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      thunk_FUN_03f5d7b8(plVar8,uVar4);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        lVar3 = *plVar8;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            if (uVar2 == uVar6) {
LAB_07532f08:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
            if ((lVar7 == 0) || (lVar3 == 0)) goto LAB_07532f04;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_07532f08;
            lVar1 = lVar3 + (long)(int)uVar6 * 4;
            uVar6 = uVar6 + 1;
            lVar3 = *plVar8;
            *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar7 + 0x10);
          } while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar6);
        }
        if (lVar3 != 0) goto LAB_07532ed8;
      }
    }
LAB_07532f04:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_07532ed8:
  lVar3 = System_Array__Clone(lVar3,0);
  uVar4 = DAT_091801b8;
  if (lVar3 != 0) {
    lVar5 = thunk_FUN_03f99350(lVar3,DAT_091801b8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar4);
    }
  }
  return;
}

