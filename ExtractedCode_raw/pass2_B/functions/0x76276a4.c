// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue$$Dispatch
// address: 0x76276a4
// body: available
// range: 0x76276a4-0x76278f7 inclusive
// range: 0x762792c-0x7627967 inclusive
// range: 0x7627a94-0x7627ae7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76278f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762795c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627964 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627ae4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07627880) */
/* WARNING: Removing unreachable block (ram,0x07627a94) */
/* WARNING: Removing unreachable block (ram,0x07627960) */
/* WARNING: Removing unreachable block (ram,0x07627ae4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 System_Threading_ThreadPoolWorkQueue__Dispatch(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  long lVar10;
  char local_64 [4];
  long *local_60;
  char local_54;
  
  if ((DAT_0952217b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186818);
    FUN_03f5c2a4(&DAT_0918bcf0);
    DAT_0952217b = 1;
  }
  local_54 = '\0';
  local_60 = (long *)0x0;
  local_64[0] = '\0';
  if (*(int *)(DAT_0918bcf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = *(long *)(*(long *)(DAT_0918bcf0 + 0xb8) + 8);
  iVar2 = System_Environment__get_TickCount(0);
  if (lVar10 == 0) {
LAB_07627ae0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Threading_ThreadPoolWorkQueue__MarkThreadRequestSatisfied(lVar10);
  local_60 = (long *)0x0;
  local_54 = '\x01';
  uVar4 = System_Threading_ThreadPoolWorkQueue__EnsureCurrentThreadHasQueue(lVar10);
  do {
    iVar3 = System_Environment__get_TickCount(0);
    if (0x1d < iVar3 - iVar2) {
LAB_0762792c:
      uVar9 = 1;
      goto LAB_07627a9c;
    }
    local_64[0] = '\0';
    if (lVar10 == 0) {
LAB_07627958:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Threading_ThreadPoolWorkQueue__Dequeue(lVar10,uVar4,&local_60,local_64);
    if (local_60 == (long *)0x0) {
      uVar9 = 1;
      local_54 = local_64[0];
      goto LAB_07627a9c;
    }
    if (lVar10 == 0) goto LAB_07627958;
    System_Threading_ThreadPoolWorkQueue__EnsureThreadRequested();
    if (local_60 == (long *)0x0) goto LAB_0762792c;
    if (*(int *)(DAT_0918bcf0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = local_60;
    if (*(char *)(*(long *)(DAT_0918bcf0 + 0xb8) + 5) == '\0') {
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_60;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186818) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076278d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60,DAT_09186818,0);
LAB_076278d8:
      (*(code *)*puVar5)(plVar1,puVar5[1]);
      local_60 = (long *)0x0;
    }
    else {
      FUN_03f5c24c(1);
      plVar1 = local_60;
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_60;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186818) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07627848;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60,DAT_09186818,0);
LAB_07627848:
      (*(code *)*puVar5)(plVar1,puVar5[1]);
      local_60 = (long *)0x0;
      FUN_03f5c24c(0);
    }
    uVar7 = FUN_03f81b00();
  } while ((uVar7 & 1) != 0);
  uVar9 = 0;
LAB_07627a9c:
  if (local_54 != '\0') {
    if (lVar10 == 0) goto LAB_07627ae0;
    System_Threading_ThreadPoolWorkQueue__EnsureThreadRequested();
  }
  return uVar9;
}

