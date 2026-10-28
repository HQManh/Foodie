// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$LastIndexOf
// address: 0x741b358
// body: available
// range: 0x741b358-0x741b4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741b4ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741b4f0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator__LastIndexOf(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w5;
  long lVar4;
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined8 local_80 [2];
  ulong local_70 [3];
  undefined8 *puStack_58;
  ulong *local_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  puStack_48 = (undefined4 *)0x0;
  local_50 = (ulong *)0x0;
  local_38 = 0;
  puStack_40 = (undefined4 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_70[2] = 0;
  if ((in_w5 == 0x10000000) || (in_w5 == 0x40000000)) {
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0920d010);
    System_NotSupportedException___ctor(uVar2,uVar3,0);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d91a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
  }
  else {
    local_50 = local_70;
    local_70[0] = 0;
    local_70[1] = 0;
    puStack_58 = local_80;
    local_80[0] = 0;
    local_80[1] = 0;
    local_90[0] = 0;
    puStack_48 = local_a0;
    local_a0[0] = 0;
    puStack_40 = local_b0;
    lVar4 = 0;
    local_b0[0] = 0;
    do {
      *(undefined1 *)((long)local_50 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_58 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)local_90 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_48 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_40 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    local_70[2] = (ulong)in_w5;
    local_30 = 0;
    local_38 = 0xffffffff;
    Mono_Globalization_Unicode_SimpleCollator__LastIndexOf();
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

