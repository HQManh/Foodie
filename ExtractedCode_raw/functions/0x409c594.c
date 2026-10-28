// rea decompile_all
// name: UniRx.CountNotifier$$Increment
// address: 0x409c594
// body: available
// range: 0x409c594-0x409c7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409c77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409c7c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409c7cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409c7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409c7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0409c7c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 UniRx_CountNotifier__Increment(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_34 [4];
  
  if ((DAT_09515da8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183bd8);
    FUN_03f5c2a4(&DAT_091bbe78);
    FUN_03f5c2a4(&DAT_091e8140);
    FUN_03f5c2a4(&DAT_0918f7e8);
    DAT_09515da8 = 1;
  }
  local_34[0] = '\0';
  lVar3 = thunk_FUN_03f9944c(DAT_0918f7e8);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar3 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
  *(int *)(lVar3 + 0x18) = param_2;
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d340);
    System_ArgumentException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6b50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar4,local_34,0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x24) == iVar2) {
    if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = **(undefined8 **)(DAT_09183bd8 + 0xb8);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x18) + *(int *)(param_1 + 0x24);
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x24) = iVar1;
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_061e7ed8(*(long *)(param_1 + 0x18),0,DAT_091bbe78);
    if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_061e7ed8(*(long *)(param_1 + 0x18),3,DAT_091bbe78);
    }
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,lVar3,DAT_091e8140,0);
    if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UniRx_Disposable__Create(uVar5);
  }
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar4,0);
  }
  return uVar5;
}

