// rea decompile_all
// name: FUN_075dd3b4
// address: 0x75dd3b4
// body: available
// range: 0x75dd3b4-0x75dd5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dd5a0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_075dd3b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_09521eb1 == '\0') {
    FUN_03f5c2a4(&DAT_091bf090);
    FUN_03f5c2a4(&DAT_091bf098);
    FUN_03f5c2a4(&DAT_0917f890);
    FUN_03f5c2a4(&DAT_091debb8);
    DAT_09521eb1 = '\x01';
  }
  lVar2 = DAT_091debb8;
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  lVar4 = *(long *)(DAT_091debb8 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091debb8);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_58 = FUN_067b19c4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0x38) + 8));
  iVar6 = 0;
  iVar5 = 0;
  while( true ) {
    if (*(int *)(DAT_0917f890 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = DAT_091bf090;
    lVar4 = *(long *)(DAT_091bf090 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(int **)(lVar2 + 0xb8) <= iVar5) break;
    if (*(int *)(DAT_0917f890 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = FUN_067b9cc4(local_58,iVar5,DAT_091bf098);
    if (uVar3 != 0) goto LAB_075dd558;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
  }
  uVar3 = 0;
LAB_075dd558:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (uint)((uVar3 - 1 ^ uVar3) * 0x100020004 >> 0x31) + iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

