// rea decompile_all
// name: System.IO.MemoryStream$$WriteByte
// address: 0x756a1d4
// body: available
// range: 0x756a1d4-0x756a29f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756a298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756a29c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_MemoryStream__WriteByte(long param_1,undefined1 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  System_IO_MemoryStream__EnsureNotClosed();
  System_IO_MemoryStream__EnsureWriteable(param_1);
  uVar7 = *(uint *)(param_1 + 0x34);
  iVar5 = *(int *)(param_1 + 0x38);
  if ((int)uVar7 < iVar5) goto LAB_0756a264;
  iVar2 = uVar7 + 1;
  if (iVar2 < *(int *)(param_1 + 0x3c)) {
    uVar6 = uVar7;
    if (iVar5 < (int)uVar7) {
LAB_0756a240:
      System_Array__Clear(*(undefined8 *)(param_1 + 0x28),iVar5,uVar6 - iVar5,0);
      uVar7 = *(uint *)(param_1 + 0x34);
    }
  }
  else {
    uVar3 = System_IO_MemoryStream__EnsureCapacity(param_1,iVar2);
    uVar6 = *(uint *)(param_1 + 0x34);
    bVar1 = iVar5 < (int)uVar7;
    uVar7 = uVar6;
    if ((bVar1) && ((uVar3 & 1) == 0)) {
      iVar5 = *(int *)(param_1 + 0x38);
      goto LAB_0756a240;
    }
  }
  *(int *)(param_1 + 0x38) = iVar2;
LAB_0756a264:
  lVar4 = *(long *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x34) = uVar7 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined1 *)(lVar4 + (int)uVar7 + 0x20) = param_2;
  return;
}

