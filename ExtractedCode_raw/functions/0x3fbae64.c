// rea decompile_all
// name: FUN_03fbae64
// address: 0x3fbae64
// body: available
// range: 0x3fbae64-0x3fbaf9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbaf94 to 0x3f99084 FUN_03f99084 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbaf98 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbae64(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_03fbe574(*(undefined8 *)(param_1 + 8),1);
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if ((uVar1 >> 6 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    local_50 = lVar4;
    if ((uVar1 >> 4 & 1) != 0) {
      local_50 = FUN_03fbafe4(*(undefined8 *)(param_1 + 0x10));
      if (iVar3 == -1) {
        iVar3 = FUN_03fc3948(param_1);
        local_50 = FUN_03facea0(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x114));
        param_2 = local_50;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x18);
        param_2 = *(long *)(*(long *)(param_1 + 0x10) + 0xb8);
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      FUN_03f99084(lVar4,param_2 + iVar3);
      return;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x28) < 0) {
      lVar5 = (long)&local_50 - ((ulong)*(uint *)(lVar4 + 0xf8) - 1 & 0xfffffffffffffff0);
      FUN_03fbaf9c(param_1,lVar5);
      local_50 = FUN_03f99084(lVar4,lVar5);
    }
    else {
      FUN_03fbaf9c(param_1,&local_50);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}

