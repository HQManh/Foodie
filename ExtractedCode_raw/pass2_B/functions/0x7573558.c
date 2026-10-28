// rea decompile_all
// name: System.IO.TextReader$$Read
// address: 0x7573558
// body: available
// range: 0x7573558-0x7573773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75736c0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75736d8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573770 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_IO_TextReader__Read(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  if ((DAT_09521a4a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197198);
    FUN_03f5c2a4(&DAT_09175028);
    FUN_03f5c2a4(&DAT_091ba960);
    FUN_03f5c2a4(&DAT_091ba958);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521a4a = 1;
  }
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(DAT_09175028 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = DAT_09197198;
  lVar2 = *(long *)(DAT_09197198 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    local_38 = (**(code **)(*plVar4 + 0x178))
                         (plVar4,param_3 & 0xffffffff,*(undefined8 *)(*plVar4 + 0x180));
    plStack_50 = &local_38;
    local_58 = 0;
    uVar1 = (**(code **)(*param_1 + 0x1e8))
                      (param_1,local_38,0,param_3 & 0xffffffff,*(undefined8 *)(*param_1 + 0x1f0));
    if ((long)(int)param_3 < (long)(ulong)uVar1) {
      thunk_FUN_03fc39d4(&DAT_09186188);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_0920fbd0);
      System_IO_IOException___ctor(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091db2e0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    if (local_38 == 0) {
      if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_48 = 0;
      uVar7 = 0;
    }
    else {
      if (*(uint *)(local_38 + 0x18) < uVar1) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_48 = local_38 + 0x20;
      uVar7 = uVar1;
    }
    local_40 = (ulong)uVar7;
    FUN_06109210(&local_48,param_2,param_3,DAT_091ba960);
    FUN_03eb41e0(&local_58);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

