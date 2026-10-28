// rea decompile_all
// name: Microsoft.NET.StringTools.WeakStringCacheInterner$$InternableToString
// address: 0x73ed384
// body: available
// range: 0x73ed384-0x73ed51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ed514 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ed518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ed51c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ed4f8) */
/* WARNING: Removing unreachable block (ram,0x073ed510) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
Microsoft_NET_StringTools_WeakStringCacheInterner__InternableToString(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int local_38;
  char local_34 [4];
  long local_30;
  undefined8 local_28;
  
  if ((DAT_09520dff & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    DAT_09520dff = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_34[0] = '\0';
  local_38 = 0;
  if (*(int *)(param_2 + 0x20) == 0) {
    local_28 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  else {
    iVar1 = Microsoft_NET_StringTools_WeakStringCacheInterner__Intern(param_1,param_2,&local_28);
    local_30 = *(long *)(param_1 + 0x28);
    if (local_30 != 0) {
      local_34[0] = '\0';
      System_Threading_Monitor__Enter(local_30,local_34,0);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else if (iVar1 == 1) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fcbf70(*(long *)(param_1 + 0x28),local_28,&local_38,DAT_0919f9c8);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fca434(*(long *)(param_1 + 0x28),local_28,local_38 + 1,DAT_0919f9f0);
      uVar2 = Microsoft_NET_StringTools_InternableString__ReferenceEquals(param_2,local_28);
      if ((uVar2 & 1) == 0) {
        *(ulong *)(param_1 + 0x20) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                      *(int *)(param_2 + 0x20),(int)*(undefined8 *)(param_1 + 0x20) + 1);
      }
      if (local_34[0] != '\0') {
        System_Threading_Monitor__Exit(local_30,0);
      }
    }
  }
  return local_28;
}

