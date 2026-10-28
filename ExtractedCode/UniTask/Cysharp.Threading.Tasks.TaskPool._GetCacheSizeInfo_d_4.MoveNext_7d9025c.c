// rea decompile_all
// name: Cysharp.Threading.Tasks.TaskPool.<GetCacheSizeInfo>d__4$$MoveNext
// address: 0x7d9025c
// body: available
// range: 0x7d9025c-0x7d90487 inclusive
// range: 0x7d904d8-0x7d904eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d90480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d90484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d904e8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_TaskPool_<GetCacheSizeInfo>d__4__MoveNext(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long *plStack_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_09525d6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a09f0);
    FUN_03f5c2a4(&DAT_091a6b48);
    FUN_03f5c2a4(&DAT_091a6b50);
    FUN_03f5c2a4(&DAT_091a99e8);
    FUN_03f5c2a4(&DAT_091a99f0);
    FUN_03f5c2a4(&DAT_0918b8f8);
    FUN_03f5c2a4(&DAT_091bed60);
    DAT_09525d6b = 1;
  }
  plStack_28 = &local_18;
  local_30 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
LAB_07d90398:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    uVar3 = FUN_072753d4(param_1 + 0x40,DAT_091a6b48);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(local_18 + 0x58);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(local_18 + 0x50);
      uVar1 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      local_60 = 0;
      uStack_58 = 0;
      FUN_066ce094(&local_60,uVar4,uVar1,DAT_091bed60);
      *(undefined8 *)(local_18 + 0x20) = uStack_58;
      *(undefined8 *)(local_18 + 0x18) = local_60;
      thunk_FUN_03f5d7b8(local_18 + 0x18,0);
      uVar4 = 1;
      *(undefined4 *)(local_18 + 0x10) = 1;
      goto LAB_07d90468;
    }
    Cysharp_Threading_Tasks_TaskPool_<GetCacheSizeInfo>d__4__<>m__Finally2();
    *(undefined8 *)(local_18 + 0x60) = 0;
    *(undefined4 *)(local_18 + 0x10) = 0xffffffff;
    *(undefined8 *)(local_18 + 0x48) = 0;
    *(undefined8 *)(local_18 + 0x40) = 0;
    *(undefined8 *)(local_18 + 0x58) = 0;
    *(undefined8 *)(local_18 + 0x50) = 0;
    if (*(char *)(local_18 + 0x38) != '\0') {
      System_Threading_Monitor__Exit(*(undefined8 *)(local_18 + 0x30),0);
    }
    *(undefined8 *)(local_18 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_18 + 0x30),0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_0918b8f8 + 0xe4) == 0) {
      FUN_03f5c424();
      param_1 = local_18;
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(DAT_0918b8f8 + 0xb8) + 8);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(local_18 + 0x38) = 0;
    *(undefined4 *)(local_18 + 0x10) = 0xfffffffd;
    System_Threading_Monitor__Enter
              (*(undefined8 *)(local_18 + 0x30),(undefined1 *)(local_18 + 0x38),0);
    lVar2 = *(long *)(*(long *)(DAT_0918b8f8 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8888(&local_88,lVar2,DAT_091a09f0);
    uStack_58 = uStack_80;
    local_60 = local_88;
    uStack_48 = uStack_70;
    uStack_50 = local_78;
    local_40 = local_68;
    *(undefined8 *)(local_18 + 0x48) = uStack_80;
    *(undefined8 *)(local_18 + 0x40) = local_88;
    *(undefined8 *)(local_18 + 0x58) = uStack_70;
    *(undefined8 *)(local_18 + 0x50) = local_78;
    *(undefined8 *)(local_18 + 0x60) = local_68;
    thunk_FUN_03f5d7b8(local_18 + 0x40,0);
    param_1 = local_18;
    goto LAB_07d90398;
  }
  uVar4 = 0;
LAB_07d90468:
  lVar2 = local_30;
  if (local_30 == 0) {
    return uVar4;
  }
  FUN_03ed8b3c(&plStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar2);
}

