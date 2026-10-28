// rea decompile_all
// name: CakeOrder.DataSO.WeatherAudioProfileSO$$CreateDefaults
// address: 0x426bf68
// body: available
// range: 0x426bf68-0x426c0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426c0dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426c0e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426c0ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426c0f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * CakeOrder_DataSO_WeatherAudioProfileSO__CreateDefaults(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((DAT_09516fed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180c80);
    FUN_03f5c2a4(&DAT_09180838);
    FUN_03f5c2a4(&DAT_091735b0);
    DAT_09516fed = 1;
  }
  uVar1 = DAT_091735b0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar2 = System_Enum__GetValues(uVar1,0);
  uVar1 = DAT_09180838;
  if (lVar2 != 0) {
    lVar3 = thunk_FUN_03f99350(lVar2,DAT_09180838);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar1);
    }
    plVar4 = (long *)FUN_03f5c394(DAT_09180c80,*(undefined4 *)(lVar3 + 0x18));
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      lVar2 = 8;
      plVar8 = plVar4 + 4;
      do {
        if (uVar7 <= lVar2 - 8U) {
LAB_0426c0dc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = CakeOrder_DataSO_WeatherAudioProfileSO__DefaultFor
                          (*(undefined4 *)(lVar3 + lVar2 * 4));
        if (plVar4 == (long *)0x0) goto LAB_0426c0e0;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar1,0);
        }
        if ((ulong)*(uint *)(plVar4 + 3) <= lVar2 - 8U) goto LAB_0426c0dc;
        *plVar8 = lVar5;
        thunk_FUN_03f5d7b8(plVar8,lVar5);
        uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
        lVar5 = lVar2 + -7;
        lVar2 = lVar2 + 1;
        plVar8 = plVar8 + 1;
      } while (lVar5 < (int)*(uint *)(lVar3 + 0x18));
    }
    return plVar4;
  }
LAB_0426c0e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

