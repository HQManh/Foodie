// rea decompile_all
// name: System.Decimal$$ToUInt32
// address: 0x76154a4
// body: available
// range: 0x76154a4-0x761562b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7615624 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7615628 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal__ToUInt32(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_1;
  local_40 = param_2;
  if ((DAT_0952208f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_0952208f = 1;
  }
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522150 == '\0') {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09522150 = '\x01';
  }
  if ((param_1 & 0xff0000) == 0) {
    iVar4 = (int)(param_1 >> 0x20);
    iVar5 = (int)((ulong)param_2 >> 0x20);
  }
  else {
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Decimal_DecCalc__InternalRound(&local_48,(uint)param_1 >> 0x10 & 0xff,2);
    iVar4 = local_48._4_4_;
    iVar5 = local_40._4_4_;
  }
  if (iVar5 == 0 && iVar4 == 0) {
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((-1 < (int)local_48) || ((int)local_40 == 0)) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_07615628;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09188d78);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09212d28);
  System_OverflowException___ctor(uVar2,uVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c8148);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
LAB_07615628:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

