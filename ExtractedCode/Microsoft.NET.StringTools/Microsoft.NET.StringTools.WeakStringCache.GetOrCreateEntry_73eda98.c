// rea decompile_all
// name: Microsoft.NET.StringTools.WeakStringCache$$GetOrCreateEntry
// address: 0x73eda98
// body: available
// range: 0x73eda98-0x73edd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73edce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73edcf0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73edcf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73edcf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73edd00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073edcc4) */
/* WARNING: Removing unreachable block (ram,0x073edcfc) */
/* WARNING: Removing unreachable block (ram,0x073edcec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long Microsoft_NET_StringTools_WeakStringCache__GetOrCreateEntry
               (long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char local_54 [4];
  long local_50;
  long local_48;
  
  if ((DAT_09520dfb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b6e0);
    FUN_03f5c2a4(&DAT_0919b6e8);
    FUN_03f5c2a4(&DAT_0919b6f8);
    FUN_03f5c2a4(&DAT_09195f50);
    DAT_09520dfb = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_54[0] = '\0';
  uVar1 = Microsoft_NET_StringTools_InternableString__GetHashCode(param_2);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_06d639b0(*(long *)(param_1 + 0x10),uVar1,&local_48,DAT_0919b6e8);
    if ((uVar4 & 1) != 0) {
      local_54[0] = '\0';
      local_50 = local_48;
      System_Threading_Monitor__Enter(local_48,local_54,0);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__GetString
                        (local_48,param_2);
      if (lVar5 == 0) {
        lVar5 = Microsoft_NET_StringTools_InternableString__ExpensiveConvertToString(param_2);
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__SetString(local_48,lVar5);
        *param_3 = 0;
      }
      else {
        *param_3 = 1;
      }
      if (local_54[0] != '\0') {
        System_Threading_Monitor__Exit(local_50,0);
      }
      return lVar5;
    }
    lVar5 = Microsoft_NET_StringTools_InternableString__ExpensiveConvertToString(param_2);
    lVar6 = thunk_FUN_03f9944c(DAT_09195f50);
    System_Object___ctor(lVar6,0);
    local_48 = lVar6;
    if (lVar6 != 0) {
      Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__SetString(lVar6,lVar5);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_06d633e8(*(long *)(param_1 + 0x10),uVar1,local_48,DAT_0919b6e0);
        iVar3 = *(int *)(param_1 + 0x18);
        if (*(long *)(param_1 + 0x10) != 0) {
          iVar2 = FUN_06d64f34(*(long *)(param_1 + 0x10),DAT_0919b6f8);
          if ((iVar3 <= iVar2) &&
             (iVar2 = thunk_FUN_03f95674((int *)(param_1 + 0x18),0x7fffffff,iVar3,0), iVar2 == iVar3
             )) {
            Microsoft_NET_StringTools_WeakStringCache__Scavenge(param_1);
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_073edce8;
            iVar3 = FUN_06d64f34(*(long *)(param_1 + 0x10),DAT_0919b6f8);
            *(int *)(param_1 + 0x18) = iVar3 << 1;
          }
          *param_3 = 0;
          return lVar5;
        }
      }
    }
  }
LAB_073edce8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

