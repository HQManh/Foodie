// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskCompletionSource$$TrySignalCompletion
// address: 0x7da0834
// body: available
// range: 0x7da0834-0x7da09eb inclusive
// range: 0x7da0a64-0x7da0b13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da09e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da0b0c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da0b10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07da0a8c) */

bool Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySignalCompletion
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_d8;
  long *plStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  long local_b8;
  char *local_b0;
  undefined8 *local_a8;
  undefined4 local_98;
  long local_90;
  long *plStack_88;
  long local_80;
  undefined8 uStack_78;
  char local_64 [4];
  undefined8 local_58;
  
  if ((DAT_09525e8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1ed0);
    FUN_03f5c2a4(&DAT_091a1ed8);
    FUN_03f5c2a4(&DAT_091a1ee0);
    FUN_03f5c2a4(&DAT_091aa948);
    FUN_03f5c2a4(&DAT_09188ac8);
    DAT_09525e8d = 1;
  }
  local_58 = 0;
  local_64[0] = '\0';
  local_98 = 0;
  plStack_88 = (long *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  iVar1 = thunk_FUN_03f95674(param_1 + 0x40,param_2,0,0);
  if (iVar1 == 0) {
    plVar5 = (long *)(param_1 + 0x20);
    if (*plVar5 == 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09188ac8);
      System_Object___ctor(uVar2,0);
      System_Threading_Interlocked__CompareExchange(plVar5,uVar2,0,0);
    }
    local_58 = thunk_FUN_03f6a508(plVar5,0);
    local_b0 = local_64;
    local_64[0] = '\0';
    local_b8 = 0;
    local_a8 = &local_58;
    System_Threading_Monitor__Enter(local_58,local_64,0);
    plVar5 = (long *)(param_1 + 0x28);
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(lVar4 + 0x28));
    }
    plVar6 = (long *)(param_1 + 0x38);
    if (*plVar6 != 0) {
      FUN_056bf200(&local_d8,*plVar6,DAT_091aa948);
      plStack_88 = plStack_d0;
      local_90 = local_d8;
      plStack_d0 = &local_90;
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      local_d8 = 0;
      while (uVar3 = FUN_07189294(&local_90,DAT_091a1ed8), (uVar3 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(local_80 + 0x18))
                  (*(undefined8 *)(local_80 + 0x40),uStack_78,*(undefined8 *)(local_80 + 0x28));
      }
      FUN_07189290(plStack_d0,DAT_091a1ed0);
      if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548();
      }
    }
    *plVar5 = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    *plVar6 = 0;
    thunk_FUN_03f5d7b8(plVar6,0);
    if (*local_b0 != '\0') {
      System_Threading_Monitor__Exit(*local_a8,0);
    }
    if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
  }
  return iVar1 == 0;
}

