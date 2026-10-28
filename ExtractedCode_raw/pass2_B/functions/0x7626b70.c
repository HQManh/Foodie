// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue.QueueSegment$$TryEnqueue
// address: 0x7626b70
// body: available
// range: 0x7626b70-0x7626c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7626c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626c28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Threading_ThreadPoolWorkQueue_QueueSegment__TryEnqueue(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  thunk_FUN_03f6a5cc();
  uVar6 = (ulong)(uVar3 >> 0x10);
  do {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07626c24;
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    iVar5 = (int)uVar6;
    if (iVar5 == iVar1) goto LAB_07626c08;
    uVar2 = uVar3 & 0xffff | iVar5 << 0x10;
    thunk_FUN_03f6a5cc();
    uVar4 = FUN_03f95674((uint *)(param_1 + 0x18),uVar2 + 0x10000,uVar2);
    uVar6 = uVar4 >> 0x10 & 0xffff;
    uVar3 = (uint)uVar4;
  } while (uVar3 != uVar2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    thunk_FUN_03f6a5cc();
    puVar8 = (undefined8 *)(lVar7 + uVar6 * 8 + 0x20);
    *puVar8 = param_2;
    thunk_FUN_03f5d7b8(puVar8,param_2);
LAB_07626c08:
    return iVar5 != iVar1;
  }
LAB_07626c24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

