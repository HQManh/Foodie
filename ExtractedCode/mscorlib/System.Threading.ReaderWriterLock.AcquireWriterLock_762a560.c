// rea decompile_all
// name: System.Threading.ReaderWriterLock$$AcquireWriterLock
// address: 0x762a560
// body: available
// range: 0x762a560-0x762a69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762a644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762a68c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762a694 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762a698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0762a690) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_ReaderWriterLock__AcquireWriterLock
               (long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char local_2c [4];
  long local_28;
  
  local_2c[0] = '\0';
  local_28 = param_1;
  System_Threading_Monitor__Enter(param_1,local_2c);
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 < 0) {
    iVar1 = System_Threading_Thread__get_CurrentThreadId();
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x14) = iVar6 + -1;
      goto LAB_0762a618;
    }
  }
  if (iVar6 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_Threading_LockQueue__get_IsEmpty();
    if ((uVar3 & 1) == 0) goto LAB_0762a5dc;
  }
  else {
LAB_0762a5dc:
    do {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = System_Threading_LockQueue__Wait(*(long *)(param_1 + 0x20),param_2);
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_091814c0);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_092109b8);
        System_ApplicationException___ctor(uVar4,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d6fd8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
    } while (*(int *)(param_1 + 0x14) != 0);
  }
  *(int *)(param_1 + 0x14) = -param_3;
  uVar2 = System_Threading_Thread__get_CurrentThreadId();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
LAB_0762a618:
  if (local_2c[0] != '\0') {
    FUN_03f6a050(local_28);
  }
  return;
}

