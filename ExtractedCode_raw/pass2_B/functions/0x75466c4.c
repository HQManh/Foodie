// rea decompile_all
// name: System.Globalization.EncodingTable$$GetCodePageDataItem
// address: 0x75466c4
// body: available
// range: 0x75466c4-0x75468df inclusive
// range: 0x754691c-0x754695f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75468cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75468d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75468d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75468d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75468dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754695c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0754695c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_Globalization_EncodingTable__GetCodePageDataItem(uint param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  long *plVar9;
  char local_3c [4];
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_095218e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182658);
    FUN_03f5c2a4(&DAT_0919d510);
    FUN_03f5c2a4(&DAT_0919d518);
    FUN_03f5c2a4(&DAT_09183fd0);
    FUN_03f5c2a4(&DAT_091857d8);
    DAT_095218e9 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  local_3c[0] = '\0';
  if (*(int *)(DAT_09183fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar9 = *(long **)(*(long *)(DAT_09183fd0 + 0xb8) + 0x20);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091857d8) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_075467b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091857d8,2);
LAB_075467b4:
  local_38 = (*(code *)*puVar1)(plVar9,puVar1[1]);
  local_3c[0] = '\0';
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  if (*(int *)(DAT_09183fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09183fd0 + 0xb8) + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = FUN_06ef1fe8(lVar4,param_1,&local_28,DAT_0919d510);
  uVar2 = local_28;
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
    lVar4 = DAT_09183fd0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = DAT_09183fd0;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = (uint)*(ushort *)(lVar5 + (long)(int)uVar8 * 0x10 + 0x20);
      if (uVar3 == 0) {
        uVar2 = 0;
        goto LAB_07546920;
      }
      if (uVar3 == param_1) break;
      uVar8 = uVar8 + 1;
    }
    uVar2 = thunk_FUN_03f9944c(DAT_09182658);
    System_Globalization_CodePageDataItem___ctor(uVar2,uVar8);
    local_28 = uVar2;
    if (*(int *)(DAT_09183fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09183fd0 + 0xb8) + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06ef04f8(lVar4,param_1,local_28,DAT_0919d518);
    uVar2 = local_28;
  }
LAB_07546920:
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(local_38,0);
  }
  return uVar2;
}

