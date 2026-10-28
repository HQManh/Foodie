// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$InsertUniTaskSynchronizationContext
// address: 0x7d8d7ec
// body: available
// range: 0x7d8d7ec-0x7d8dbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8dbe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_PlayerLoopHelper__InsertUniTaskSynchronizationContext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09525d4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091caea8);
    FUN_03f5c2a4(&DAT_091cb558);
    FUN_03f5c2a4(&DAT_09178e30);
    FUN_03f5c2a4(&DAT_091af0f8);
    FUN_03f5c2a4(&DAT_091af100);
    FUN_03f5c2a4(&DAT_091af108);
    FUN_03f5c2a4(&DAT_091af0e0);
    FUN_03f5c2a4(&DAT_0917c918);
    FUN_03f5c2a4(&DAT_0917e000);
    FUN_03f5c2a4(&DAT_091ee628);
    FUN_03f5c2a4(&DAT_091ee630);
    FUN_03f5c2a4(&DAT_091ee638);
    FUN_03f5c2a4(&DAT_09193470);
    FUN_03f5c2a4(&DAT_091ddbb8);
    FUN_03f5c2a4(&DAT_09173360);
    FUN_03f5c2a4(&DAT_09193488);
    DAT_09525d4f = 1;
  }
  uVar2 = DAT_09173360;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_e0 = System_Type__GetTypeFromHandle(uVar2,0);
  thunk_FUN_03f5d7b8(&local_e0,local_e0);
  uVar2 = thunk_FUN_03f9944c(DAT_09193488);
  UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction___ctor(uVar2,0,DAT_091ddbb8,0);
  local_d0 = uVar2;
  thunk_FUN_03f5d7b8(&local_d0,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_a8 = uStack_d8;
  local_b0 = local_e0;
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  local_90 = local_c0;
  if (*(int *)(DAT_09193470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_09193470 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar5 = thunk_FUN_03f9944c(DAT_09178e30);
    FUN_0532668c(lVar5,uVar7,DAT_091ee628,0);
    plVar3 = (long *)(*(long *)(DAT_09193470 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_03f5d7b8(plVar3,lVar5);
  }
  uVar2 = FUN_04b0ce70(uVar2,lVar5,DAT_091cb558);
  uVar2 = FUN_04b04a6c(uVar2,DAT_091caea8);
  lVar5 = thunk_FUN_03f9944c(DAT_0917c918);
  FUN_0582893c(lVar5,uVar2,DAT_091af0e0);
  if (*(int *)(DAT_09193470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
  lVar6 = puVar4[2];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09193470 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
    }
    uVar2 = *puVar4;
    lVar6 = thunk_FUN_03f9944c(DAT_0917e000);
    FUN_05d796d4(lVar6,uVar2,DAT_091ee630,0);
    plVar3 = (long *)(*(long *)(DAT_09193470 + 0xb8) + 0x10);
    *plVar3 = lVar6;
    thunk_FUN_03f5d7b8(plVar3,lVar6);
  }
  if (lVar5 != 0) {
    iVar1 = FUN_05829b70(lVar5,lVar6,DAT_091af0f8);
    if (iVar1 == -1) {
      if (*(int *)(DAT_09193470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
      lVar6 = puVar4[3];
      if (lVar6 == 0) {
        if (*(int *)(DAT_09193470 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_09193470 + 0xb8);
        }
        uVar2 = *puVar4;
        lVar6 = thunk_FUN_03f9944c(DAT_0917e000);
        FUN_05d796d4(lVar6,uVar2,DAT_091ee638,0);
        plVar3 = (long *)(*(long *)(DAT_09193470 + 0xb8) + 0x18);
        *plVar3 = lVar6;
        thunk_FUN_03f5d7b8(plVar3,lVar6);
      }
      iVar1 = FUN_05829b70(lVar5,lVar6,DAT_091af0f8);
    }
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    uStack_68 = uStack_98;
    uStack_70 = local_a0;
    local_60 = local_90;
    FUN_0582a29c(lVar5,iVar1 + 1,&local_80,DAT_091af100);
    FUN_0582b114(lVar5,DAT_091af108);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

