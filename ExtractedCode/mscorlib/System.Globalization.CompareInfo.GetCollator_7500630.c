// rea decompile_all
// name: System.Globalization.CompareInfo$$GetCollator
// address: 0x7500630
// body: available
// range: 0x7500630-0x75008ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75008f4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75008f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75008fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075008d4) */
/* WARNING: Removing unreachable block (ram,0x075008f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Globalization_CompareInfo__GetCollator(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_0952166f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919f878);
    FUN_03f5c2a4(&DAT_0919f870);
    FUN_03f5c2a4(&DAT_0919f880);
    FUN_03f5c2a4(&DAT_09176af0);
    FUN_03f5c2a4(&DAT_0918ac28);
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_0952166f = 1;
  }
  local_38 = 0;
  plVar4 = (long *)(param_1 + 0x30);
  lVar1 = *plVar4;
  local_3c[0] = '\0';
  if (lVar1 == 0) {
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*(long *)(DAT_091827f8 + 0xb8) + 8) == 0) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09516ea3 == '\0') {
        FUN_03f5c2a4(&DAT_0918b378);
        DAT_09516ea3 = '\x01';
      }
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
      uVar2 = thunk_FUN_03f9944c(DAT_09176af0);
      FUN_06fd76e8(uVar2,uVar5,DAT_0919f870);
      FUN_03f955cc(*(long *)(DAT_091827f8 + 0xb8) + 8,uVar2,0);
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_3c[0] = '\0';
    local_38 = *(undefined8 *)(*(long *)(DAT_091827f8 + 0xb8) + 8);
    System_Threading_Monitor__Enter(local_38,local_3c,0);
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(DAT_091827f8 + 0xb8) + 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06fd9fbc(lVar1,*(undefined8 *)(param_1 + 0x18),plVar4,DAT_0919f878);
    if ((uVar3 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__GetCultureInfo(uVar2,0);
      lVar1 = thunk_FUN_03f9944c(DAT_0918ac28);
      Mono_Globalization_Unicode_SimpleCollator___ctor(lVar1,uVar2,0);
      *plVar4 = lVar1;
      thunk_FUN_03f5d7b8(plVar4,lVar1);
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = *(long *)(*(long *)(DAT_091827f8 + 0xb8) + 8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fd8440(lVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                   DAT_0919f880);
    }
    if (local_3c[0] != '\0') {
      System_Threading_Monitor__Exit(local_38,0);
    }
    lVar1 = *plVar4;
  }
  return lVar1;
}

