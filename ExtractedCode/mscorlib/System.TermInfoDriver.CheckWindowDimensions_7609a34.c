// rea decompile_all
// name: System.TermInfoDriver$$CheckWindowDimensions
// address: 0x7609a34
// body: available
// range: 0x7609a34-0x7609b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7609b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__CheckWindowDimensions(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((DAT_09522011 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ba00);
    DAT_09522011 = 1;
  }
  if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_0918ba00 + 0xb8);
  puVar5 = (uint *)*puVar3;
  if (puVar5 == (uint *)0x0) {
    return;
  }
  if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
    FUN_03f5c424();
    puVar3 = *(undefined8 **)(DAT_0918ba00 + 0xb8);
    puVar5 = (uint *)*puVar3;
  }
  uVar4 = *puVar5;
  if (*(uint *)(puVar3 + 1) == uVar4) {
    return;
  }
  if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
    FUN_03f5c424();
    puVar3 = *(undefined8 **)(DAT_0918ba00 + 0xb8);
    uVar4 = *(uint *)*puVar3;
  }
  if (uVar4 == 0xffffffff) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_07609b50:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x70) = iVar1;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07609b50;
    uVar2 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),2);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x74);
      goto LAB_07609b34;
    }
  }
  else {
    if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_0918ba00 + 0xb8);
      uVar4 = *(uint *)*puVar3;
    }
    uVar2 = uVar4 & 0xffff;
    *(uint *)(puVar3 + 1) = uVar4;
    *(int *)(param_1 + 0x70) = (int)uVar4 >> 0x10;
  }
  *(uint *)(param_1 + 0x74) = uVar2;
LAB_07609b34:
  *(uint *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x70);
  return;
}

