// rea decompile_all
// name: System.TermInfoDriver$$QueueEcho
// address: 0x760a634
// body: available
// range: 0x760a634-0x760a713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760a70c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a710 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__QueueEcho(long param_1,undefined2 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((DAT_09522015 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09522015 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 == 0) {
    uVar2 = FUN_03f5c394(DAT_0917fcc8,0x400);
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x110,uVar2);
    uVar5 = *(uint *)(param_1 + 0x118);
    lVar4 = *(long *)(param_1 + 0x110);
    uVar6 = uVar5 + 1;
    *(uint *)(param_1 + 0x118) = uVar6;
    if (lVar4 == 0) goto LAB_0760a70c;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x118);
    uVar6 = uVar5 + 1;
    *(uint *)(param_1 + 0x118) = uVar6;
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined2 *)(lVar4 + (long)(int)uVar5 * 2 + 0x20) = param_2;
  if ((uVar6 == uVar1) || (uVar3 = System_TermInfoDriver__InputPending(param_1), (uVar3 & 1) == 0))
  {
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_0760a70c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_IO_CStreamWriter__InternalWriteChars
              (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x110),
               *(undefined4 *)(param_1 + 0x118),0);
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}

