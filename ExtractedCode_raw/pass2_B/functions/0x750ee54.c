// rea decompile_all
// name: System.TimeZoneInfo$$GetDirectoryEntryFullPath
// address: 0x750ee54
// body: available
// range: 0x750ee54-0x750efbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750efbc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__GetDirectoryEntryFullPath(undefined8 param_1,long param_2)

{
  short sVar1;
  long lVar2;
  short *psVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_250 [520];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_095216da & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba950);
    DAT_095216da = 1;
  }
  memset(auStack_250,0,0x200);
  auVar6 = Interop_Sys_DirectoryEntry__GetName(param_1,auStack_250,0x100,0);
  psVar3 = auVar6._0_8_;
  if (auVar6._8_4_ == 2) {
    if (*psVar3 == 0x2e) {
      sVar1 = psVar3[1];
      goto LAB_0750ef14;
    }
  }
  else if (auVar6._8_4_ == 1) {
    sVar1 = *psVar3;
LAB_0750ef14:
    if (sVar1 == 0x2e) {
      uVar4 = 0;
      goto LAB_0750ef94;
    }
  }
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
  }
  if (param_2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = System_String__GetRawStringData(param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_IO_Path__Join(uVar4,uVar5,psVar3,auVar6._8_8_,0);
LAB_0750ef94:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

