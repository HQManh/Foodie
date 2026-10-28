// rea decompile_all
// name: System.Globalization.CultureInfo$$GetCultureInfo
// address: 0x75492d8
// body: available
// range: 0x75492d8-0x754949f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7549494 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7549498 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754949c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07549498) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_Globalization_CultureInfo__GetCultureInfo(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char local_34 [4];
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_095218ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919d6d8);
    DAT_095218ff = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_34[0] = '\0';
  if (param_1 < 1) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09219f08);
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
    System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c6c98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_34[0] = '\0';
  local_30 = *(undefined8 *)(*(long *)(DAT_09182ff8 + 0xb8) + 8);
  System_Threading_Monitor__Enter(local_30,local_34,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09182ff8 + 0xb8) + 0x28);
  if (lVar5 != 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(*(long *)(DAT_09182ff8 + 0xb8) + 0x28);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    uVar1 = FUN_06ef1fe8(lVar5,param_1,&local_28,DAT_0919d6d8);
    if ((uVar1 & 1) != 0) goto LAB_07549400;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09182ff8);
  System_Globalization_CultureInfo___ctor(uVar2,param_1,0,1);
  local_28 = uVar2;
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Globalization_CultureInfo__insert_into_shared_tables(uVar2);
LAB_07549400:
  uVar2 = local_28;
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(local_30,0);
  }
  return uVar2;
}

