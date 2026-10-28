// rea decompile_all
// name: UniRx.InternalUtil.AsyncLock$$Wait
// address: 0x418c048
// body: available
// range: 0x418c048-0x418c203 inclusive
// range: 0x418c240-0x418c2af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418c200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418c25c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418c260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418c2a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418c2ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418c258) */
/* WARNING: Removing unreachable block (ram,0x0418c148) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_InternalUtil_AsyncLock__Wait(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_09516773 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b8ac0);
    FUN_03f5c2a4(&DAT_091b8ac8);
    FUN_03f5c2a4(&DAT_091b8ad0);
    DAT_09516773 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09217090);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c1128);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  local_48 = *(undefined8 *)(param_1 + 0x10);
  local_4c[0] = '\0';
  System_Threading_Monitor__Enter(local_48,local_4c,0);
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05e2cfd8(*(long *)(param_1 + 0x10),param_2,DAT_091b8ac8);
    cVar1 = *(char *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x18) = 1;
    bVar2 = cVar1 == '\0';
  }
  else {
    bVar2 = false;
  }
  if (local_4c[0] != '\0') {
    System_Threading_Monitor__Exit(local_48,0);
  }
  if (bVar2) {
    while( true ) {
      local_48 = *(undefined8 *)(param_1 + 0x10);
      local_4c[0] = '\0';
      System_Threading_Monitor__Enter(local_48,local_4c,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar3 + 0x20) < 1) {
        lVar3 = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        iVar6 = 7;
      }
      else {
        lVar3 = FUN_05e2d168(lVar3,DAT_091b8ac0);
        iVar6 = 10;
      }
      if (local_4c[0] != '\0') {
        System_Threading_Monitor__Exit(local_48,0);
      }
      if ((iVar6 != 10) && (iVar6 != 0)) break;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
  }
  return;
}

