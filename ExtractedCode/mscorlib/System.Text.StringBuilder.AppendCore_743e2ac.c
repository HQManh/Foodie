// rea decompile_all
// name: System.Text.StringBuilder$$AppendCore
// address: 0x743e2ac
// body: available
// range: 0x743e2ac-0x743e4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743e3c4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e3e8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e4c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Text_StringBuilder__AppendCore(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0952106c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba958);
    DAT_0952106c = 1;
  }
  if (param_2 == param_1) {
    if (param_2 == 0) {
LAB_0743e464:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_Text_StringBuilder__ToString(param_2,param_3,param_4);
    System_Text_StringBuilder__Append(param_2,uVar4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x28) < (uint)(*(int *)(param_1 + 0x24) + param_4 + iVar1)) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_091fe5d8);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091fe5e8);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091da410);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    for (; 0 < param_4; param_4 = param_4 - uVar3) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_0743e464;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Math__Min(*(int *)(lVar7 + 0x18) - iVar1,param_4,0);
      if (uVar3 == 0) {
        System_Text_StringBuilder__ExpandByABlock(param_1,param_4);
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) goto LAB_0743e464;
        iVar1 = *(int *)(param_1 + 0x20);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Math__Min(*(int *)(lVar7 + 0x18) - iVar1,param_4,0);
      }
      lVar7 = *(long *)(param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0x20);
      if (lVar7 == 0) {
        if (uVar2 != 0 || uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar7 = 0;
        uVar2 = 0;
      }
      else {
        if ((*(uint *)(lVar7 + 0x18) < uVar2) || (*(uint *)(lVar7 + 0x18) - uVar2 < uVar3)) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar7 = lVar7 + (long)(int)uVar2 * 2 + 0x20;
        uVar2 = uVar3;
      }
      if (param_2 == 0) goto LAB_0743e464;
      System_Text_StringBuilder__CopyTo(param_2,param_3,lVar7,uVar2,uVar3);
      param_3 = uVar3 + param_3;
      iVar1 = *(int *)(param_1 + 0x20) + uVar3;
      *(int *)(param_1 + 0x20) = iVar1;
    }
  }
  return param_1;
}

