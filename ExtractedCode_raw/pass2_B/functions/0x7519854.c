// rea decompile_all
// name: System.TimeZoneInfo.CachedData$$CreateLocal
// address: 0x7519854
// body: available
// range: 0x7519854-0x7519987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7519980 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7519984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0751997c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_TimeZoneInfo_CachedData__CreateLocal(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_54 [4];
  
  if ((DAT_09521734 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521734 = 1;
  }
  local_54[0] = '\0';
  System_Threading_Monitor__Enter(param_1,local_54,0);
  plVar5 = (long *)(param_1 + 0x10);
  lVar6 = *plVar5;
  thunk_FUN_03f6a5cc();
  if (lVar6 == 0) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_TimeZoneInfo__GetLocalTimeZone();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    uVar8 = *(undefined8 *)(lVar6 + 0x40);
    lVar6 = thunk_FUN_03f9944c(DAT_0918bdc0);
    System_TimeZoneInfo___ctor(lVar6,uVar2,uVar3,uVar4,uVar7,uVar1,uVar8,0);
    thunk_FUN_03f6a5cc();
    *plVar5 = lVar6;
    thunk_FUN_03f5d7b8(plVar5,lVar6);
  }
  if (local_54[0] != '\0') {
    System_Threading_Monitor__Exit(param_1,0);
  }
  return lVar6;
}

