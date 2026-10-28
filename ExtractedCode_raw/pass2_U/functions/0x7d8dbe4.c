// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$Init
// address: 0x7d8dbe4
// body: available
// range: 0x7d8dbe4-0x7d8dd3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8dd3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_PlayerLoopHelper__Init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_09525d50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091892e0);
    DAT_09525d50 = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar3 = System_Threading_SynchronizationContext__get_Current(0);
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091892e0);
  }
  puVar4 = (undefined8 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x20);
  *puVar4 = uVar3;
  thunk_FUN_03f5d7b8(puVar4,uVar3);
  lVar5 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar5 != 0) {
    uVar2 = System_Threading_Thread__get_ManagedThreadId(lVar5,0);
    lVar5 = DAT_091814b0;
    iVar1 = *(int *)(DAT_091814b0 + 0xe4);
    *(undefined4 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x10) = uVar2;
    if (iVar1 == 0) {
      FUN_03f5c424(lVar5);
    }
    uVar3 = UnityEngine_Application__get_dataPath(0);
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = (undefined8 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x18);
    *puVar4 = uVar3;
    thunk_FUN_03f5d7b8(puVar4,uVar3);
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*(long *)(DAT_091892e0 + 0xb8) + 0x30) == 0) {
      UnityEngine_LowLevel_PlayerLoop__GetCurrentPlayerLoop(&local_78,0);
      uStack_48 = uStack_70;
      local_50 = local_78;
      uStack_38 = uStack_60;
      uStack_40 = local_68;
      local_30 = local_58;
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Cysharp_Threading_Tasks_PlayerLoopHelper__Initialize(&local_50,0xffff);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

