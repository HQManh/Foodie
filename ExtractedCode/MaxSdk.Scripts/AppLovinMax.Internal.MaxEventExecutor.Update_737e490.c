// rea decompile_all
// name: AppLovinMax.Internal.MaxEventExecutor$$Update
// address: 0x737e490
// body: available
// range: 0x737e490-0x737e6ff inclusive
// range: 0x737e7d0-0x737e827 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737e808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e810 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e81c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e824 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0737e678) */
/* WARNING: Removing unreachable block (ram,0x0737e80c) */

void AppLovinMax_Internal_MaxEventExecutor__Update(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_b0;
  char *pcStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  long local_80;
  char *pcStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  char local_54 [4];
  undefined8 local_48;
  
  if ((DAT_095209e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5600);
    FUN_03f5c2a4(&DAT_091a5608);
    FUN_03f5c2a4(&DAT_091a5610);
    FUN_03f5c2a4(&DAT_091b33f0);
    FUN_03f5c2a4(&DAT_091b33f8);
    FUN_03f5c2a4(&DAT_091b3400);
    FUN_03f5c2a4(&DAT_091b33e0);
    FUN_03f5c2a4(&DAT_0917d5b8);
    FUN_03f5c2a4(&DAT_09187f18);
    DAT_095209e5 = 1;
  }
  local_48 = 0;
  local_54[0] = '\0';
  local_88 = 0;
  pcStack_78 = (char *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = (undefined8 *)0x0;
  if (*(int *)(DAT_09187f18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  cVar2 = *(char *)(*(long *)(DAT_09187f18 + 0xb8) + 0x10);
  thunk_FUN_03f6a5cc();
  if (cVar2 == '\0') {
    lVar3 = thunk_FUN_03f9944c(DAT_0917d5b8);
    FUN_0595e268(lVar3,DAT_091b33e0);
    if (*(int *)(DAT_09187f18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    pcStack_a8 = local_54;
    local_54[0] = '\0';
    local_48 = *(undefined8 *)(*(long *)(DAT_09187f18 + 0xb8) + 8);
    local_a0 = &local_48;
    local_b0 = 0;
    System_Threading_Monitor__Enter(local_48,local_54,0);
    if (*(int *)(DAT_09187f18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0595ed30(lVar3,*(undefined8 *)(*(long *)(DAT_09187f18 + 0xb8) + 8),DAT_091b33f0);
    lVar5 = *(long *)(*(long *)(DAT_09187f18 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    thunk_FUN_03f6a5cc();
    *(undefined1 *)(*(long *)(DAT_09187f18 + 0xb8) + 0x10) = 1;
    if (local_54[0] != '\0') {
      System_Threading_Monitor__Exit(*local_a0,0);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0595f758(&local_b0,lVar3,DAT_091b3400);
    pcStack_78 = pcStack_a8;
    local_80 = local_b0;
    local_68 = uStack_98;
    local_70 = local_a0;
    local_b0 = 0;
    pcStack_a8 = (char *)&local_80;
    while (uVar4 = FUN_07228cf8(&local_80,DAT_091a5608), lVar3 = local_b0, (uVar4 & 1) != 0) {
      if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (local_70[4] != 0) {
        (*(code *)local_70[3])(local_70[8],local_70[5]);
      }
    }
    FUN_07228cf4(pcStack_a8,DAT_091a5600);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar3);
    }
  }
  return;
}

