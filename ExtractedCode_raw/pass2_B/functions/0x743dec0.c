// rea decompile_all
// name: System.Text.StringBuilder$$Append
// address: 0x743dec0
// body: available
// range: 0x743dec0-0x743e00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743df80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e00c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Text_StringBuilder__Append(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092253a8);
    puVar4 = &DAT_091ff7a0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x20);
    iVar8 = iVar7 + param_3;
    iVar1 = iVar8 + *(int *)(param_1 + 0x24);
    if ((iVar1 <= *(int *)(param_1 + 0x28)) && (param_3 <= iVar1)) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) {
LAB_0743df80:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x18) < iVar8) {
        iVar1 = *(int *)(lVar6 + 0x18) - iVar7;
        if (0 < iVar1) {
          System_Text_StringBuilder__ThreadSafeCopy(param_2,lVar6,iVar7,iVar1);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0743df80;
          *(int *)(param_1 + 0x20) = (int)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
        }
        iVar8 = param_3 - iVar1;
        System_Text_StringBuilder__ExpandByABlock(param_1,iVar8);
        lVar6 = *(long *)(param_1 + 0x10);
        param_2 = param_2 + (long)iVar1 * 2;
        iVar7 = 0;
        param_3 = iVar8;
      }
      System_Text_StringBuilder__ThreadSafeCopy(param_2,lVar6,iVar7,param_3);
      *(int *)(param_1 + 0x20) = iVar8;
      return param_1;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092253a8);
    puVar4 = &DAT_0920f770;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar5,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da3f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

