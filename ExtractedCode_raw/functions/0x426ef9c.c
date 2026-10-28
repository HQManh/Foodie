// rea decompile_all
// name: CakeOrder.MapPetAssistantConfig.<SetUpAfterSpawn>d__9$$MoveNext
// address: 0x426ef9c
// body: available
// range: 0x426ef9c-0x426f11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426f10c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426f110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426f114 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426f118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapPetAssistantConfig_<SetUpAfterSpawn>d__9__MoveNext(undefined4 *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09517004 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09202510);
    DAT_09517004 = 1;
  }
  lVar4 = *(long *)(param_1 + 6);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
    if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = CakeOrder_MapPetAssistantConfig__ImportData(uVar2,*(undefined8 *)(lVar4 + 0x20));
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(DAT_09202510,0);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x30);
        *plVar7 = lVar4;
        thunk_FUN_03f5d7b8(plVar7);
      }
    }
  }
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091866a8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0426f0f8;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0426f0f8:
                    /* WARNING: Could not recover jumptable at 0x0426f108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}

